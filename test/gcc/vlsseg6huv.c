
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint16x6xm1_t test_vlsseg6huv_uint16x6xm1 (const unsigned short *address, long stride, unsigned int gvl) {
    return vlsseg6huv_uint16x6xm1 (address, stride, gvl);
}


uint32x6xm1_t test_vlsseg6huv_uint32x6xm1 (const unsigned int *address, long stride, unsigned int gvl) {
    return vlsseg6huv_uint32x6xm1 (address, stride, gvl);
}


uint64x6xm1_t test_vlsseg6huv_uint64x6xm1 (const unsigned long *address, long stride, unsigned int gvl) {
    return vlsseg6huv_uint64x6xm1 (address, stride, gvl);
}


uint8x6xm1_t test_vlsseg6huv_uint8x6xm1 (const unsigned char *address, long stride, unsigned int gvl) {
    return vlsseg6huv_uint8x6xm1 (address, stride, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlsseg6hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlsseg6hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlsseg6hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlsseg6hu\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

