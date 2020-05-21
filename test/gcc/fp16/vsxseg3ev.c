
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vsxseg3ev_float16xm1_float16x3xm1 (float16_t *address, float16xm1_t index, float16x3xm1_t a, unsigned int gvl) {
    return vsxseg3ev_float16xm1_float16x3xm1 (address, index, a, gvl);
}


void test_vsxseg3ev_float16xm2_float16x3xm2 (float16_t *address, float16xm2_t index, float16x3xm2_t a, unsigned int gvl) {
    return vsxseg3ev_float16xm2_float16x3xm2 (address, index, a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvsxseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvsxseg3e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

