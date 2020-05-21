#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<riscv-vector.h>

#define vlen 128 
#define sew 32
#define vmul 1
#define ISUNSIGN 0
#define VCTYPE "uint32"

int main(int argc, char **argv) {
        int vlmax = vmul*vlen/sew;  // vmax <= 8/1
        int N=1;
	int nf=5;
        int avl[6] = {vlmax, vlmax-1, 2*vlmax-1, 2*vlmax+1000, 2*vlmax, 0};
        unsigned int input1[5*vlmax];
        unsigned int input2[5*vlmax];
        unsigned int input3[5*vlmax];
        unsigned int expect;
        uint32x5xm1_t bb;
        int rte = 0;
        int gvl=0;
        unsigned int vst = 0;
        long long max = 0;
        long long min = 0;
        char *name = argv[0];
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
	
	uint32x5xm1_t *a1 = (uint32x5xm1_t *)input1;
	uint32x5xm1_t *a2 = (uint32x5xm1_t *)input2;
	uint32xm1_t *a8 = (uint32xm1_t *)input3;
	unsigned int address[20480]={0};
	e32xm1_t a3;
	unsigned int *aa;

        for(int t=0; t<N; t++) {
                gvl = vsetvli(avl[t], RVV_E32, RVV_M1);
		a3 = vmsnevi_e32xm1_uint32xm1(*a8, 0, gvl);
		vsseg5hv_mask_uint32x5xm1(address, *a2, a3, gvl);
                bb=vlseg5huv_mask_uint32x5xm1(*a1, address, a3, gvl);
		aa = (unsigned int *) &bb.v.val[0];
                for(int i=0; i<5*vlmax; i++) {
			if ( (i < avl[t] ) || (i < avl[t]+vlmax && i >= vlmax) || (i < avl[t]+2*vlmax && i >= 2*vlmax) || (i < avl[t]+3*vlmax && i >= 3*vlmax) || (i < avl[t]+4*vlmax && i >= 4*vlmax) || (i < avl[t]+5*vlmax && i >= 5*vlmax) || (i < avl[t]+6*vlmax && i >= 6*vlmax) || (i < avl[t]+7*vlmax && i >= 7*vlmax) )  {
				if( input3[i%vlmax]!=0 ) {
                       		                expect = input2[i];
		       		 } else {
                       		                 expect =  input1[i];
                       		 }
                       	} else {
                       		   expect = 0;
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
