
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vsseg2ev_float16x2xm1 (float16_t *address, float16x2xm1_t a, unsigned int gvl) {
    return vsseg2ev_float16x2xm1 (address, a, gvl);
}


void test_vsseg2ev_float16x2xm2 (float16_t *address, float16x2xm2_t a, unsigned int gvl) {
    return vsseg2ev_float16x2xm2 (address, a, gvl);
}


void test_vsseg2ev_float16x2xm4 (float16_t *address, float16x2xm4_t a, unsigned int gvl) {
    return vsseg2ev_float16x2xm4 (address, a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvsseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvsseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvsseg2e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

