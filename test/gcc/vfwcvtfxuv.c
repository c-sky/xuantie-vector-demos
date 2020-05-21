
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float16xm2_t test_vfwcvtfxuv_float16xm2_uint8xm1 (uint8xm1_t a, unsigned int gvl) {
    return vfwcvtfxuv_float16xm2_uint8xm1 (a, gvl);
}


float16xm4_t test_vfwcvtfxuv_float16xm4_uint8xm2 (uint8xm2_t a, unsigned int gvl) {
    return vfwcvtfxuv_float16xm4_uint8xm2 (a, gvl);
}


float16xm8_t test_vfwcvtfxuv_float16xm8_uint8xm4 (uint8xm4_t a, unsigned int gvl) {
    return vfwcvtfxuv_float16xm8_uint8xm4 (a, gvl);
}


float32xm2_t test_vfwcvtfxuv_float32xm2_uint16xm1 (uint16xm1_t a, unsigned int gvl) {
    return vfwcvtfxuv_float32xm2_uint16xm1 (a, gvl);
}


float32xm4_t test_vfwcvtfxuv_float32xm4_uint16xm2 (uint16xm2_t a, unsigned int gvl) {
    return vfwcvtfxuv_float32xm4_uint16xm2 (a, gvl);
}


float32xm8_t test_vfwcvtfxuv_float32xm8_uint16xm4 (uint16xm4_t a, unsigned int gvl) {
    return vfwcvtfxuv_float32xm8_uint16xm4 (a, gvl);
}


float64xm2_t test_vfwcvtfxuv_float64xm2_uint32xm1 (uint32xm1_t a, unsigned int gvl) {
    return vfwcvtfxuv_float64xm2_uint32xm1 (a, gvl);
}


float64xm4_t test_vfwcvtfxuv_float64xm4_uint32xm2 (uint32xm2_t a, unsigned int gvl) {
    return vfwcvtfxuv_float64xm4_uint32xm2 (a, gvl);
}


float64xm8_t test_vfwcvtfxuv_float64xm8_uint32xm4 (uint32xm4_t a, unsigned int gvl) {
    return vfwcvtfxuv_float64xm8_uint32xm4 (a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvfwcvt\.f\.xu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvfwcvt\.f\.xu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvfwcvt\.f\.xu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvfwcvt\.f\.xu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvfwcvt\.f\.xu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvfwcvt\.f\.xu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvfwcvt\.f\.xu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvfwcvt\.f\.xu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvfwcvt\.f\.xu\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

