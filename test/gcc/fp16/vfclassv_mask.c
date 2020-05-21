
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint16xm1_t test_vfclassv_mask_uint16xm1_float16xm1 (uint16xm1_t merge, float16xm1_t a, e16xm1_t mask, unsigned int gvl) {
    return vfclassv_mask_uint16xm1_float16xm1 (merge, a, mask, gvl);
}


uint16xm2_t test_vfclassv_mask_uint16xm2_float16xm2 (uint16xm2_t merge, float16xm2_t a, e16xm2_t mask, unsigned int gvl) {
    return vfclassv_mask_uint16xm2_float16xm2 (merge, a, mask, gvl);
}


uint16xm4_t test_vfclassv_mask_uint16xm4_float16xm4 (uint16xm4_t merge, float16xm4_t a, e16xm4_t mask, unsigned int gvl) {
    return vfclassv_mask_uint16xm4_float16xm4 (merge, a, mask, gvl);
}


uint16xm8_t test_vfclassv_mask_uint16xm8_float16xm8 (uint16xm8_t merge, float16xm8_t a, e16xm8_t mask, unsigned int gvl) {
    return vfclassv_mask_uint16xm8_float16xm8 (merge, a, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvfclass\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvfclass\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvfclass\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvfclass\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

