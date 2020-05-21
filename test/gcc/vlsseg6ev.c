
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float32x6xm1_t test_vlsseg6ev_float32x6xm1 (const float *address, long stride, unsigned int gvl) {
    return vlsseg6ev_float32x6xm1 (address, stride, gvl);
}


float64x6xm1_t test_vlsseg6ev_float64x6xm1 (const double *address, long stride, unsigned int gvl) {
    return vlsseg6ev_float64x6xm1 (address, stride, gvl);
}


int16x6xm1_t test_vlsseg6ev_int16x6xm1 (const short *address, long stride, unsigned int gvl) {
    return vlsseg6ev_int16x6xm1 (address, stride, gvl);
}


int32x6xm1_t test_vlsseg6ev_int32x6xm1 (const int *address, long stride, unsigned int gvl) {
    return vlsseg6ev_int32x6xm1 (address, stride, gvl);
}


int64x6xm1_t test_vlsseg6ev_int64x6xm1 (const long *address, long stride, unsigned int gvl) {
    return vlsseg6ev_int64x6xm1 (address, stride, gvl);
}


int8x6xm1_t test_vlsseg6ev_int8x6xm1 (const signed char *address, long stride, unsigned int gvl) {
    return vlsseg6ev_int8x6xm1 (address, stride, gvl);
}


uint16x6xm1_t test_vlsseg6ev_uint16x6xm1 (const unsigned short *address, long stride, unsigned int gvl) {
    return vlsseg6ev_uint16x6xm1 (address, stride, gvl);
}


uint32x6xm1_t test_vlsseg6ev_uint32x6xm1 (const unsigned int *address, long stride, unsigned int gvl) {
    return vlsseg6ev_uint32x6xm1 (address, stride, gvl);
}


uint64x6xm1_t test_vlsseg6ev_uint64x6xm1 (const unsigned long *address, long stride, unsigned int gvl) {
    return vlsseg6ev_uint64x6xm1 (address, stride, gvl);
}


uint8x6xm1_t test_vlsseg6ev_uint8x6xm1 (const unsigned char *address, long stride, unsigned int gvl) {
    return vlsseg6ev_uint8x6xm1 (address, stride, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlsseg6e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlsseg6e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlsseg6e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlsseg6e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlsseg6e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlsseg6e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlsseg6e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlsseg6e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlsseg6e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlsseg6e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

