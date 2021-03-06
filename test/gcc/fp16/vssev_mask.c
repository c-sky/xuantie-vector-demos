
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vssev_mask_float16xm1 (float16_t *address, long stride, float16xm1_t a, e16xm1_t mask, unsigned int gvl) {
    return vssev_mask_float16xm1 (address, stride, a, mask, gvl);
}


void test_vssev_mask_float16xm2 (float16_t *address, long stride, float16xm2_t a, e16xm2_t mask, unsigned int gvl) {
    return vssev_mask_float16xm2 (address, stride, a, mask, gvl);
}


void test_vssev_mask_float16xm4 (float16_t *address, long stride, float16xm4_t a, e16xm4_t mask, unsigned int gvl) {
    return vssev_mask_float16xm4 (address, stride, a, mask, gvl);
}


void test_vssev_mask_float16xm8 (float16_t *address, long stride, float16xm8_t a, e16xm8_t mask, unsigned int gvl) {
    return vssev_mask_float16xm8 (address, stride, a, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvsse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvsse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvsse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvsse\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

