
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

e16xm1_t test_vmsltuvx_e16xm1_uint16xm1 (uint16xm1_t a, unsigned short b, unsigned int gvl) {
    return vmsltuvx_e16xm1_uint16xm1 (a, b, gvl);
}


e16xm2_t test_vmsltuvx_e16xm2_uint16xm2 (uint16xm2_t a, unsigned short b, unsigned int gvl) {
    return vmsltuvx_e16xm2_uint16xm2 (a, b, gvl);
}


e16xm4_t test_vmsltuvx_e16xm4_uint16xm4 (uint16xm4_t a, unsigned short b, unsigned int gvl) {
    return vmsltuvx_e16xm4_uint16xm4 (a, b, gvl);
}


e16xm8_t test_vmsltuvx_e16xm8_uint16xm8 (uint16xm8_t a, unsigned short b, unsigned int gvl) {
    return vmsltuvx_e16xm8_uint16xm8 (a, b, gvl);
}


e32xm1_t test_vmsltuvx_e32xm1_uint32xm1 (uint32xm1_t a, unsigned int b, unsigned int gvl) {
    return vmsltuvx_e32xm1_uint32xm1 (a, b, gvl);
}


e32xm2_t test_vmsltuvx_e32xm2_uint32xm2 (uint32xm2_t a, unsigned int b, unsigned int gvl) {
    return vmsltuvx_e32xm2_uint32xm2 (a, b, gvl);
}


e32xm4_t test_vmsltuvx_e32xm4_uint32xm4 (uint32xm4_t a, unsigned int b, unsigned int gvl) {
    return vmsltuvx_e32xm4_uint32xm4 (a, b, gvl);
}


e32xm8_t test_vmsltuvx_e32xm8_uint32xm8 (uint32xm8_t a, unsigned int b, unsigned int gvl) {
    return vmsltuvx_e32xm8_uint32xm8 (a, b, gvl);
}


e64xm1_t test_vmsltuvx_e64xm1_uint64xm1 (uint64xm1_t a, unsigned long b, unsigned int gvl) {
    return vmsltuvx_e64xm1_uint64xm1 (a, b, gvl);
}


e64xm2_t test_vmsltuvx_e64xm2_uint64xm2 (uint64xm2_t a, unsigned long b, unsigned int gvl) {
    return vmsltuvx_e64xm2_uint64xm2 (a, b, gvl);
}


e64xm4_t test_vmsltuvx_e64xm4_uint64xm4 (uint64xm4_t a, unsigned long b, unsigned int gvl) {
    return vmsltuvx_e64xm4_uint64xm4 (a, b, gvl);
}


e64xm8_t test_vmsltuvx_e64xm8_uint64xm8 (uint64xm8_t a, unsigned long b, unsigned int gvl) {
    return vmsltuvx_e64xm8_uint64xm8 (a, b, gvl);
}


e8xm1_t test_vmsltuvx_e8xm1_uint8xm1 (uint8xm1_t a, unsigned char b, unsigned int gvl) {
    return vmsltuvx_e8xm1_uint8xm1 (a, b, gvl);
}


e8xm2_t test_vmsltuvx_e8xm2_uint8xm2 (uint8xm2_t a, unsigned char b, unsigned int gvl) {
    return vmsltuvx_e8xm2_uint8xm2 (a, b, gvl);
}


e8xm4_t test_vmsltuvx_e8xm4_uint8xm4 (uint8xm4_t a, unsigned char b, unsigned int gvl) {
    return vmsltuvx_e8xm4_uint8xm4 (a, b, gvl);
}


e8xm8_t test_vmsltuvx_e8xm8_uint8xm8 (uint8xm8_t a, unsigned char b, unsigned int gvl) {
    return vmsltuvx_e8xm8_uint8xm8 (a, b, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvmsltu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvmsltu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvmsltu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvmsltu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvmsltu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvmsltu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvmsltu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvmsltu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvmsltu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvmsltu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvmsltu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvmsltu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvmsltu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvmsltu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvmsltu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8\n\tvmsltu\.vx" } }*/

/* { dg-final { cleanup-saved-temps } } */

