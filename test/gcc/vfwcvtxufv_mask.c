
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint64xm2_t test_vfwcvtxufv_mask_uint64xm2_float32xm1 (uint64xm2_t merge, float32xm1_t a, e32xm1_t mask, unsigned int gvl) {
    return vfwcvtxufv_mask_uint64xm2_float32xm1 (merge, a, mask, gvl);
}


uint64xm4_t test_vfwcvtxufv_mask_uint64xm4_float32xm2 (uint64xm4_t merge, float32xm2_t a, e32xm2_t mask, unsigned int gvl) {
    return vfwcvtxufv_mask_uint64xm4_float32xm2 (merge, a, mask, gvl);
}


uint64xm8_t test_vfwcvtxufv_mask_uint64xm8_float32xm4 (uint64xm8_t merge, float32xm4_t a, e32xm4_t mask, unsigned int gvl) {
    return vfwcvtxufv_mask_uint64xm8_float32xm4 (merge, a, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvfwcvt\.xu\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvfwcvt\.xu\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvfwcvt\.xu\.f\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

