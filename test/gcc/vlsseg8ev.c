
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float32x8xm1_t test_vlsseg8ev_float32x8xm1 (const float *address, long stride, unsigned int gvl) {
    return vlsseg8ev_float32x8xm1 (address, stride, gvl);
}


float64x8xm1_t test_vlsseg8ev_float64x8xm1 (const double *address, long stride, unsigned int gvl) {
    return vlsseg8ev_float64x8xm1 (address, stride, gvl);
}


int16x8xm1_t test_vlsseg8ev_int16x8xm1 (const short *address, long stride, unsigned int gvl) {
    return vlsseg8ev_int16x8xm1 (address, stride, gvl);
}


int32x8xm1_t test_vlsseg8ev_int32x8xm1 (const int *address, long stride, unsigned int gvl) {
    return vlsseg8ev_int32x8xm1 (address, stride, gvl);
}


int64x8xm1_t test_vlsseg8ev_int64x8xm1 (const long *address, long stride, unsigned int gvl) {
    return vlsseg8ev_int64x8xm1 (address, stride, gvl);
}


int8x8xm1_t test_vlsseg8ev_int8x8xm1 (const signed char *address, long stride, unsigned int gvl) {
    return vlsseg8ev_int8x8xm1 (address, stride, gvl);
}


uint16x8xm1_t test_vlsseg8ev_uint16x8xm1 (const unsigned short *address, long stride, unsigned int gvl) {
    return vlsseg8ev_uint16x8xm1 (address, stride, gvl);
}


uint32x8xm1_t test_vlsseg8ev_uint32x8xm1 (const unsigned int *address, long stride, unsigned int gvl) {
    return vlsseg8ev_uint32x8xm1 (address, stride, gvl);
}


uint64x8xm1_t test_vlsseg8ev_uint64x8xm1 (const unsigned long *address, long stride, unsigned int gvl) {
    return vlsseg8ev_uint64x8xm1 (address, stride, gvl);
}


uint8x8xm1_t test_vlsseg8ev_uint8x8xm1 (const unsigned char *address, long stride, unsigned int gvl) {
    return vlsseg8ev_uint8x8xm1 (address, stride, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlsseg8e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlsseg8e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlsseg8e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlsseg8e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlsseg8e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlsseg8e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlsseg8e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlsseg8e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlsseg8e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlsseg8e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

