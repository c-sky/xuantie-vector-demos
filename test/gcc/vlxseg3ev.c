
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float32x3xm1_t test_vlxseg3ev_float32x3xm1_float32xm1 (const float *address, float32xm1_t index, unsigned int gvl) {
    return vlxseg3ev_float32x3xm1_float32xm1 (address, index, gvl);
}


float32x3xm2_t test_vlxseg3ev_float32x3xm2_float32xm2 (const float *address, float32xm2_t index, unsigned int gvl) {
    return vlxseg3ev_float32x3xm2_float32xm2 (address, index, gvl);
}


float64x3xm1_t test_vlxseg3ev_float64x3xm1_float64xm1 (const double *address, float64xm1_t index, unsigned int gvl) {
    return vlxseg3ev_float64x3xm1_float64xm1 (address, index, gvl);
}


float64x3xm2_t test_vlxseg3ev_float64x3xm2_float64xm2 (const double *address, float64xm2_t index, unsigned int gvl) {
    return vlxseg3ev_float64x3xm2_float64xm2 (address, index, gvl);
}


int16x3xm1_t test_vlxseg3ev_int16x3xm1_int16xm1 (const short *address, int16xm1_t index, unsigned int gvl) {
    return vlxseg3ev_int16x3xm1_int16xm1 (address, index, gvl);
}


int16x3xm2_t test_vlxseg3ev_int16x3xm2_int16xm2 (const short *address, int16xm2_t index, unsigned int gvl) {
    return vlxseg3ev_int16x3xm2_int16xm2 (address, index, gvl);
}


int32x3xm1_t test_vlxseg3ev_int32x3xm1_int32xm1 (const int *address, int32xm1_t index, unsigned int gvl) {
    return vlxseg3ev_int32x3xm1_int32xm1 (address, index, gvl);
}


int32x3xm2_t test_vlxseg3ev_int32x3xm2_int32xm2 (const int *address, int32xm2_t index, unsigned int gvl) {
    return vlxseg3ev_int32x3xm2_int32xm2 (address, index, gvl);
}


int64x3xm1_t test_vlxseg3ev_int64x3xm1_int64xm1 (const long *address, int64xm1_t index, unsigned int gvl) {
    return vlxseg3ev_int64x3xm1_int64xm1 (address, index, gvl);
}


int64x3xm2_t test_vlxseg3ev_int64x3xm2_int64xm2 (const long *address, int64xm2_t index, unsigned int gvl) {
    return vlxseg3ev_int64x3xm2_int64xm2 (address, index, gvl);
}


int8x3xm1_t test_vlxseg3ev_int8x3xm1_int8xm1 (const signed char *address, int8xm1_t index, unsigned int gvl) {
    return vlxseg3ev_int8x3xm1_int8xm1 (address, index, gvl);
}


int8x3xm2_t test_vlxseg3ev_int8x3xm2_int8xm2 (const signed char *address, int8xm2_t index, unsigned int gvl) {
    return vlxseg3ev_int8x3xm2_int8xm2 (address, index, gvl);
}


uint16x3xm1_t test_vlxseg3ev_uint16x3xm1_uint16xm1 (const unsigned short *address, uint16xm1_t index, unsigned int gvl) {
    return vlxseg3ev_uint16x3xm1_uint16xm1 (address, index, gvl);
}


uint16x3xm2_t test_vlxseg3ev_uint16x3xm2_uint16xm2 (const unsigned short *address, uint16xm2_t index, unsigned int gvl) {
    return vlxseg3ev_uint16x3xm2_uint16xm2 (address, index, gvl);
}


uint32x3xm1_t test_vlxseg3ev_uint32x3xm1_uint32xm1 (const unsigned int *address, uint32xm1_t index, unsigned int gvl) {
    return vlxseg3ev_uint32x3xm1_uint32xm1 (address, index, gvl);
}


uint32x3xm2_t test_vlxseg3ev_uint32x3xm2_uint32xm2 (const unsigned int *address, uint32xm2_t index, unsigned int gvl) {
    return vlxseg3ev_uint32x3xm2_uint32xm2 (address, index, gvl);
}


uint64x3xm1_t test_vlxseg3ev_uint64x3xm1_uint64xm1 (const unsigned long *address, uint64xm1_t index, unsigned int gvl) {
    return vlxseg3ev_uint64x3xm1_uint64xm1 (address, index, gvl);
}


uint64x3xm2_t test_vlxseg3ev_uint64x3xm2_uint64xm2 (const unsigned long *address, uint64xm2_t index, unsigned int gvl) {
    return vlxseg3ev_uint64x3xm2_uint64xm2 (address, index, gvl);
}


uint8x3xm1_t test_vlxseg3ev_uint8x3xm1_uint8xm1 (const unsigned char *address, uint8xm1_t index, unsigned int gvl) {
    return vlxseg3ev_uint8x3xm1_uint8xm1 (address, index, gvl);
}


uint8x3xm2_t test_vlxseg3ev_uint8x3xm2_uint8xm2 (const unsigned char *address, uint8xm2_t index, unsigned int gvl) {
    return vlxseg3ev_uint8x3xm2_uint8xm2 (address, index, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlxseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvlxseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlxseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvlxseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlxseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvlxseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlxseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvlxseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlxseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvlxseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlxseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvlxseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlxseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvlxseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlxseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvlxseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlxseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvlxseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlxseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvlxseg3e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

