
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float32xm1_t test_vfncvtfxv_float32xm1_int64xm2 (int64xm2_t a, unsigned int gvl) {
    return vfncvtfxv_float32xm1_int64xm2 (a, gvl);
}


float32xm2_t test_vfncvtfxv_float32xm2_int64xm4 (int64xm4_t a, unsigned int gvl) {
    return vfncvtfxv_float32xm2_int64xm4 (a, gvl);
}


float32xm4_t test_vfncvtfxv_float32xm4_int64xm8 (int64xm8_t a, unsigned int gvl) {
    return vfncvtfxv_float32xm4_int64xm8 (a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvfncvt\.f\.x\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvfncvt\.f\.x\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvfncvt\.f\.x\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

