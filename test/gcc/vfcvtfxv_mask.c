
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float32xm1_t test_vfcvtfxv_mask_float32xm1_int32xm1 (float32xm1_t merge, int32xm1_t a, e32xm1_t mask, unsigned int gvl) {
    return vfcvtfxv_mask_float32xm1_int32xm1 (merge, a, mask, gvl);
}


float32xm2_t test_vfcvtfxv_mask_float32xm2_int32xm2 (float32xm2_t merge, int32xm2_t a, e32xm2_t mask, unsigned int gvl) {
    return vfcvtfxv_mask_float32xm2_int32xm2 (merge, a, mask, gvl);
}


float32xm4_t test_vfcvtfxv_mask_float32xm4_int32xm4 (float32xm4_t merge, int32xm4_t a, e32xm4_t mask, unsigned int gvl) {
    return vfcvtfxv_mask_float32xm4_int32xm4 (merge, a, mask, gvl);
}


float32xm8_t test_vfcvtfxv_mask_float32xm8_int32xm8 (float32xm8_t merge, int32xm8_t a, e32xm8_t mask, unsigned int gvl) {
    return vfcvtfxv_mask_float32xm8_int32xm8 (merge, a, mask, gvl);
}


float64xm1_t test_vfcvtfxv_mask_float64xm1_int64xm1 (float64xm1_t merge, int64xm1_t a, e64xm1_t mask, unsigned int gvl) {
    return vfcvtfxv_mask_float64xm1_int64xm1 (merge, a, mask, gvl);
}


float64xm2_t test_vfcvtfxv_mask_float64xm2_int64xm2 (float64xm2_t merge, int64xm2_t a, e64xm2_t mask, unsigned int gvl) {
    return vfcvtfxv_mask_float64xm2_int64xm2 (merge, a, mask, gvl);
}


float64xm4_t test_vfcvtfxv_mask_float64xm4_int64xm4 (float64xm4_t merge, int64xm4_t a, e64xm4_t mask, unsigned int gvl) {
    return vfcvtfxv_mask_float64xm4_int64xm4 (merge, a, mask, gvl);
}


float64xm8_t test_vfcvtfxv_mask_float64xm8_int64xm8 (float64xm8_t merge, int64xm8_t a, e64xm8_t mask, unsigned int gvl) {
    return vfcvtfxv_mask_float64xm8_int64xm8 (merge, a, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvfcvt\.f\.x\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvfcvt\.f\.x\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvfcvt\.f\.x\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvfcvt\.f\.x\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvfcvt\.f\.x\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvfcvt\.f\.x\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvfcvt\.f\.x\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvfcvt\.f\.x\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

