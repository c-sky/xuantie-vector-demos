#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<riscv-vector.h>

#define vlen 128 
#define sew 16
#define vmul 2
#define ISUNSIGN 0
#define VCTYPE "float16"

int main(int argc, char **argv) {
        int vlmax = vmul*vlen/sew;  // vmax <= 8/1
        int N=1;
        int nf=4;
        int avl[6] = {vlmax, vlmax-1, 2*vlmax-1, 2*vlmax+1000, 2*vlmax, 0};
	union {
                float16_t *address1;
                short int *data1;
        } output;
        union {
                float16_t address2[20480];
                short int data2[4*vlmax];
        }expect;
	short int input1[20480]={-1.02,2.34,5.13,-8.43,-2.77,1.22,222.54,-1986.02,762.45,-456.123,432.98,492.03,-3456.21,378.21,-832.67,67.45,53.78,-65.09,-23.41,71.45,-91.91,18.64,30.12,-94.58,-1.02,2.34,5.13,-8.43,-2.77,1.22,222.54,-1986.02,762.45,-456.123,432.98,492.03,-3456.21,378.21,-832.67,67.45,53.78,-65.09,-23.41,71.45,-91.91,18.64,30.12,-94.58,-1.02,2.34,5.13,-8.43,-2.77,1.22,222.54,-1986.02,762.45,-456.123,432.98,492.03,-3456.21,378.21,-832.67,67.45,53.78,-65.09,-23.41,71.45,-91.91,18.64,30.12,-94.58};
	float16_t input2[20480]={-1.02,2.34,5.13,-8.43,-2.77,1.22,222.54,-1986.02,762.45,-456.123,432.98,492.03,-3456.21,378.21,-832.67,67.45,53.78,-65.09,-23.41,71.45,-91.91,18.64,30.12,-94.58,-1.02,2.34,5.13,-8.43,-2.77,1.22,222.54,-1986.02,762.45,-456.123,432.98,492.03,-3456.21,378.21,-832.67,67.45,53.78,-65.09,-23.41,71.45,-91.91,18.64,30.12,-94.58,-1.02,2.34,5.13,-8.43,-2.77,1.22,222.54,-1986.02,762.45,-456.123,432.98,492.03,-3456.21,378.21,-832.67,67.45,53.78,-65.09,-23.41,71.45,-91.91,18.64,30.12,-94.58};
	short int input3[20480];
        for(int hh=0; hh<20480; hh++) {
                input3[hh]=1;
        }
        float16x4xm2_t bb;
        int rte = 0;
        int gvl=0;
        unsigned int vst = 0;
        long long max = 0;
        long long min = 0;
        char *name = argv[0];
	float16_t aa[20480]={0};

	short int stride[20480]={sew/vmul*0,sew/vmul*1,sew/vmul*2,sew/vmul*3,sew/vmul*4,sew/vmul*5,sew/vmul*6,sew/vmul*7,sew/vmul*8,sew/vmul*9,sew/vmul*10,sew/vmul*11,sew/vmul*12,sew/vmul*13,sew/vmul*14,sew/vmul*15,sew/vmul*16,sew/vmul*17,sew/vmul*18,sew/vmul*19,sew/vmul*20,sew/vmul*21,sew/vmul*22,sew/vmul*23,sew/vmul*24,sew/vmul*25,sew/vmul*26,sew/vmul*27,sew/vmul*28,sew/vmul*29,sew/vmul*30,sew/vmul*31,sew/vmul*32,sew/vmul*33,sew/vmul*34,sew/vmul*35,sew/vmul*36,sew/vmul*37,sew/vmul*38,sew/vmul*39,sew/vmul*40,sew/vmul*41,sew/vmul*42,sew/vmul*43,sew/vmul*44,sew/vmul*45,sew/vmul*46,sew/vmul*47,sew/vmul*48,sew/vmul*49,sew/vmul*50,sew/vmul*51,sew/vmul*52,sew/vmul*53,sew/vmul*54,sew/vmul*55,sew/vmul*56,sew/vmul*57,sew/vmul*58,sew/vmul*59,sew/vmul*60,sew/vmul*61,sew/vmul*62,sew/vmul*63,sew/vmul*64,sew/vmul*65,sew/vmul*66,sew/vmul*67,sew/vmul*68,sew/vmul*69,sew/vmul*70,sew/vmul*71,sew/vmul*72,sew/vmul*73,sew/vmul*74,sew/vmul*75,sew/vmul*76,sew/vmul*77,sew/vmul*78,sew/vmul*79,sew/vmul*80,sew/vmul*81,sew/vmul*82,sew/vmul*83,sew/vmul*84,sew/vmul*85,sew/vmul*86,sew/vmul*87,sew/vmul*88,sew/vmul*89,sew/vmul*90,sew/vmul*91,sew/vmul*92,sew/vmul*93,sew/vmul*94,sew/vmul*95,sew/vmul*96,sew/vmul*97,sew/vmul*98,sew/vmul*99,sew/vmul*100,sew/vmul*101,sew/vmul*102,sew/vmul*103,sew/vmul*104,sew/vmul*105,sew/vmul*106,sew/vmul*107,sew/vmul*108,sew/vmul*109,sew/vmul*110,sew/vmul*111,sew/vmul*112,sew/vmul*113,sew/vmul*114,sew/vmul*115,sew/vmul*116,sew/vmul*117,sew/vmul*118,sew/vmul*119,sew/vmul*120,sew/vmul*121,sew/vmul*122,sew/vmul*123,sew/vmul*124,sew/vmul*125,sew/vmul*126,sew/vmul*127,sew/vmul*128};
        float16x4xm2_t *a1 = (float16x4xm2_t *)input1;
        float16x4xm2_t *a2 = (float16x4xm2_t *)input2;
	float16xm2_t *a7 = (float16xm2_t *)stride;
        int16xm2_t *a8 = (int16xm2_t *)input3;
	e16xm2_t a3;

	for(int ff = 0; ff < nf*vlmax; ff++ ) {
        	        expect.address2[ff]=input2[ff];
        }

        for(int t=0; t<N; t++) {
                gvl = vsetvli(avl[t], RVV_E16, RVV_M2);
		a3 = vmsnevi_e16xm2_int16xm2(*a8, 0, gvl);
                vsxseg4ev_mask_float16xm2_float16x4xm2(aa, *a7, *a2, a3, gvl);
                bb=vlxseg4ev_mask_float16x4xm2_float16xm2(*a1, aa, *a7, a3, gvl);
		output.address1 = (float16_t *) &bb.v.val[0];
                for(int i=0; i<4*vlmax; i++) {
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
