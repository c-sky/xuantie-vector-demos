
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float32x5xm1_t test_vlxseg5ev_float32x5xm1_float32xm1 (const float *address, float32xm1_t index, unsigned int gvl) {
    return vlxseg5ev_float32x5xm1_float32xm1 (address, index, gvl);
}


float64x5xm1_t test_vlxseg5ev_float64x5xm1_float64xm1 (const double *address, float64xm1_t index, unsigned int gvl) {
    return vlxseg5ev_float64x5xm1_float64xm1 (address, index, gvl);
}


int16x5xm1_t test_vlxseg5ev_int16x5xm1_int16xm1 (const short *address, int16xm1_t index, unsigned int gvl) {
    return vlxseg5ev_int16x5xm1_int16xm1 (address, index, gvl);
}


int32x5xm1_t test_vlxseg5ev_int32x5xm1_int32xm1 (const int *address, int32xm1_t index, unsigned int gvl) {
    return vlxseg5ev_int32x5xm1_int32xm1 (address, index, gvl);
}


int64x5xm1_t test_vlxseg5ev_int64x5xm1_int64xm1 (const long *address, int64xm1_t index, unsigned int gvl) {
    return vlxseg5ev_int64x5xm1_int64xm1 (address, index, gvl);
}


int8x5xm1_t test_vlxseg5ev_int8x5xm1_int8xm1 (const signed char *address, int8xm1_t index, unsigned int gvl) {
    return vlxseg5ev_int8x5xm1_int8xm1 (address, index, gvl);
}


uint16x5xm1_t test_vlxseg5ev_uint16x5xm1_uint16xm1 (const unsigned short *address, uint16xm1_t index, unsigned int gvl) {
    return vlxseg5ev_uint16x5xm1_uint16xm1 (address, index, gvl);
}


uint32x5xm1_t test_vlxseg5ev_uint32x5xm1_uint32xm1 (const unsigned int *address, uint32xm1_t index, unsigned int gvl) {
    return vlxseg5ev_uint32x5xm1_uint32xm1 (address, index, gvl);
}


uint64x5xm1_t test_vlxseg5ev_uint64x5xm1_uint64xm1 (const unsigned long *address, uint64xm1_t index, unsigned int gvl) {
    return vlxseg5ev_uint64x5xm1_uint64xm1 (address, index, gvl);
}


uint8x5xm1_t test_vlxseg5ev_uint8x5xm1_uint8xm1 (const unsigned char *address, uint8xm1_t index, unsigned int gvl) {
    return vlxseg5ev_uint8x5xm1_uint8xm1 (address, index, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlxseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlxseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlxseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlxseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlxseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlxseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlxseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlxseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlxseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlxseg5e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

