#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<riscv-vector.h>

#define vlen 128 
#define sew 8
#define vmul 8
#define ISUNSIGN 0
#define VCTYPE "uint8"

int main(int argc, char **argv) {
        int vlmax = vmul*vlen/sew;  // vmax <= 8/1
        int N=6;
        int avl[6] = {vlmax, vlmax-1, 2*vlmax-1, 2*vlmax+1000, 2*vlmax, 0};
        char *name = argv[0];

// define vector stride
        signed char stride[vlmax];
        signed char nstride[vlmax];
        for(int r1=0; r1<vlmax; r1++) {
		stride[r1] = -1*r1;
		nstride[r1]=r1;
        }

// initial args
        unsigned char expect;
        uint8xm8_t bb;
        int rte = 0;
        int gvl=0;
        unsigned int vst = 0;
        long long max = 0;
        long long min = 0;
        unsigned char input0[20480*vlmax];
        unsigned char input2[20480*vlmax];
        for(int ff=0; ff<20480*vlmax; ff++) {
                input0[ff]=0;
                input2[ff]=0;
        }

// define input args
	 unsigned char input1[vlmax];
	unsigned char input3[vlmax];
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
	for(m=0; m< vlmax; m++) {
                if(m==0) {
                        for(n=0; n<nstride[1]; n++) {
                                input0[n+nstride[vlmax-1]] = input2[n];
                        }
                } else if(m==vlmax-1) {
                        for(n=0; n<nstride[1]; n++) {
                                input0[n] = input2[n+m];
                        }

                } else {
                        for(n=0; n<nstride[m]-nstride[m-1]; n++ ) {
                                input0[n+nstride[vlmax-1-m]] = input2[n+m];
                        }
                }
	}

	uint8xm8_t *a0 = (uint8xm8_t *)input1;
        const unsigned char *a1 = (const unsigned char *)&input0[nstride[vlmax-1]];
        uint8xm8_t *a7 = (uint8xm8_t *)stride;
	uint8xm8_t *a8 = (uint8xm8_t *)input3;
        e8xm8_t a3;

        for(int t=0; t<N; t++) {
                gvl = vsetvli(avl[t], RVV_E8, RVV_M8);
		a3 = vmsnevi_e8xm8_uint8xm8(*a8, 0, gvl);
                bb=vlxbuv_mask_uint8xm8(*a0, a1, *a7, a3, gvl);
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
