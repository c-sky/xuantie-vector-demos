
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16x3xm1_t test_vlsseg3hv_int16x3xm1 (const short *address, long stride, unsigned int gvl) {
    return vlsseg3hv_int16x3xm1 (address, stride, gvl);
}


int16x3xm2_t test_vlsseg3hv_int16x3xm2 (const short *address, long stride, unsigned int gvl) {
    return vlsseg3hv_int16x3xm2 (address, stride, gvl);
}


int32x3xm1_t test_vlsseg3hv_int32x3xm1 (const int *address, long stride, unsigned int gvl) {
    return vlsseg3hv_int32x3xm1 (address, stride, gvl);
}


int32x3xm2_t test_vlsseg3hv_int32x3xm2 (const int *address, long stride, unsigned int gvl) {
    return vlsseg3hv_int32x3xm2 (address, stride, gvl);
}


int64x3xm1_t test_vlsseg3hv_int64x3xm1 (const long *address, long stride, unsigned int gvl) {
    return vlsseg3hv_int64x3xm1 (address, stride, gvl);
}


int64x3xm2_t test_vlsseg3hv_int64x3xm2 (const long *address, long stride, unsigned int gvl) {
    return vlsseg3hv_int64x3xm2 (address, stride, gvl);
}


int8x3xm1_t test_vlsseg3hv_int8x3xm1 (const signed char *address, long stride, unsigned int gvl) {
    return vlsseg3hv_int8x3xm1 (address, stride, gvl);
}


int8x3xm2_t test_vlsseg3hv_int8x3xm2 (const signed char *address, long stride, unsigned int gvl) {
    return vlsseg3hv_int8x3xm2 (address, stride, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlsseg3h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvlsseg3h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlsseg3h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvlsseg3h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlsseg3h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvlsseg3h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlsseg3h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvlsseg3h\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

