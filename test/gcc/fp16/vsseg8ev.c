
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vsseg8ev_float16x8xm1 (float16_t *address, float16x8xm1_t a, unsigned int gvl) {
    return vsseg8ev_float16x8xm1 (address, a, gvl);
}

/* { dg-final { scan-assembler-times "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvsseg8e\.v" 1 } }*/

/* { dg-final { cleanup-saved-temps } } */

