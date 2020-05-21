
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint16x3xm1_t test_vlseg3wuv_uint16x3xm1 (const unsigned short *address, unsigned int gvl) {
    return vlseg3wuv_uint16x3xm1 (address, gvl);
}


uint16x3xm2_t test_vlseg3wuv_uint16x3xm2 (const unsigned short *address, unsigned int gvl) {
    return vlseg3wuv_uint16x3xm2 (address, gvl);
}


uint32x3xm1_t test_vlseg3wuv_uint32x3xm1 (const unsigned int *address, unsigned int gvl) {
    return vlseg3wuv_uint32x3xm1 (address, gvl);
}


uint32x3xm2_t test_vlseg3wuv_uint32x3xm2 (const unsigned int *address, unsigned int gvl) {
    return vlseg3wuv_uint32x3xm2 (address, gvl);
}


uint64x3xm1_t test_vlseg3wuv_uint64x3xm1 (const unsigned long *address, unsigned int gvl) {
    return vlseg3wuv_uint64x3xm1 (address, gvl);
}


uint64x3xm2_t test_vlseg3wuv_uint64x3xm2 (const unsigned long *address, unsigned int gvl) {
    return vlseg3wuv_uint64x3xm2 (address, gvl);
}


uint8x3xm1_t test_vlseg3wuv_uint8x3xm1 (const unsigned char *address, unsigned int gvl) {
    return vlseg3wuv_uint8x3xm1 (address, gvl);
}


uint8x3xm2_t test_vlseg3wuv_uint8x3xm2 (const unsigned char *address, unsigned int gvl) {
    return vlseg3wuv_uint8x3xm2 (address, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlseg3wu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvlseg3wu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlseg3wu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvlseg3wu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlseg3wu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvlseg3wu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlseg3wu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvlseg3wu\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

