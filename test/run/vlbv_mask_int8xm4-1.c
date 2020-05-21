#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<riscv-vector.h>

#define vlen 128 
#define sew 8
#define vmul 4
#define ISUNSIGN 0
#define VCTYPE "int8"

int main(int argc, char **argv) {
        int vlmax = vmul*vlen/sew;  // vmax <= 8/1
        int N=6;
        int avl[6] = {vlmax, vlmax-1, 2*vlmax-1, 2*vlmax+1000, 2*vlmax, 0};
	signed char input1[vlmax];
        signed char input2[vlmax];
	signed char input3[vlmax];
        signed char expect;
        int8xm4_t bb;
        int rte = 0;
        int gvl=0;
        unsigned int vst = 0;
        long long max = 0;
        long long min = 0;
        char *name = argv[0];
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
        int8xm4_t *a1 = (int8xm4_t *)input1;
	const signed char *a2 = (const signed char *)input2;
	int8xm4_t *a8 = (int8xm4_t *)input3;
	e8xm4_t a3;

        for(int t=0; t<N; t++) {
                gvl = vsetvli(avl[t], RVV_E8, RVV_M4);
		a3 = vmsnevi_e8xm4_int8xm4(*a8, 0, gvl);
                bb=vlbv_mask_int8xm4(*a1, a2, a3, gvl);
                for(int i=0; i<vlmax; i++) {
			if ( i < avl[t] )  {
				if( input3[i%vlmax]!=0 ) {
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
                        printf("Expect=%d,Actual=%d, avl=%d\n",expect, bb[i], avl[t]);
                }
        }

        if ( rte != 0 )
                printf("FAIL: %s\n",name);
        else
                printf("PASS: %s\n",name);
        return rte;
}
