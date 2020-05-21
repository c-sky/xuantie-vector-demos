
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16x7xm1_t test_vlseg7bv_int16x7xm1 (const short *address, unsigned int gvl) {
    return vlseg7bv_int16x7xm1 (address, gvl);
}


int32x7xm1_t test_vlseg7bv_int32x7xm1 (const int *address, unsigned int gvl) {
    return vlseg7bv_int32x7xm1 (address, gvl);
}


int64x7xm1_t test_vlseg7bv_int64x7xm1 (const long *address, unsigned int gvl) {
    return vlseg7bv_int64x7xm1 (address, gvl);
}


int8x7xm1_t test_vlseg7bv_int8x7xm1 (const signed char *address, unsigned int gvl) {
    return vlseg7bv_int8x7xm1 (address, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlseg7b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlseg7b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlseg7b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlseg7b\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

