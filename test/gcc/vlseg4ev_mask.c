
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float32x4xm1_t test_vlseg4ev_mask_float32x4xm1 (float32x4xm1_t merge, const float *address, e32xm1_t mask, unsigned int gvl) {
    return vlseg4ev_mask_float32x4xm1 (merge, address, mask, gvl);
}


float32x4xm2_t test_vlseg4ev_mask_float32x4xm2 (float32x4xm2_t merge, const float *address, e32xm2_t mask, unsigned int gvl) {
    return vlseg4ev_mask_float32x4xm2 (merge, address, mask, gvl);
}


float64x4xm1_t test_vlseg4ev_mask_float64x4xm1 (float64x4xm1_t merge, const double *address, e64xm1_t mask, unsigned int gvl) {
    return vlseg4ev_mask_float64x4xm1 (merge, address, mask, gvl);
}


float64x4xm2_t test_vlseg4ev_mask_float64x4xm2 (float64x4xm2_t merge, const double *address, e64xm2_t mask, unsigned int gvl) {
    return vlseg4ev_mask_float64x4xm2 (merge, address, mask, gvl);
}


int16x4xm1_t test_vlseg4ev_mask_int16x4xm1 (int16x4xm1_t merge, const short *address, e16xm1_t mask, unsigned int gvl) {
    return vlseg4ev_mask_int16x4xm1 (merge, address, mask, gvl);
}


int16x4xm2_t test_vlseg4ev_mask_int16x4xm2 (int16x4xm2_t merge, const short *address, e16xm2_t mask, unsigned int gvl) {
    return vlseg4ev_mask_int16x4xm2 (merge, address, mask, gvl);
}


int32x4xm1_t test_vlseg4ev_mask_int32x4xm1 (int32x4xm1_t merge, const int *address, e32xm1_t mask, unsigned int gvl) {
    return vlseg4ev_mask_int32x4xm1 (merge, address, mask, gvl);
}


int32x4xm2_t test_vlseg4ev_mask_int32x4xm2 (int32x4xm2_t merge, const int *address, e32xm2_t mask, unsigned int gvl) {
    return vlseg4ev_mask_int32x4xm2 (merge, address, mask, gvl);
}


int64x4xm1_t test_vlseg4ev_mask_int64x4xm1 (int64x4xm1_t merge, const long *address, e64xm1_t mask, unsigned int gvl) {
    return vlseg4ev_mask_int64x4xm1 (merge, address, mask, gvl);
}


int64x4xm2_t test_vlseg4ev_mask_int64x4xm2 (int64x4xm2_t merge, const long *address, e64xm2_t mask, unsigned int gvl) {
    return vlseg4ev_mask_int64x4xm2 (merge, address, mask, gvl);
}


int8x4xm1_t test_vlseg4ev_mask_int8x4xm1 (int8x4xm1_t merge, const signed char *address, e8xm1_t mask, unsigned int gvl) {
    return vlseg4ev_mask_int8x4xm1 (merge, address, mask, gvl);
}


int8x4xm2_t test_vlseg4ev_mask_int8x4xm2 (int8x4xm2_t merge, const signed char *address, e8xm2_t mask, unsigned int gvl) {
    return vlseg4ev_mask_int8x4xm2 (merge, address, mask, gvl);
}


uint16x4xm1_t test_vlseg4ev_mask_uint16x4xm1 (uint16x4xm1_t merge, const unsigned short *address, e16xm1_t mask, unsigned int gvl) {
    return vlseg4ev_mask_uint16x4xm1 (merge, address, mask, gvl);
}


uint16x4xm2_t test_vlseg4ev_mask_uint16x4xm2 (uint16x4xm2_t merge, const unsigned short *address, e16xm2_t mask, unsigned int gvl) {
    return vlseg4ev_mask_uint16x4xm2 (merge, address, mask, gvl);
}


uint32x4xm1_t test_vlseg4ev_mask_uint32x4xm1 (uint32x4xm1_t merge, const unsigned int *address, e32xm1_t mask, unsigned int gvl) {
    return vlseg4ev_mask_uint32x4xm1 (merge, address, mask, gvl);
}


uint32x4xm2_t test_vlseg4ev_mask_uint32x4xm2 (uint32x4xm2_t merge, const unsigned int *address, e32xm2_t mask, unsigned int gvl) {
    return vlseg4ev_mask_uint32x4xm2 (merge, address, mask, gvl);
}


uint64x4xm1_t test_vlseg4ev_mask_uint64x4xm1 (uint64x4xm1_t merge, const unsigned long *address, e64xm1_t mask, unsigned int gvl) {
    return vlseg4ev_mask_uint64x4xm1 (merge, address, mask, gvl);
}


uint64x4xm2_t test_vlseg4ev_mask_uint64x4xm2 (uint64x4xm2_t merge, const unsigned long *address, e64xm2_t mask, unsigned int gvl) {
    return vlseg4ev_mask_uint64x4xm2 (merge, address, mask, gvl);
}


uint8x4xm1_t test_vlseg4ev_mask_uint8x4xm1 (uint8x4xm1_t merge, const unsigned char *address, e8xm1_t mask, unsigned int gvl) {
    return vlseg4ev_mask_uint8x4xm1 (merge, address, mask, gvl);
}


uint8x4xm2_t test_vlseg4ev_mask_uint8x4xm2 (uint8x4xm2_t merge, const unsigned char *address, e8xm2_t mask, unsigned int gvl) {
    return vlseg4ev_mask_uint8x4xm2 (merge, address, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvlseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvlseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvlseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvlseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvlseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvlseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvlseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvlseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvlseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvlseg4e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

