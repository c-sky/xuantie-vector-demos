#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<riscv-vector.h>

#define vlen 128 
#define sew 8
#define vmul 8
#define ISUNSIGN 0
#define VCTYPE "int8"

int main(int argc, char **argv) {
        int vlmax = vmul*vlen/sew;  // vmax <= 8/1
        int N=6;
        int avl[6] = {vlmax, vlmax-1, 2*vlmax-1, 2*vlmax+1000, 2*vlmax, 0};
        signed char expect;
        int8xm8_t bb;
        int rte = 0;
        int gvl=0;
        unsigned int vst = 0;
        long long max = 0;
        long long min = 0;
        char *name = argv[0];
	long stride = rand();
        if ( stride > 20480 )
                stride = 20480;
	long strid = stride*1;
        signed char input0[stride*vlmax];
        signed char input1[stride*vlmax];
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
                 for(n=0; n<stride; n++ ) {
                  input0[n+m*stride] = input1[n+m];
                }
        }
        const signed char *a1 = (const signed char *)input0;

        for(int t=0; t<N; t++) {
                gvl = vsetvli(avl[t], RVV_E8, RVV_M8);
                bb=vlsbv_int8xm8(a1, strid, gvl);
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
