
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vsxev_float16xm1 (float16_t *address, float16xm1_t index, float16xm1_t a, unsigned int gvl) {
    return vsxev_float16xm1 (address, index, a, gvl);
}


void test_vsxev_float16xm2 (float16_t *address, float16xm2_t index, float16xm2_t a, unsigned int gvl) {
    return vsxev_float16xm2 (address, index, a, gvl);
}


void test_vsxev_float16xm4 (float16_t *address, float16xm4_t index, float16xm4_t a, unsigned int gvl) {
    return vsxev_float16xm4 (address, index, a, gvl);
}


void test_vsxev_float16xm8 (float16_t *address, float16xm8_t index, float16xm8_t a, unsigned int gvl) {
    return vsxev_float16xm8 (address, index, a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvsxe\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvsxe\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvsxe\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvsxe\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

