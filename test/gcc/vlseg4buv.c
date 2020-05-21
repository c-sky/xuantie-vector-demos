
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint16x4xm1_t test_vlseg4buv_uint16x4xm1 (const unsigned short *address, unsigned int gvl) {
    return vlseg4buv_uint16x4xm1 (address, gvl);
}


uint16x4xm2_t test_vlseg4buv_uint16x4xm2 (const unsigned short *address, unsigned int gvl) {
    return vlseg4buv_uint16x4xm2 (address, gvl);
}


uint32x4xm1_t test_vlseg4buv_uint32x4xm1 (const unsigned int *address, unsigned int gvl) {
    return vlseg4buv_uint32x4xm1 (address, gvl);
}


uint32x4xm2_t test_vlseg4buv_uint32x4xm2 (const unsigned int *address, unsigned int gvl) {
    return vlseg4buv_uint32x4xm2 (address, gvl);
}


uint64x4xm1_t test_vlseg4buv_uint64x4xm1 (const unsigned long *address, unsigned int gvl) {
    return vlseg4buv_uint64x4xm1 (address, gvl);
}


uint64x4xm2_t test_vlseg4buv_uint64x4xm2 (const unsigned long *address, unsigned int gvl) {
    return vlseg4buv_uint64x4xm2 (address, gvl);
}


uint8x4xm1_t test_vlseg4buv_uint8x4xm1 (const unsigned char *address, unsigned int gvl) {
    return vlseg4buv_uint8x4xm1 (address, gvl);
}


uint8x4xm2_t test_vlseg4buv_uint8x4xm2 (const unsigned char *address, unsigned int gvl) {
    return vlseg4buv_uint8x4xm2 (address, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlseg4bu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvlseg4bu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlseg4bu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvlseg4bu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlseg4bu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvlseg4bu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlseg4bu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvlseg4bu\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

