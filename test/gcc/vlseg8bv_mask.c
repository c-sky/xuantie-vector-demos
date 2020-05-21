
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16x8xm1_t test_vlseg8bv_mask_int16x8xm1 (int16x8xm1_t merge, const short *address, e16xm1_t mask, unsigned int gvl) {
    return vlseg8bv_mask_int16x8xm1 (merge, address, mask, gvl);
}


int32x8xm1_t test_vlseg8bv_mask_int32x8xm1 (int32x8xm1_t merge, const int *address, e32xm1_t mask, unsigned int gvl) {
    return vlseg8bv_mask_int32x8xm1 (merge, address, mask, gvl);
}


int64x8xm1_t test_vlseg8bv_mask_int64x8xm1 (int64x8xm1_t merge, const long *address, e64xm1_t mask, unsigned int gvl) {
    return vlseg8bv_mask_int64x8xm1 (merge, address, mask, gvl);
}


int8x8xm1_t test_vlseg8bv_mask_int8x8xm1 (int8x8xm1_t merge, const signed char *address, e8xm1_t mask, unsigned int gvl) {
    return vlseg8bv_mask_int8x8xm1 (merge, address, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlseg8b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlseg8b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlseg8b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlseg8b\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

