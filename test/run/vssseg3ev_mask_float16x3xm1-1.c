#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<riscv-vector.h>

#define vlen 128 
#define sew 16
#define vmul 1
#define ISUNSIGN 0
#define VCTYPE "float16"

int main(int argc, char **argv) {
        int vlmax = vmul*vlen/sew;  // vmax <= 8/1
        int N=1;
        int nf=3;
        int avl[6] = {vlmax, vlmax-1, 2*vlmax-1, 2*vlmax+1000, 2*vlmax, 0};
	union {
                float16_t *address1;
                short int *data1;
        } output;
        union {
                float16_t address2[20480];
                short int data2[3*vlmax];
        }expect;
	float16_t input1[20480]={-1.02,2.34,5.13,-8.43,-2.77,1.22,222.54,-1986.02,762.45,-456.123,432.98,492.03,-3456.21,378.21,-832.67,67.45,53.78,-65.09,-23.41,71.45,-91.91,18.64,30.12,-94.58,-1.02,2.34,5.13,-8.43,-2.77,1.22,222.54,-1986.02,762.45,-456.123,432.98,492.03,-3456.21,378.21,-832.67,67.45,53.78,-65.09,-23.41,71.45,-91.91,18.64,30.12,-94.58,-1.02,2.34,5.13,-8.43,-2.77,1.22,222.54,-1986.02,762.45,-456.123,432.98,492.03,-3456.21,378.21,-832.67,67.45,53.78,-65.09,-23.41,71.45,-91.91,18.64,30.12,-94.58};
	float16_t input2[20480]={-1.02,2.34,5.13,-8.43,-2.77,1.22,222.54,-1986.02,762.45,-456.123,432.98,492.03,-3456.21,378.21,-832.67,67.45,53.78,-65.09,-23.41,71.45,-91.91,18.64,30.12,-94.58,-1.02,2.34,5.13,-8.43,-2.77,1.22,222.54,-1986.02,762.45,-456.123,432.98,492.03,-3456.21,378.21,-832.67,67.45,53.78,-65.09,-23.41,71.45,-91.91,18.64,30.12,-94.58,-1.02,2.34,5.13,-8.43,-2.77,1.22,222.54,-1986.02,762.45,-456.123,432.98,492.03,-3456.21,378.21,-832.67,67.45,53.78,-65.09,-23.41,71.45,-91.91,18.64,30.12,-94.58};
	short int input3[20480]={1};
        float16x3xm1_t bb;
        int rte = 0;
        int gvl=0;
        unsigned int vst = 0;
        long long max = 0;
        long long min = 0;
        char *name = argv[0];
	float16_t aa[20480]={0};

	long stride=128;
//	if(stride < 4*nf)
//		stride = 4*nf;
//	else if(stride > 32)	
//		stride = 32; 
        float16x3xm1_t *a1 = (float16x3xm1_t *)input1;
        float16x3xm1_t *a2 = (float16x3xm1_t *)input2;
        int16xm1_t *a8 = (int16xm1_t *)input3;
	e16xm1_t a3;

	for(int ff = 0; ff < nf*vlmax; ff++ ) {
		if(input3[ff] != 0)
        	        expect.address2[ff]=input2[ff];
		else
	                expect.address2[ff]=input1[ff];
        }

        for(int t=0; t<N; t++) {
                gvl = vsetvli(avl[t], RVV_E16, RVV_M1);
		a3 = vmsnevi_e16xm1_int16xm1(*a8, 0, gvl);
                vssseg3ev_mask_float16x3xm1(aa, stride, *a2, a3, gvl);
                bb=vlsseg3ev_mask_float16x3xm1(*a1, aa, stride, a3, gvl);
		output.address1 = (float16_t *) &bb.v.val[0];
                for(int i=0; i<3*vlmax; i++) {
			if ( (i < avl[t] ) || (i < avl[t]+vlmax && i >= vlmax) || (i < avl[t]+2*vlmax && i >= 2*vlmax) || (i < avl[t]+3*vlmax && i >= 3*vlmax) || (i < avl[t]+4*vlmax && i >= 4*vlmax) || (i < avl[t]+5*vlmax && i >= 5*vlmax) || (i < avl[t]+6*vlmax && i >= 6*vlmax) || (i < avl[t]+7*vlmax && i >= 7*vlmax) )  {
				if( input3[i%vlmax]!=0 ) {
							if (expect.data2[i] != output.data1[i]) 
								rte = -1;
				} else {
					if (expect.data2[i] != output.data1[i])
						rte = -1;
				}
			} else {
				if (output.data1[i] != 0) 
					rte = -1;
			}
				
			printf("Expect=%d, Actual=%d, avl=%d\n",expect.data2[i], output.data1[i], avl[t]);

                }
        }

        if ( rte != 0 )
                printf("FAIL: %s\n",name);
        else
                printf("PASS: %s\n",name);
        return rte;
}
