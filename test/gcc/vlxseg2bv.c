
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16x2xm1_t test_vlxseg2bv_int16x2xm1_int16xm1 (const short *address, int16xm1_t index, unsigned int gvl) {
    return vlxseg2bv_int16x2xm1_int16xm1 (address, index, gvl);
}


int16x2xm2_t test_vlxseg2bv_int16x2xm2_int16xm2 (const short *address, int16xm2_t index, unsigned int gvl) {
    return vlxseg2bv_int16x2xm2_int16xm2 (address, index, gvl);
}


int16x2xm4_t test_vlxseg2bv_int16x2xm4_int16xm4 (const short *address, int16xm4_t index, unsigned int gvl) {
    return vlxseg2bv_int16x2xm4_int16xm4 (address, index, gvl);
}


int32x2xm1_t test_vlxseg2bv_int32x2xm1_int32xm1 (const int *address, int32xm1_t index, unsigned int gvl) {
    return vlxseg2bv_int32x2xm1_int32xm1 (address, index, gvl);
}


int32x2xm2_t test_vlxseg2bv_int32x2xm2_int32xm2 (const int *address, int32xm2_t index, unsigned int gvl) {
    return vlxseg2bv_int32x2xm2_int32xm2 (address, index, gvl);
}


int32x2xm4_t test_vlxseg2bv_int32x2xm4_int32xm4 (const int *address, int32xm4_t index, unsigned int gvl) {
    return vlxseg2bv_int32x2xm4_int32xm4 (address, index, gvl);
}


int64x2xm1_t test_vlxseg2bv_int64x2xm1_int64xm1 (const long *address, int64xm1_t index, unsigned int gvl) {
    return vlxseg2bv_int64x2xm1_int64xm1 (address, index, gvl);
}


int64x2xm2_t test_vlxseg2bv_int64x2xm2_int64xm2 (const long *address, int64xm2_t index, unsigned int gvl) {
    return vlxseg2bv_int64x2xm2_int64xm2 (address, index, gvl);
}


int64x2xm4_t test_vlxseg2bv_int64x2xm4_int64xm4 (const long *address, int64xm4_t index, unsigned int gvl) {
    return vlxseg2bv_int64x2xm4_int64xm4 (address, index, gvl);
}


int8x2xm1_t test_vlxseg2bv_int8x2xm1_int8xm1 (const signed char *address, int8xm1_t index, unsigned int gvl) {
    return vlxseg2bv_int8x2xm1_int8xm1 (address, index, gvl);
}


int8x2xm2_t test_vlxseg2bv_int8x2xm2_int8xm2 (const signed char *address, int8xm2_t index, unsigned int gvl) {
    return vlxseg2bv_int8x2xm2_int8xm2 (address, index, gvl);
}


int8x2xm4_t test_vlxseg2bv_int8x2xm4_int8xm4 (const signed char *address, int8xm4_t index, unsigned int gvl) {
    return vlxseg2bv_int8x2xm4_int8xm4 (address, index, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlxseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvlxseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvlxseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlxseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvlxseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvlxseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlxseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvlxseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvlxseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlxseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvlxseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvlxseg2b\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

