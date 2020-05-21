
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint16xm1_t test_vlxhuv_uint16xm1 (const unsigned short *address, uint16xm1_t index, unsigned int gvl) {
    return vlxhuv_uint16xm1 (address, index, gvl);
}


uint16xm2_t test_vlxhuv_uint16xm2 (const unsigned short *address, uint16xm2_t index, unsigned int gvl) {
    return vlxhuv_uint16xm2 (address, index, gvl);
}


uint16xm4_t test_vlxhuv_uint16xm4 (const unsigned short *address, uint16xm4_t index, unsigned int gvl) {
    return vlxhuv_uint16xm4 (address, index, gvl);
}


uint16xm8_t test_vlxhuv_uint16xm8 (const unsigned short *address, uint16xm8_t index, unsigned int gvl) {
    return vlxhuv_uint16xm8 (address, index, gvl);
}


uint32xm1_t test_vlxhuv_uint32xm1 (const unsigned int *address, uint32xm1_t index, unsigned int gvl) {
    return vlxhuv_uint32xm1 (address, index, gvl);
}


uint32xm2_t test_vlxhuv_uint32xm2 (const unsigned int *address, uint32xm2_t index, unsigned int gvl) {
    return vlxhuv_uint32xm2 (address, index, gvl);
}


uint32xm4_t test_vlxhuv_uint32xm4 (const unsigned int *address, uint32xm4_t index, unsigned int gvl) {
    return vlxhuv_uint32xm4 (address, index, gvl);
}


uint32xm8_t test_vlxhuv_uint32xm8 (const unsigned int *address, uint32xm8_t index, unsigned int gvl) {
    return vlxhuv_uint32xm8 (address, index, gvl);
}


uint64xm1_t test_vlxhuv_uint64xm1 (const unsigned long *address, uint64xm1_t index, unsigned int gvl) {
    return vlxhuv_uint64xm1 (address, index, gvl);
}


uint64xm2_t test_vlxhuv_uint64xm2 (const unsigned long *address, uint64xm2_t index, unsigned int gvl) {
    return vlxhuv_uint64xm2 (address, index, gvl);
}


uint64xm4_t test_vlxhuv_uint64xm4 (const unsigned long *address, uint64xm4_t index, unsigned int gvl) {
    return vlxhuv_uint64xm4 (address, index, gvl);
}


uint64xm8_t test_vlxhuv_uint64xm8 (const unsigned long *address, uint64xm8_t index, unsigned int gvl) {
    return vlxhuv_uint64xm8 (address, index, gvl);
}


uint8xm1_t test_vlxhuv_uint8xm1 (const unsigned char *address, uint8xm1_t index, unsigned int gvl) {
    return vlxhuv_uint8xm1 (address, index, gvl);
}


uint8xm2_t test_vlxhuv_uint8xm2 (const unsigned char *address, uint8xm2_t index, unsigned int gvl) {
    return vlxhuv_uint8xm2 (address, index, gvl);
}


uint8xm4_t test_vlxhuv_uint8xm4 (const unsigned char *address, uint8xm4_t index, unsigned int gvl) {
    return vlxhuv_uint8xm4 (address, index, gvl);
}


uint8xm8_t test_vlxhuv_uint8xm8 (const unsigned char *address, uint8xm8_t index, unsigned int gvl) {
    return vlxhuv_uint8xm8 (address, index, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlxhu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvlxhu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvlxhu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvlxhu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlxhu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvlxhu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvlxhu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvlxhu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlxhu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvlxhu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvlxhu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvlxhu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlxhu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvlxhu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvlxhu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8\n\tvlxhu\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

