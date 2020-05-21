
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint16x7xm1_t test_vlseg7huv_mask_uint16x7xm1 (uint16x7xm1_t merge, const unsigned short *address, e16xm1_t mask, unsigned int gvl) {
    return vlseg7huv_mask_uint16x7xm1 (merge, address, mask, gvl);
}


uint32x7xm1_t test_vlseg7huv_mask_uint32x7xm1 (uint32x7xm1_t merge, const unsigned int *address, e32xm1_t mask, unsigned int gvl) {
    return vlseg7huv_mask_uint32x7xm1 (merge, address, mask, gvl);
}


uint64x7xm1_t test_vlseg7huv_mask_uint64x7xm1 (uint64x7xm1_t merge, const unsigned long *address, e64xm1_t mask, unsigned int gvl) {
    return vlseg7huv_mask_uint64x7xm1 (merge, address, mask, gvl);
}


uint8x7xm1_t test_vlseg7huv_mask_uint8x7xm1 (uint8x7xm1_t merge, const unsigned char *address, e8xm1_t mask, unsigned int gvl) {
    return vlseg7huv_mask_uint8x7xm1 (merge, address, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlseg7hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlseg7hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlseg7hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlseg7hu\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

