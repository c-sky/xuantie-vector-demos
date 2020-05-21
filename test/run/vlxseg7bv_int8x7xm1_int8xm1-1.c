#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<riscv-vector.h>

#define vlen 128 
#define sew 8
#define vmul 1
#define ISUNSIGN 0
#define VCTYPE "int8"

int main(int argc, char **argv) {
        int vlmax = vmul*vlen/sew;  // vmax <= 8/1
        int N=6;
	int nf=7;
        int avl[6] = {vlmax, vlmax-1, 2*vlmax-1, 2*vlmax+1000, 2*vlmax, 0};
        char *name = argv[0];

// define vector stride
//        int c_size=0;
//        if(strcmp(VCTYPE, "int32") == 0) {
//                c_size = 4;
//        } else if (strcmp(VCTYPE, "int16") == 0) {
//                c_size = 2;
//        } else if (strcmp(VCTYPE, "int64") == 0) {
//                c_size=8;
//        } else if (strcmp(VCTYPE, "int8") == 0) {
//                c_size=1;
//        }
        signed char stride[vlmax];
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
        }

// initial args
        signed char expect;
        int8x7xm1_t bb;
        int rte = 0;
        int gvl=0;
        unsigned int vst = 0;
        long long max = 0;
        long long min = 0;
        signed char input0[20480*vlmax];
        signed char input1[20480*vlmax];
        for(int ff=0; ff<20480*vlmax; ff++) {
                input0[ff]=0;
                input1[ff]=0;
        }

// define input args
        if (argc != 7*vlmax+1)
        {
                for(int j=0;j<7*vlmax;j++){
                        input1[j] = j;
                }
        } else {
        	for(int j=0;j<7*vlmax;j++){
        	        input1[j] = strtol(argv[j+1],0,10);
        	}
	}

// trans input to stride 
        int m=0, n=0;
	if(strcmp(VCTYPE, "int8") == 0) {
		for(m=0; m< 7*vlmax; m++) {
			input0[m] = input1[m];
		}
	} else {
        	for(m=0; m < vlmax;m++){  // vlmax
        	         for(n=0; n<stride[m]; n++ ) {
        	                input0[n+stride[m]] = input1[n+m*nf];
        	        }
        	}
	}
        const signed char *a1 = (const signed char *)input0;
        int8xm1_t *a7 = (int8xm1_t *)stride;
	signed char *aa;

        for(int t=0; t<N; t++) {
                gvl = vsetvli(avl[t], RVV_E8, RVV_M1);
                bb=vlxseg7bv_int8x7xm1_int8xm1(a1, *a7, gvl);
		aa = (signed char *) &bb.v.val[0];
                for(int i=0; i<7*vlmax; i++) {
			if ( (i < avl[t] ) || (i < avl[t]+vlmax && i >= vlmax) || (i < avl[t]+2*vlmax && i >= 2*vlmax) || (i < avl[t]+3*vlmax && i >= 3*vlmax) || (i < avl[t]+4*vlmax && i >= 4*vlmax) || (i < avl[t]+5*vlmax && i >= 5*vlmax) || (i < avl[t]+6*vlmax && i >= 6*vlmax) || (i < avl[t]+7*vlmax && i >= 7*vlmax) )  {
                                if (i < vlmax)
                                        expect = input1[7*i];
                                else if(i >= vlmax && i< 2*vlmax)
                                        expect = input1[7*(i-vlmax)+1];
                                else if(i >= 2*vlmax && i< 3*vlmax)
                                        expect = input1[7*(i-2*vlmax)+2];
                                else if (i >= 3*vlmax && i< 4*vlmax)
                                        expect = input1[7*(i-3*vlmax)+3];
                                else if (i >= 4*vlmax && i< 5*vlmax)
                                        expect = input1[7*(i-4*vlmax)+4];
                                else if (i >= 5*vlmax && i< 6*vlmax)
                                        expect = input1[7*(i-5*vlmax)+5];
                                else if (i >= 6*vlmax && i< 7*vlmax)
                                        expect = input1[7*(i-6*vlmax)+6];
                                else if (i >= 7*vlmax && i< 8*vlmax)
                                        expect = input1[7*(i-7*vlmax)+7];
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
