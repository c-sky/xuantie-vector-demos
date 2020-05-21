#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<riscv-vector.h>

#define vlen 128 
#define sew 32
#define vmul 4
#define ISUNSIGN 0
#define VCTYPE "int32"

int main(int argc, char **argv) {
        int vlmax = vmul*vlen/sew;  // vmax <= 8/1
        int N=6;
        int avl[6] = {vlmax, vlmax-1, 2*vlmax-1, 2*vlmax+1000, 2*vlmax, 0};
        char *name = argv[0];

	int strid[vlmax];
	int stride[vlmax];
        for(int r1=0; r1<vlmax; r1++) {
		if(strcmp(VCTYPE, "int8") == 0) {
			stride[r1] = r1;
		} else {
                        int temp = rand();
                        if ( temp > 32 )
                                temp = 32;
                	if(r1==0) {
                	        stride[r1] = temp;
                	} else {
                	        stride[r1] = temp+stride[r1-1];
                	}
		}
		strid[r1]=1*stride[r1];
        }

// initial args
        int expect;
        int32xm4_t bb;
        int rte = 0;
        int gvl=0;
        unsigned int vst = 0;
        long long max = 0;
        long long min = 0;
	int input1[vlmax];
        signed char input0[20480*vlmax];
        signed char input2[20480*vlmax];
	int input3[vlmax];
        for(int ff=0; ff<20480*vlmax; ff++) {
                input0[ff]=0;
                input2[ff]=0;
        }

// define input args
        if (argc != 3*vlmax+1)
        {
                for(int j=0;j<vlmax;j++){
                        input1[j] = j;
                        input2[j] = j;
                        input3[j] = j;
                }
        } else {
        	for(int j=0;j<vlmax;j++){
			input1[j] = strtol(argv[j+1],0,10);
        	        input2[j] = strtol(argv[j+1+vlmax],0,10);
			input3[j] = strtol(argv[j+1+2*vlmax],0,10);
        	}
	}

// trans input to stride 
        int m=0, n=0;
	if(strcmp(VCTYPE, "int8") == 0) {
		for(m=0; m< vlmax; m++) {
			input0[m] = input2[m];
		}
	} else {
        	for(m=0; m < vlmax;m++){  // vlmax
        	         for(n=0; n<stride[m]; n++ ) {
        	                input0[n+stride[m]] = input2[n+m];
        	        }
        	}
	}
	
	int32xm4_t *a0 = (int32xm4_t *)input1;
        const int *a1 = (const int *)input0;
        int32xm4_t *a7 = (int32xm4_t *)strid;
	int32xm4_t *a8 = (int32xm4_t *)input3;
	e32xm4_t a3;

        for(int t=0; t<N; t++) {
                gvl = vsetvli(avl[t], RVV_E32, RVV_M4);
		a3 = vmsnevi_e32xm4_int32xm4(*a8, 0, gvl);
                bb=vlxbv_mask_int32xm4(*a0, a1, *a7, a3, gvl);
                for(int i=0; i<vlmax; i++) {
			if ( i < avl[t] )  {
				if( input3[i]!=0 ) {
                       		        expect = input2[i];
				} else {
					expect = input1[i];
				}
		       } else {
                                expect =  0;
                       }

                        if ( bb[i]- expect != 0) {
                                rte = -1;
                        }
                        printf("Expect=%d,Actual=%d, avl=%d\n", expect, bb[i], avl[t]);
                }
        }

        if ( rte != 0 )
                printf("FAIL: %s\n",name);
        else
                printf("PASS: %s\n",name);
        return rte;
}
