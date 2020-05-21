
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint32xm1_t test_vfcvtxufv_mask_uint32xm1_float32xm1 (uint32xm1_t merge, float32xm1_t a, e32xm1_t mask, unsigned int gvl) {
    return vfcvtxufv_mask_uint32xm1_float32xm1 (merge, a, mask, gvl);
}


uint32xm2_t test_vfcvtxufv_mask_uint32xm2_float32xm2 (uint32xm2_t merge, float32xm2_t a, e32xm2_t mask, unsigned int gvl) {
    return vfcvtxufv_mask_uint32xm2_float32xm2 (merge, a, mask, gvl);
}


uint32xm4_t test_vfcvtxufv_mask_uint32xm4_float32xm4 (uint32xm4_t merge, float32xm4_t a, e32xm4_t mask, unsigned int gvl) {
    return vfcvtxufv_mask_uint32xm4_float32xm4 (merge, a, mask, gvl);
}


uint32xm8_t test_vfcvtxufv_mask_uint32xm8_float32xm8 (uint32xm8_t merge, float32xm8_t a, e32xm8_t mask, unsigned int gvl) {
    return vfcvtxufv_mask_uint32xm8_float32xm8 (merge, a, mask, gvl);
}


uint64xm1_t test_vfcvtxufv_mask_uint64xm1_float64xm1 (uint64xm1_t merge, float64xm1_t a, e64xm1_t mask, unsigned int gvl) {
    return vfcvtxufv_mask_uint64xm1_float64xm1 (merge, a, mask, gvl);
}


uint64xm2_t test_vfcvtxufv_mask_uint64xm2_float64xm2 (uint64xm2_t merge, float64xm2_t a, e64xm2_t mask, unsigned int gvl) {
    return vfcvtxufv_mask_uint64xm2_float64xm2 (merge, a, mask, gvl);
}


uint64xm4_t test_vfcvtxufv_mask_uint64xm4_float64xm4 (uint64xm4_t merge, float64xm4_t a, e64xm4_t mask, unsigned int gvl) {
    return vfcvtxufv_mask_uint64xm4_float64xm4 (merge, a, mask, gvl);
}


uint64xm8_t test_vfcvtxufv_mask_uint64xm8_float64xm8 (uint64xm8_t merge, float64xm8_t a, e64xm8_t mask, unsigned int gvl) {
    return vfcvtxufv_mask_uint64xm8_float64xm8 (merge, a, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvfcvt\.xu\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvfcvt\.xu\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvfcvt\.xu\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvfcvt\.xu\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvfcvt\.xu\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvfcvt\.xu\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvfcvt\.xu\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvfcvt\.xu\.f\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

