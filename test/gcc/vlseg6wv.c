
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16x6xm1_t test_vlseg6wv_int16x6xm1 (const short *address, unsigned int gvl) {
    return vlseg6wv_int16x6xm1 (address, gvl);
}


int32x6xm1_t test_vlseg6wv_int32x6xm1 (const int *address, unsigned int gvl) {
    return vlseg6wv_int32x6xm1 (address, gvl);
}


int64x6xm1_t test_vlseg6wv_int64x6xm1 (const long *address, unsigned int gvl) {
    return vlseg6wv_int64x6xm1 (address, gvl);
}


int8x6xm1_t test_vlseg6wv_int8x6xm1 (const signed char *address, unsigned int gvl) {
    return vlseg6wv_int8x6xm1 (address, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlseg6w\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlseg6w\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlseg6w\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlseg6w\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

