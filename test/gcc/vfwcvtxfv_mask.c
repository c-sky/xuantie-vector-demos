
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int64xm2_t test_vfwcvtxfv_mask_int64xm2_float32xm1 (int64xm2_t merge, float32xm1_t a, e32xm1_t mask, unsigned int gvl) {
    return vfwcvtxfv_mask_int64xm2_float32xm1 (merge, a, mask, gvl);
}


int64xm4_t test_vfwcvtxfv_mask_int64xm4_float32xm2 (int64xm4_t merge, float32xm2_t a, e32xm2_t mask, unsigned int gvl) {
    return vfwcvtxfv_mask_int64xm4_float32xm2 (merge, a, mask, gvl);
}


int64xm8_t test_vfwcvtxfv_mask_int64xm8_float32xm4 (int64xm8_t merge, float32xm4_t a, e32xm4_t mask, unsigned int gvl) {
    return vfwcvtxfv_mask_int64xm8_float32xm4 (merge, a, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvfwcvt\.x\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvfwcvt\.x\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvfwcvt\.x\.f\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

