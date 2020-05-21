
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float16x8xm1_t test_vlseg8ev_float16x8xm1 (const float16_t *address, unsigned int gvl) {
    return vlseg8ev_float16x8xm1 (address, gvl);
}

/* { dg-final { scan-assembler-times "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlseg8e\.v" 1 } }*/

/* { dg-final { cleanup-saved-temps } } */

