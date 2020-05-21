
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float32xm1_t test_vfcvtfxv_float32xm1_int32xm1 (int32xm1_t a, unsigned int gvl) {
    return vfcvtfxv_float32xm1_int32xm1 (a, gvl);
}


float32xm2_t test_vfcvtfxv_float32xm2_int32xm2 (int32xm2_t a, unsigned int gvl) {
    return vfcvtfxv_float32xm2_int32xm2 (a, gvl);
}


float32xm4_t test_vfcvtfxv_float32xm4_int32xm4 (int32xm4_t a, unsigned int gvl) {
    return vfcvtfxv_float32xm4_int32xm4 (a, gvl);
}


float32xm8_t test_vfcvtfxv_float32xm8_int32xm8 (int32xm8_t a, unsigned int gvl) {
    return vfcvtfxv_float32xm8_int32xm8 (a, gvl);
}


float64xm1_t test_vfcvtfxv_float64xm1_int64xm1 (int64xm1_t a, unsigned int gvl) {
    return vfcvtfxv_float64xm1_int64xm1 (a, gvl);
}


float64xm2_t test_vfcvtfxv_float64xm2_int64xm2 (int64xm2_t a, unsigned int gvl) {
    return vfcvtfxv_float64xm2_int64xm2 (a, gvl);
}


float64xm4_t test_vfcvtfxv_float64xm4_int64xm4 (int64xm4_t a, unsigned int gvl) {
    return vfcvtfxv_float64xm4_int64xm4 (a, gvl);
}


float64xm8_t test_vfcvtfxv_float64xm8_int64xm8 (int64xm8_t a, unsigned int gvl) {
    return vfcvtfxv_float64xm8_int64xm8 (a, gvl);
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

