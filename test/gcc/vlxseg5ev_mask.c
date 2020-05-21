
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float32x5xm1_t test_vlxseg5ev_mask_float32x5xm1_float32xm1 (float32x5xm1_t merge, const float *address, float32xm1_t index, e32xm1_t mask, unsigned int gvl) {
    return vlxseg5ev_mask_float32x5xm1_float32xm1 (merge, address, index, mask, gvl);
}


float64x5xm1_t test_vlxseg5ev_mask_float64x5xm1_float64xm1 (float64x5xm1_t merge, const double *address, float64xm1_t index, e64xm1_t mask, unsigned int gvl) {
    return vlxseg5ev_mask_float64x5xm1_float64xm1 (merge, address, index, mask, gvl);
}


int16x5xm1_t test_vlxseg5ev_mask_int16x5xm1_int16xm1 (int16x5xm1_t merge, const short *address, int16xm1_t index, e16xm1_t mask, unsigned int gvl) {
    return vlxseg5ev_mask_int16x5xm1_int16xm1 (merge, address, index, mask, gvl);
}


int32x5xm1_t test_vlxseg5ev_mask_int32x5xm1_int32xm1 (int32x5xm1_t merge, const int *address, int32xm1_t index, e32xm1_t mask, unsigned int gvl) {
    return vlxseg5ev_mask_int32x5xm1_int32xm1 (merge, address, index, mask, gvl);
}


int64x5xm1_t test_vlxseg5ev_mask_int64x5xm1_int64xm1 (int64x5xm1_t merge, const long *address, int64xm1_t index, e64xm1_t mask, unsigned int gvl) {
    return vlxseg5ev_mask_int64x5xm1_int64xm1 (merge, address, index, mask, gvl);
}


int8x5xm1_t test_vlxseg5ev_mask_int8x5xm1_int8xm1 (int8x5xm1_t merge, const signed char *address, int8xm1_t index, e8xm1_t mask, unsigned int gvl) {
    return vlxseg5ev_mask_int8x5xm1_int8xm1 (merge, address, index, mask, gvl);
}


uint16x5xm1_t test_vlxseg5ev_mask_uint16x5xm1_uint16xm1 (uint16x5xm1_t merge, const unsigned short *address, uint16xm1_t index, e16xm1_t mask, unsigned int gvl) {
    return vlxseg5ev_mask_uint16x5xm1_uint16xm1 (merge, address, index, mask, gvl);
}


uint32x5xm1_t test_vlxseg5ev_mask_uint32x5xm1_uint32xm1 (uint32x5xm1_t merge, const unsigned int *address, uint32xm1_t index, e32xm1_t mask, unsigned int gvl) {
    return vlxseg5ev_mask_uint32x5xm1_uint32xm1 (merge, address, index, mask, gvl);
}


uint64x5xm1_t test_vlxseg5ev_mask_uint64x5xm1_uint64xm1 (uint64x5xm1_t merge, const unsigned long *address, uint64xm1_t index, e64xm1_t mask, unsigned int gvl) {
    return vlxseg5ev_mask_uint64x5xm1_uint64xm1 (merge, address, index, mask, gvl);
}


uint8x5xm1_t test_vlxseg5ev_mask_uint8x5xm1_uint8xm1 (uint8x5xm1_t merge, const unsigned char *address, uint8xm1_t index, e8xm1_t mask, unsigned int gvl) {
    return vlxseg5ev_mask_uint8x5xm1_uint8xm1 (merge, address, index, mask, gvl);
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

