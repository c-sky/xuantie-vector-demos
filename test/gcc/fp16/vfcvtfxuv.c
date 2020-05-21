
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float16xm1_t test_vfcvtfxuv_float16xm1_uint16xm1 (uint16xm1_t a, unsigned int gvl) {
    return vfcvtfxuv_float16xm1_uint16xm1 (a, gvl);
}


float16xm2_t test_vfcvtfxuv_float16xm2_uint16xm2 (uint16xm2_t a, unsigned int gvl) {
    return vfcvtfxuv_float16xm2_uint16xm2 (a, gvl);
}


float16xm4_t test_vfcvtfxuv_float16xm4_uint16xm4 (uint16xm4_t a, unsigned int gvl) {
    return vfcvtfxuv_float16xm4_uint16xm4 (a, gvl);
}


float16xm8_t test_vfcvtfxuv_float16xm8_uint16xm8 (uint16xm8_t a, unsigned int gvl) {
    return vfcvtfxuv_float16xm8_uint16xm8 (a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvfcvt\.f\.xu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvfcvt\.f\.xu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvfcvt\.f\.xu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvfcvt\.f\.xu\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

