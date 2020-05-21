#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<riscv-vector.h>

#define vlen 128 
#define sew 64
#define vmul 1
#define ISUNSIGN 0
#define VCTYPE "int64"

int main(int argc, char **argv) {
        int vlmax = vmul*vlen/sew;  // vmax <= 8/1
        int N=6;
	int nf=2;
        int avl[6] = {vlmax, vlmax-1, 2*vlmax-1, 2*vlmax+1000, 2*vlmax, 0};
        char *name = argv[0];

	long long strid[vlmax];
	long long stride[vlmax];
        for(int r1=0; r1<vlmax; r1++) {
		if(strcmp(VCTYPE, "int8") == 0) {
			stride[r1] = nf*r1;
		} else {
                        int temp = rand();
                        if ( temp < nf )
                                temp = nf;
                        else if ( temp > 32 )
                                temp = 32;
                	if(r1==0) {
                	        stride[r1] = temp;
                	} else {
                	        stride[r1] = temp+stride[r1-1];
                	}
		}
		strid[r1]=4*stride[r1];
        }

// initial args
        long long expect;
        int64x2xm1_t bb;
        int rte = 0;
        int gvl=0;
        unsigned int vst = 0;
        long long max = 0;
        long long min = 0;
	long long input1[2*vlmax];
        int input0[20480*vlmax];
        int input2[20480*vlmax];
	long long input3[2*vlmax];
        for(int ff=0; ff<20480*vlmax; ff++) {
                input0[ff]=0;
                input2[ff]=0;
        }

// define input args
        if (argc != 3*2*vlmax+1)
        {
                for(int j=0;j<2*vlmax;j++){
                        input1[j] = j;
                        input2[j] = j;
                        input3[j] = j;
                }
        } else {
        	for(int j=0;j<2*vlmax;j++){
			input1[j] = strtol(argv[j+1],0,10);
        	        input2[j] = strtol(argv[j+1+2*vlmax],0,10);
			input3[j] = strtol(argv[j+1+2*2*vlmax],0,10);
        	}
	}
// trans input to stride 
        int m=0, n=0;
	if(strcmp(VCTYPE, "int8") == 0) {
		for(m=0; m< 2*vlmax; m++) {
			input0[m] = input2[m];
		}
	} else {
        	for(m=0; m < vlmax;m++){  // vlmax
        	         for(n=0; n<stride[m]; n++ ) {
        	                input0[n+stride[m]] = input2[n+m*nf];
        	        }
        	}
	}
	
	int64x2xm1_t *a0 = (int64x2xm1_t *)input1;
        const long long *a1 = (const long long *)input0;
        int64xm1_t *a7 = (int64xm1_t *)strid;
	int64xm1_t *a8 = (int64xm1_t *)input3;
	e64xm1_t a3;
	long long *aa;

        for(int t=0; t<N; t++) {
                gvl = vsetvli(avl[t], RVV_E64, RVV_M1);
		a3 = vmsnevi_e64xm1_int64xm1(*a8, 0, gvl);
                bb=vlxseg2wv_mask_int64x2xm1_int64xm1(*a0, a1, *a7, a3, gvl);
		aa = (long long *) &bb.v.val[0];
                for(int i=0; i<2*vlmax; i++) {
			if ( (i < avl[t] ) || (i < avl[t]+vlmax && i >= vlmax) || (i < avl[t]+2*vlmax && i >= 2*vlmax) || (i < avl[t]+3*vlmax && i >= 3*vlmax) || (i < avl[t]+4*vlmax && i >= 4*vlmax) || (i < avl[t]+5*vlmax && i >= 5*vlmax) || (i < avl[t]+6*vlmax && i >= 6*vlmax) || (i < avl[t]+7*vlmax && i >= 7*vlmax) )  {
				if( input3[i%vlmax]!=0 ) {
                       		                 if (i < vlmax)
                       		                         expect = input2[2*i];
                       		                 else if(i >= vlmax && i< 2*vlmax)
                       		                         expect = input2[2*(i-vlmax)+1];
                       		                 else if(i >= 2*vlmax && i< 3*vlmax)
                       		                         expect = input2[2*(i-2*vlmax)+2];
                       		                 else if (i >= 3*vlmax && i< 4*vlmax)
                       		                         expect = input2[2*(i-3*vlmax)+3];
                       		                 else if (i >= 4*vlmax && i< 5*vlmax)
                       		                         expect = input2[2*(i-4*vlmax)+4];
                       		                 else if (i >= 5*vlmax && i< 6*vlmax)
                       		                         expect = input2[2*(i-5*vlmax)+5];
                       		                 else if (i >= 6*vlmax && i< 7*vlmax)
                       		                         expect = input2[2*(i-6*vlmax)+6];
                       		                 else if (i >= 7*vlmax && i< 8*vlmax)
                       		                         expect = input2[2*(i-7*vlmax)+7];
				} else {
					expect = input1[i];
				}
		       } else {
                                expect =  0;
                       }

                        if ( aa[i]- expect != 0) {
                                rte = -1;
                        }
                        printf("Expect=%d,Actual=%d, avl=%d\n",expect, aa[i], avl[t]);
                }
        }

        if ( rte != 0 )
                printf("FAIL: %s\n",name);
        else
                printf("PASS: %s\n",name);
        return rte;
}
