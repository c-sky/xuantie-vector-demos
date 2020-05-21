
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint16xm1_t test_vfncvtxufv_mask_uint16xm1_float32xm2 (uint16xm1_t merge, float32xm2_t a, e16xm1_t mask, unsigned int gvl) {
    return vfncvtxufv_mask_uint16xm1_float32xm2 (merge, a, mask, gvl);
}


uint16xm2_t test_vfncvtxufv_mask_uint16xm2_float32xm4 (uint16xm2_t merge, float32xm4_t a, e16xm2_t mask, unsigned int gvl) {
    return vfncvtxufv_mask_uint16xm2_float32xm4 (merge, a, mask, gvl);
}


uint16xm4_t test_vfncvtxufv_mask_uint16xm4_float32xm8 (uint16xm4_t merge, float32xm8_t a, e16xm4_t mask, unsigned int gvl) {
    return vfncvtxufv_mask_uint16xm4_float32xm8 (merge, a, mask, gvl);
}


uint32xm1_t test_vfncvtxufv_mask_uint32xm1_float64xm2 (uint32xm1_t merge, float64xm2_t a, e32xm1_t mask, unsigned int gvl) {
    return vfncvtxufv_mask_uint32xm1_float64xm2 (merge, a, mask, gvl);
}


uint32xm2_t test_vfncvtxufv_mask_uint32xm2_float64xm4 (uint32xm2_t merge, float64xm4_t a, e32xm2_t mask, unsigned int gvl) {
    return vfncvtxufv_mask_uint32xm2_float64xm4 (merge, a, mask, gvl);
}


uint32xm4_t test_vfncvtxufv_mask_uint32xm4_float64xm8 (uint32xm4_t merge, float64xm8_t a, e32xm4_t mask, unsigned int gvl) {
    return vfncvtxufv_mask_uint32xm4_float64xm8 (merge, a, mask, gvl);
}


uint8xm1_t test_vfncvtxufv_mask_uint8xm1_float16xm2 (uint8xm1_t merge, float16xm2_t a, e8xm1_t mask, unsigned int gvl) {
    return vfncvtxufv_mask_uint8xm1_float16xm2 (merge, a, mask, gvl);
}


uint8xm2_t test_vfncvtxufv_mask_uint8xm2_float16xm4 (uint8xm2_t merge, float16xm4_t a, e8xm2_t mask, unsigned int gvl) {
    return vfncvtxufv_mask_uint8xm2_float16xm4 (merge, a, mask, gvl);
}


uint8xm4_t test_vfncvtxufv_mask_uint8xm4_float16xm8 (uint8xm4_t merge, float16xm8_t a, e8xm4_t mask, unsigned int gvl) {
    return vfncvtxufv_mask_uint8xm4_float16xm8 (merge, a, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvfncvt\.xu\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvfncvt\.xu\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvfncvt\.xu\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvfncvt\.xu\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvfncvt\.xu\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvfncvt\.xu\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvfncvt\.xu\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvfncvt\.xu\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvfncvt\.xu\.f\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

