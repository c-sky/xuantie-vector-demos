
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float16x2xm1_t test_vlxseg2ev_float16x2xm1_float16xm1 (const float16_t *address, float16xm1_t index, unsigned int gvl) {
    return vlxseg2ev_float16x2xm1_float16xm1 (address, index, gvl);
}


float16x2xm2_t test_vlxseg2ev_float16x2xm2_float16xm2 (const float16_t *address, float16xm2_t index, unsigned int gvl) {
    return vlxseg2ev_float16x2xm2_float16xm2 (address, index, gvl);
}


float16x2xm4_t test_vlxseg2ev_float16x2xm4_float16xm4 (const float16_t *address, float16xm4_t index, unsigned int gvl) {
    return vlxseg2ev_float16x2xm4_float16xm4 (address, index, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlxseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvlxseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvlxseg2e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

