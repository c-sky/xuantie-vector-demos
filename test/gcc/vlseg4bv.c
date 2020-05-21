
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16x4xm1_t test_vlseg4bv_int16x4xm1 (const short *address, unsigned int gvl) {
    return vlseg4bv_int16x4xm1 (address, gvl);
}


int16x4xm2_t test_vlseg4bv_int16x4xm2 (const short *address, unsigned int gvl) {
    return vlseg4bv_int16x4xm2 (address, gvl);
}


int32x4xm1_t test_vlseg4bv_int32x4xm1 (const int *address, unsigned int gvl) {
    return vlseg4bv_int32x4xm1 (address, gvl);
}


int32x4xm2_t test_vlseg4bv_int32x4xm2 (const int *address, unsigned int gvl) {
    return vlseg4bv_int32x4xm2 (address, gvl);
}


int64x4xm1_t test_vlseg4bv_int64x4xm1 (const long *address, unsigned int gvl) {
    return vlseg4bv_int64x4xm1 (address, gvl);
}


int64x4xm2_t test_vlseg4bv_int64x4xm2 (const long *address, unsigned int gvl) {
    return vlseg4bv_int64x4xm2 (address, gvl);
}


int8x4xm1_t test_vlseg4bv_int8x4xm1 (const signed char *address, unsigned int gvl) {
    return vlseg4bv_int8x4xm1 (address, gvl);
}


int8x4xm2_t test_vlseg4bv_int8x4xm2 (const signed char *address, unsigned int gvl) {
    return vlseg4bv_int8x4xm2 (address, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlseg4b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvlseg4b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlseg4b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvlseg4b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlseg4b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvlseg4b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlseg4b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvlseg4b\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

