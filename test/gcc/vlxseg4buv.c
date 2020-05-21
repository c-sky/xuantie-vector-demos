
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint16x4xm1_t test_vlxseg4buv_uint16x4xm1_uint16xm1 (const unsigned short *address, uint16xm1_t index, unsigned int gvl) {
    return vlxseg4buv_uint16x4xm1_uint16xm1 (address, index, gvl);
}


uint16x4xm2_t test_vlxseg4buv_uint16x4xm2_uint16xm2 (const unsigned short *address, uint16xm2_t index, unsigned int gvl) {
    return vlxseg4buv_uint16x4xm2_uint16xm2 (address, index, gvl);
}


uint32x4xm1_t test_vlxseg4buv_uint32x4xm1_uint32xm1 (const unsigned int *address, uint32xm1_t index, unsigned int gvl) {
    return vlxseg4buv_uint32x4xm1_uint32xm1 (address, index, gvl);
}


uint32x4xm2_t test_vlxseg4buv_uint32x4xm2_uint32xm2 (const unsigned int *address, uint32xm2_t index, unsigned int gvl) {
    return vlxseg4buv_uint32x4xm2_uint32xm2 (address, index, gvl);
}


uint64x4xm1_t test_vlxseg4buv_uint64x4xm1_uint64xm1 (const unsigned long *address, uint64xm1_t index, unsigned int gvl) {
    return vlxseg4buv_uint64x4xm1_uint64xm1 (address, index, gvl);
}


uint64x4xm2_t test_vlxseg4buv_uint64x4xm2_uint64xm2 (const unsigned long *address, uint64xm2_t index, unsigned int gvl) {
    return vlxseg4buv_uint64x4xm2_uint64xm2 (address, index, gvl);
}


uint8x4xm1_t test_vlxseg4buv_uint8x4xm1_uint8xm1 (const unsigned char *address, uint8xm1_t index, unsigned int gvl) {
    return vlxseg4buv_uint8x4xm1_uint8xm1 (address, index, gvl);
}


uint8x4xm2_t test_vlxseg4buv_uint8x4xm2_uint8xm2 (const unsigned char *address, uint8xm2_t index, unsigned int gvl) {
    return vlxseg4buv_uint8x4xm2_uint8xm2 (address, index, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlxseg4bu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvlxseg4bu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlxseg4bu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvlxseg4bu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlxseg4bu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvlxseg4bu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlxseg4bu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvlxseg4bu\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

