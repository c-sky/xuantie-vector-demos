
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float32xm1_t test_vfcvtfxuv_float32xm1_uint32xm1 (uint32xm1_t a, unsigned int gvl) {
    return vfcvtfxuv_float32xm1_uint32xm1 (a, gvl);
}


float32xm2_t test_vfcvtfxuv_float32xm2_uint32xm2 (uint32xm2_t a, unsigned int gvl) {
    return vfcvtfxuv_float32xm2_uint32xm2 (a, gvl);
}


float32xm4_t test_vfcvtfxuv_float32xm4_uint32xm4 (uint32xm4_t a, unsigned int gvl) {
    return vfcvtfxuv_float32xm4_uint32xm4 (a, gvl);
}


float32xm8_t test_vfcvtfxuv_float32xm8_uint32xm8 (uint32xm8_t a, unsigned int gvl) {
    return vfcvtfxuv_float32xm8_uint32xm8 (a, gvl);
}


float64xm1_t test_vfcvtfxuv_float64xm1_uint64xm1 (uint64xm1_t a, unsigned int gvl) {
    return vfcvtfxuv_float64xm1_uint64xm1 (a, gvl);
}


float64xm2_t test_vfcvtfxuv_float64xm2_uint64xm2 (uint64xm2_t a, unsigned int gvl) {
    return vfcvtfxuv_float64xm2_uint64xm2 (a, gvl);
}


float64xm4_t test_vfcvtfxuv_float64xm4_uint64xm4 (uint64xm4_t a, unsigned int gvl) {
    return vfcvtfxuv_float64xm4_uint64xm4 (a, gvl);
}


float64xm8_t test_vfcvtfxuv_float64xm8_uint64xm8 (uint64xm8_t a, unsigned int gvl) {
    return vfcvtfxuv_float64xm8_uint64xm8 (a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvfcvt\.f\.xu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvfcvt\.f\.xu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvfcvt\.f\.xu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvfcvt\.f\.xu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvfcvt\.f\.xu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvfcvt\.f\.xu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvfcvt\.f\.xu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvfcvt\.f\.xu\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

