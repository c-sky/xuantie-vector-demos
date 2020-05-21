
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int32xm2_t test_vfwcvtxfv_mask_int32xm2_float16xm1 (int32xm2_t merge, float16xm1_t a, e16xm1_t mask, unsigned int gvl) {
    return vfwcvtxfv_mask_int32xm2_float16xm1 (merge, a, mask, gvl);
}


int32xm4_t test_vfwcvtxfv_mask_int32xm4_float16xm2 (int32xm4_t merge, float16xm2_t a, e16xm2_t mask, unsigned int gvl) {
    return vfwcvtxfv_mask_int32xm4_float16xm2 (merge, a, mask, gvl);
}


int32xm8_t test_vfwcvtxfv_mask_int32xm8_float16xm4 (int32xm8_t merge, float16xm4_t a, e16xm4_t mask, unsigned int gvl) {
    return vfwcvtxfv_mask_int32xm8_float16xm4 (merge, a, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvfwcvt\.x\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvfwcvt\.x\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvfwcvt\.x\.f\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

