
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float16x7xm1_t test_vlxseg7ev_float16x7xm1_float16xm1 (const float16_t *address, float16xm1_t index, unsigned int gvl) {
    return vlxseg7ev_float16x7xm1_float16xm1 (address, index, gvl);
}

/* { dg-final { scan-assembler-times "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlxseg7e\.v" 1 } }*/

/* { dg-final { cleanup-saved-temps } } */

