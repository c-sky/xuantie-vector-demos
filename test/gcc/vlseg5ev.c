
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float32x5xm1_t test_vlseg5ev_float32x5xm1 (const float *address, unsigned int gvl) {
    return vlseg5ev_float32x5xm1 (address, gvl);
}


float64x5xm1_t test_vlseg5ev_float64x5xm1 (const double *address, unsigned int gvl) {
    return vlseg5ev_float64x5xm1 (address, gvl);
}


int16x5xm1_t test_vlseg5ev_int16x5xm1 (const short *address, unsigned int gvl) {
    return vlseg5ev_int16x5xm1 (address, gvl);
}


int32x5xm1_t test_vlseg5ev_int32x5xm1 (const int *address, unsigned int gvl) {
    return vlseg5ev_int32x5xm1 (address, gvl);
}


int64x5xm1_t test_vlseg5ev_int64x5xm1 (const long *address, unsigned int gvl) {
    return vlseg5ev_int64x5xm1 (address, gvl);
}


int8x5xm1_t test_vlseg5ev_int8x5xm1 (const signed char *address, unsigned int gvl) {
    return vlseg5ev_int8x5xm1 (address, gvl);
}


uint16x5xm1_t test_vlseg5ev_uint16x5xm1 (const unsigned short *address, unsigned int gvl) {
    return vlseg5ev_uint16x5xm1 (address, gvl);
}


uint32x5xm1_t test_vlseg5ev_uint32x5xm1 (const unsigned int *address, unsigned int gvl) {
    return vlseg5ev_uint32x5xm1 (address, gvl);
}


uint64x5xm1_t test_vlseg5ev_uint64x5xm1 (const unsigned long *address, unsigned int gvl) {
    return vlseg5ev_uint64x5xm1 (address, gvl);
}


uint8x5xm1_t test_vlseg5ev_uint8x5xm1 (const unsigned char *address, unsigned int gvl) {
    return vlseg5ev_uint8x5xm1 (address, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlseg5e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

