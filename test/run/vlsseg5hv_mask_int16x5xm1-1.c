#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<riscv-vector.h>

#define vlen 128 
#define sew 16
#define vmul 1
#define ISUNSIGN 0
#define VCTYPE "int16"

int main(int argc, char **argv) {
        int vlmax = vmul*vlen/sew;  // vmax <= 8/1
        int N=6;
	int nf=5;
        int avl[6] = {vlmax, vlmax-1, 2*vlmax-1, 2*vlmax+1000, 2*vlmax, 0};
        short int expect;
        int16x5xm1_t bb;
        int rte = 0;
        int gvl=0;
        unsigned int vst = 0;
        long long max = 0;
        long long min = 0;
        char *name = argv[0];
        long stride = rand();
        if ( stride < nf )
                stride = nf;
        else if ( stride > 20480 )
                stride = 20480;
        long strid = stride*2;
	short int input1[5*vlmax];
        short int input0[stride*vlmax];
        short int input2[stride*vlmax];
	short int input3[5*vlmax];
        if (argc != 3*5*vlmax+1)
        {
                for(int j=0;j<5*vlmax;j++){
                        input1[j] = j;
                        input2[j] = j;
                        input3[j] = j;
                }
        } else {
        	for(int j=0;j<5*vlmax;j++){
        	        input1[j] = strtol(argv[j+1],0,10);
        	        input2[j] = strtol(argv[j+1+5*vlmax],0,10);
        	        input3[j] = strtol(argv[j+1+2*5*vlmax],0,10);
        	}
	}

        int m=0, n=0;
        for(m=0; m < vlmax;m++){
                 for(n=0; n<stride; n++ ) {
                  input0[n+m*stride] = input2[n+m*5];
                }
        }

        int16x5xm1_t *a1 = (int16x5xm1_t *)input1;
	const short int *a2 = (const short int *)input0;
	int16xm1_t *a8 = (int16xm1_t *)input3;
	e16xm1_t a3;
	short int *aa;

        for(int t=0; t<N; t++) {
                gvl = vsetvli(avl[t], RVV_E16, RVV_M1);
		a3 = vmsnevi_e16xm1_int16xm1(*a8, 0, gvl);
                bb=vlsseg5hv_mask_int16x5xm1(*a1, a2, strid, a3, gvl);
		aa = (short int *) &bb.v.val[0];
                for(int i=0; i<5*vlmax; i++) {
			if ( (i < avl[t] ) || (i < avl[t]+vlmax && i >= vlmax) || (i < avl[t]+2*vlmax && i >= 2*vlmax) || (i < avl[t]+3*vlmax && i >= 3*vlmax) || (i < avl[t]+4*vlmax && i >= 4*vlmax) || (i < avl[t]+5*vlmax && i >= 5*vlmax) || (i < avl[t]+6*vlmax && i >= 6*vlmax) || (i < avl[t]+7*vlmax && i >= 7*vlmax) )  {
				if( input3[i%vlmax]!=0 ) {
                       		                 if (i < vlmax)
                       		                         expect = input2[5*i];
                       		                 else if(i >= vlmax && i< 2*vlmax)
                       		                         expect = input2[5*(i-vlmax)+1];
                       		                 else if(i >= 2*vlmax && i< 3*vlmax)
                       		                         expect = input2[5*(i-2*vlmax)+2];
                       		                 else if (i >= 3*vlmax && i< 4*vlmax)
                       		                         expect = input2[5*(i-3*vlmax)+3];
                       		                 else if (i >= 4*vlmax && i< 5*vlmax)
                       		                         expect = input2[5*(i-4*vlmax)+4];
                       		                 else if (i >= 5*vlmax && i< 6*vlmax)
                       		                         expect = input2[5*(i-5*vlmax)+5];
                       		                 else if (i >= 6*vlmax && i< 7*vlmax)
                       		                         expect = input2[5*(i-6*vlmax)+6];
                       		                 else if (i >= 7*vlmax && i< 8*vlmax)
                       		                         expect = input2[5*(i-7*vlmax)+7];
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
