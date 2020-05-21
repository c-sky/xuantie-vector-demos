
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float32x6xm1_t test_vlseg6ev_mask_float32x6xm1 (float32x6xm1_t merge, const float *address, e32xm1_t mask, unsigned int gvl) {
    return vlseg6ev_mask_float32x6xm1 (merge, address, mask, gvl);
}


float64x6xm1_t test_vlseg6ev_mask_float64x6xm1 (float64x6xm1_t merge, const double *address, e64xm1_t mask, unsigned int gvl) {
    return vlseg6ev_mask_float64x6xm1 (merge, address, mask, gvl);
}


int16x6xm1_t test_vlseg6ev_mask_int16x6xm1 (int16x6xm1_t merge, const short *address, e16xm1_t mask, unsigned int gvl) {
    return vlseg6ev_mask_int16x6xm1 (merge, address, mask, gvl);
}


int32x6xm1_t test_vlseg6ev_mask_int32x6xm1 (int32x6xm1_t merge, const int *address, e32xm1_t mask, unsigned int gvl) {
    return vlseg6ev_mask_int32x6xm1 (merge, address, mask, gvl);
}


int64x6xm1_t test_vlseg6ev_mask_int64x6xm1 (int64x6xm1_t merge, const long *address, e64xm1_t mask, unsigned int gvl) {
    return vlseg6ev_mask_int64x6xm1 (merge, address, mask, gvl);
}


int8x6xm1_t test_vlseg6ev_mask_int8x6xm1 (int8x6xm1_t merge, const signed char *address, e8xm1_t mask, unsigned int gvl) {
    return vlseg6ev_mask_int8x6xm1 (merge, address, mask, gvl);
}


uint16x6xm1_t test_vlseg6ev_mask_uint16x6xm1 (uint16x6xm1_t merge, const unsigned short *address, e16xm1_t mask, unsigned int gvl) {
    return vlseg6ev_mask_uint16x6xm1 (merge, address, mask, gvl);
}


uint32x6xm1_t test_vlseg6ev_mask_uint32x6xm1 (uint32x6xm1_t merge, const unsigned int *address, e32xm1_t mask, unsigned int gvl) {
    return vlseg6ev_mask_uint32x6xm1 (merge, address, mask, gvl);
}


uint64x6xm1_t test_vlseg6ev_mask_uint64x6xm1 (uint64x6xm1_t merge, const unsigned long *address, e64xm1_t mask, unsigned int gvl) {
    return vlseg6ev_mask_uint64x6xm1 (merge, address, mask, gvl);
}


uint8x6xm1_t test_vlseg6ev_mask_uint8x6xm1 (uint8x6xm1_t merge, const unsigned char *address, e8xm1_t mask, unsigned int gvl) {
    return vlseg6ev_mask_uint8x6xm1 (merge, address, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlseg6e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlseg6e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlseg6e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlseg6e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlseg6e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlseg6e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlseg6e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlseg6e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlseg6e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlseg6e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

