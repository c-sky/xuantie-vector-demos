
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

e16xm1_t test_vmfnevf_mask_e16xm1_float16xm1 (e16xm1_t merge, float16xm1_t a, float16_t b, e16xm1_t mask, unsigned int gvl) {
    return vmfnevf_mask_e16xm1_float16xm1 (merge, a, b, mask, gvl);
}


e16xm2_t test_vmfnevf_mask_e16xm2_float16xm2 (e16xm2_t merge, float16xm2_t a, float16_t b, e16xm2_t mask, unsigned int gvl) {
    return vmfnevf_mask_e16xm2_float16xm2 (merge, a, b, mask, gvl);
}


e16xm4_t test_vmfnevf_mask_e16xm4_float16xm4 (e16xm4_t merge, float16xm4_t a, float16_t b, e16xm4_t mask, unsigned int gvl) {
    return vmfnevf_mask_e16xm4_float16xm4 (merge, a, b, mask, gvl);
}


e16xm8_t test_vmfnevf_mask_e16xm8_float16xm8 (e16xm8_t merge, float16xm8_t a, float16_t b, e16xm8_t mask, unsigned int gvl) {
    return vmfnevf_mask_e16xm8_float16xm8 (merge, a, b, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvmfne\.vf" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvmfne\.vf" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvmfne\.vf" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvmfne\.vf" } }*/

/* { dg-final { cleanup-saved-temps } } */

