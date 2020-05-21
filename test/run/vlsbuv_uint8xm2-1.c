#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<riscv-vector.h>

#define vlen 128 
#define sew 8
#define vmul 2
#define ISUNSIGN 0
#define VCTYPE "uint8"

int main(int argc, char **argv) {
        int vlmax = vmul*vlen/sew;  // vmax <= 8/1
        int N=6;
        int avl[6] = {vlmax, vlmax-1, 2*vlmax-1, 2*vlmax+1000, 2*vlmax, 0};
        unsigned char expect;
        uint8xm2_t bb;
        int rte = 0;
        int gvl=0;
        unsigned int vst = 0;
        long long max = 0;
        long long min = 0;
        char *name = argv[0];
	long stride = -rand();
        if ( stride < -20480 )
                stride = -20480;
	long strid = stride*1;
	long nstride = 0-stride;
        unsigned char input0[nstride*vlmax];
        unsigned char input1[nstride*vlmax];
        if (argc != vlmax+1)
        {
                for(int j=0;j<vlmax;j++){
                        input1[j] = j;
                }
        } else {
        	for(int j=0;j<vlmax;j++){
        	        input1[j] = strtol(argv[j+1],0,10);
        	}
	}
        int m=0, n=0;
        for(m=0; m < vlmax;m++){
                 for(n=0; n<nstride; n++ ) {
                  input0[n+(vlmax-1-m)*nstride] = input1[n+m];
                }
        }
        const unsigned char *a1 = (const unsigned char *)&input0[nstride*(vlmax-1)];

        for(int t=0; t<N; t++) {
                gvl = vsetvli(avl[t], RVV_E8, RVV_M2);
                bb=vlsbuv_uint8xm2(a1, strid, gvl);
                for(int i=0; i<vlmax; i++) {
			if ( i < avl[t] )  {
                                expect = input1[i];
			} else {
                                expect =  0;
                        }

                        if ( bb[i]- expect != 0) {
                                rte = -1;
                        }
                        printf("Expect=%d,Actual=%d, avl=%d\n",expect, bb[i], avl[t]);
                }
        }

        if ( rte != 0 )
                printf("FAIL: %s\n",name);
        else
                printf("PASS: %s\n",name);
        return rte;
}
