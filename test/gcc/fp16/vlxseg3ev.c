
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float16x3xm1_t test_vlxseg3ev_float16x3xm1_float16xm1 (const float16_t *address, float16xm1_t index, unsigned int gvl) {
    return vlxseg3ev_float16x3xm1_float16xm1 (address, index, gvl);
}


float16x3xm2_t test_vlxseg3ev_float16x3xm2_float16xm2 (const float16_t *address, float16xm2_t index, unsigned int gvl) {
    return vlxseg3ev_float16x3xm2_float16xm2 (address, index, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlxseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvlxseg3e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

