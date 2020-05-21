
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16x2xm1_t test_vlseg2bv_int16x2xm1 (const short *address, unsigned int gvl) {
    return vlseg2bv_int16x2xm1 (address, gvl);
}


int16x2xm2_t test_vlseg2bv_int16x2xm2 (const short *address, unsigned int gvl) {
    return vlseg2bv_int16x2xm2 (address, gvl);
}


int16x2xm4_t test_vlseg2bv_int16x2xm4 (const short *address, unsigned int gvl) {
    return vlseg2bv_int16x2xm4 (address, gvl);
}


int32x2xm1_t test_vlseg2bv_int32x2xm1 (const int *address, unsigned int gvl) {
    return vlseg2bv_int32x2xm1 (address, gvl);
}


int32x2xm2_t test_vlseg2bv_int32x2xm2 (const int *address, unsigned int gvl) {
    return vlseg2bv_int32x2xm2 (address, gvl);
}


int32x2xm4_t test_vlseg2bv_int32x2xm4 (const int *address, unsigned int gvl) {
    return vlseg2bv_int32x2xm4 (address, gvl);
}


int64x2xm1_t test_vlseg2bv_int64x2xm1 (const long *address, unsigned int gvl) {
    return vlseg2bv_int64x2xm1 (address, gvl);
}


int64x2xm2_t test_vlseg2bv_int64x2xm2 (const long *address, unsigned int gvl) {
    return vlseg2bv_int64x2xm2 (address, gvl);
}


int64x2xm4_t test_vlseg2bv_int64x2xm4 (const long *address, unsigned int gvl) {
    return vlseg2bv_int64x2xm4 (address, gvl);
}


int8x2xm1_t test_vlseg2bv_int8x2xm1 (const signed char *address, unsigned int gvl) {
    return vlseg2bv_int8x2xm1 (address, gvl);
}


int8x2xm2_t test_vlseg2bv_int8x2xm2 (const signed char *address, unsigned int gvl) {
    return vlseg2bv_int8x2xm2 (address, gvl);
}


int8x2xm4_t test_vlseg2bv_int8x2xm4 (const signed char *address, unsigned int gvl) {
    return vlseg2bv_int8x2xm4 (address, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvlseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvlseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvlseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvlseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvlseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvlseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvlseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvlseg2b\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

