
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float32x5xm1_t test_vlsseg5ev_mask_float32x5xm1 (float32x5xm1_t merge, const float *address, long stride, e32xm1_t mask, unsigned int gvl) {
    return vlsseg5ev_mask_float32x5xm1 (merge, address, stride, mask, gvl);
}


float64x5xm1_t test_vlsseg5ev_mask_float64x5xm1 (float64x5xm1_t merge, const double *address, long stride, e64xm1_t mask, unsigned int gvl) {
    return vlsseg5ev_mask_float64x5xm1 (merge, address, stride, mask, gvl);
}


int16x5xm1_t test_vlsseg5ev_mask_int16x5xm1 (int16x5xm1_t merge, const short *address, long stride, e16xm1_t mask, unsigned int gvl) {
    return vlsseg5ev_mask_int16x5xm1 (merge, address, stride, mask, gvl);
}


int32x5xm1_t test_vlsseg5ev_mask_int32x5xm1 (int32x5xm1_t merge, const int *address, long stride, e32xm1_t mask, unsigned int gvl) {
    return vlsseg5ev_mask_int32x5xm1 (merge, address, stride, mask, gvl);
}


int64x5xm1_t test_vlsseg5ev_mask_int64x5xm1 (int64x5xm1_t merge, const long *address, long stride, e64xm1_t mask, unsigned int gvl) {
    return vlsseg5ev_mask_int64x5xm1 (merge, address, stride, mask, gvl);
}


int8x5xm1_t test_vlsseg5ev_mask_int8x5xm1 (int8x5xm1_t merge, const signed char *address, long stride, e8xm1_t mask, unsigned int gvl) {
    return vlsseg5ev_mask_int8x5xm1 (merge, address, stride, mask, gvl);
}


uint16x5xm1_t test_vlsseg5ev_mask_uint16x5xm1 (uint16x5xm1_t merge, const unsigned short *address, long stride, e16xm1_t mask, unsigned int gvl) {
    return vlsseg5ev_mask_uint16x5xm1 (merge, address, stride, mask, gvl);
}


uint32x5xm1_t test_vlsseg5ev_mask_uint32x5xm1 (uint32x5xm1_t merge, const unsigned int *address, long stride, e32xm1_t mask, unsigned int gvl) {
    return vlsseg5ev_mask_uint32x5xm1 (merge, address, stride, mask, gvl);
}


uint64x5xm1_t test_vlsseg5ev_mask_uint64x5xm1 (uint64x5xm1_t merge, const unsigned long *address, long stride, e64xm1_t mask, unsigned int gvl) {
    return vlsseg5ev_mask_uint64x5xm1 (merge, address, stride, mask, gvl);
}


uint8x5xm1_t test_vlsseg5ev_mask_uint8x5xm1 (uint8x5xm1_t merge, const unsigned char *address, long stride, e8xm1_t mask, unsigned int gvl) {
    return vlsseg5ev_mask_uint8x5xm1 (merge, address, stride, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlsseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlsseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlsseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlsseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlsseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlsseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlsseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlsseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlsseg5e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlsseg5e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

