
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float32xm2_t test_vfwredsumvs_float32xm2_float16xm1 (float16xm1_t a, float32xm2_t b, unsigned int gvl) {
    return vfwredsumvs_float32xm2_float16xm1 (a, b, gvl);
}


float32xm4_t test_vfwredsumvs_float32xm4_float16xm2 (float16xm2_t a, float32xm4_t b, unsigned int gvl) {
    return vfwredsumvs_float32xm4_float16xm2 (a, b, gvl);
}


float32xm8_t test_vfwredsumvs_float32xm8_float16xm4 (float16xm4_t a, float32xm8_t b, unsigned int gvl) {
    return vfwredsumvs_float32xm8_float16xm4 (a, b, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvfwredsum\.vs" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvfwredsum\.vs" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvfwredsum\.vs" } }*/

/* { dg-final { cleanup-saved-temps } } */

