
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float32xm2_t test_vfwaddvv_mask_float32xm2_float16xm1 (float32xm2_t merge, float16xm1_t a, float16xm1_t b, e16xm1_t mask, unsigned int gvl) {
    return vfwaddvv_mask_float32xm2_float16xm1 (merge, a, b, mask, gvl);
}


float32xm4_t test_vfwaddvv_mask_float32xm4_float16xm2 (float32xm4_t merge, float16xm2_t a, float16xm2_t b, e16xm2_t mask, unsigned int gvl) {
    return vfwaddvv_mask_float32xm4_float16xm2 (merge, a, b, mask, gvl);
}


float32xm8_t test_vfwaddvv_mask_float32xm8_float16xm4 (float32xm8_t merge, float16xm4_t a, float16xm4_t b, e16xm4_t mask, unsigned int gvl) {
    return vfwaddvv_mask_float32xm8_float16xm4 (merge, a, b, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvfwadd\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvfwadd\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvfwadd\.vv" } }*/

/* { dg-final { cleanup-saved-temps } } */

