
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float16xm2_t test_vfwcvtfxv_float16xm2_int8xm1 (int8xm1_t a, unsigned int gvl) {
    return vfwcvtfxv_float16xm2_int8xm1 (a, gvl);
}


float16xm4_t test_vfwcvtfxv_float16xm4_int8xm2 (int8xm2_t a, unsigned int gvl) {
    return vfwcvtfxv_float16xm4_int8xm2 (a, gvl);
}


float16xm8_t test_vfwcvtfxv_float16xm8_int8xm4 (int8xm4_t a, unsigned int gvl) {
    return vfwcvtfxv_float16xm8_int8xm4 (a, gvl);
}


float32xm2_t test_vfwcvtfxv_float32xm2_int16xm1 (int16xm1_t a, unsigned int gvl) {
    return vfwcvtfxv_float32xm2_int16xm1 (a, gvl);
}


float32xm4_t test_vfwcvtfxv_float32xm4_int16xm2 (int16xm2_t a, unsigned int gvl) {
    return vfwcvtfxv_float32xm4_int16xm2 (a, gvl);
}


float32xm8_t test_vfwcvtfxv_float32xm8_int16xm4 (int16xm4_t a, unsigned int gvl) {
    return vfwcvtfxv_float32xm8_int16xm4 (a, gvl);
}


float64xm2_t test_vfwcvtfxv_float64xm2_int32xm1 (int32xm1_t a, unsigned int gvl) {
    return vfwcvtfxv_float64xm2_int32xm1 (a, gvl);
}


float64xm4_t test_vfwcvtfxv_float64xm4_int32xm2 (int32xm2_t a, unsigned int gvl) {
    return vfwcvtfxv_float64xm4_int32xm2 (a, gvl);
}


float64xm8_t test_vfwcvtfxv_float64xm8_int32xm4 (int32xm4_t a, unsigned int gvl) {
    return vfwcvtfxv_float64xm8_int32xm4 (a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvfwcvt\.f\.x\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvfwcvt\.f\.x\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvfwcvt\.f\.x\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvfwcvt\.f\.x\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvfwcvt\.f\.x\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvfwcvt\.f\.x\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvfwcvt\.f\.x\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvfwcvt\.f\.x\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvfwcvt\.f\.x\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

