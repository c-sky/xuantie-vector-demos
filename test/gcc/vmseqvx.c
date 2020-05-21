
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

e16xm1_t test_vmseqvx_e16xm1_int16xm1 (int16xm1_t a, short b, unsigned int gvl) {
    return vmseqvx_e16xm1_int16xm1 (a, b, gvl);
}


e16xm1_t test_vmseqvx_e16xm1_uint16xm1 (uint16xm1_t a, unsigned short b, unsigned int gvl) {
    return vmseqvx_e16xm1_uint16xm1 (a, b, gvl);
}


e16xm2_t test_vmseqvx_e16xm2_int16xm2 (int16xm2_t a, short b, unsigned int gvl) {
    return vmseqvx_e16xm2_int16xm2 (a, b, gvl);
}


e16xm2_t test_vmseqvx_e16xm2_uint16xm2 (uint16xm2_t a, unsigned short b, unsigned int gvl) {
    return vmseqvx_e16xm2_uint16xm2 (a, b, gvl);
}


e16xm4_t test_vmseqvx_e16xm4_int16xm4 (int16xm4_t a, short b, unsigned int gvl) {
    return vmseqvx_e16xm4_int16xm4 (a, b, gvl);
}


e16xm4_t test_vmseqvx_e16xm4_uint16xm4 (uint16xm4_t a, unsigned short b, unsigned int gvl) {
    return vmseqvx_e16xm4_uint16xm4 (a, b, gvl);
}


e16xm8_t test_vmseqvx_e16xm8_int16xm8 (int16xm8_t a, short b, unsigned int gvl) {
    return vmseqvx_e16xm8_int16xm8 (a, b, gvl);
}


e16xm8_t test_vmseqvx_e16xm8_uint16xm8 (uint16xm8_t a, unsigned short b, unsigned int gvl) {
    return vmseqvx_e16xm8_uint16xm8 (a, b, gvl);
}


e32xm1_t test_vmseqvx_e32xm1_int32xm1 (int32xm1_t a, int b, unsigned int gvl) {
    return vmseqvx_e32xm1_int32xm1 (a, b, gvl);
}


e32xm1_t test_vmseqvx_e32xm1_uint32xm1 (uint32xm1_t a, unsigned int b, unsigned int gvl) {
    return vmseqvx_e32xm1_uint32xm1 (a, b, gvl);
}


e32xm2_t test_vmseqvx_e32xm2_int32xm2 (int32xm2_t a, int b, unsigned int gvl) {
    return vmseqvx_e32xm2_int32xm2 (a, b, gvl);
}


e32xm2_t test_vmseqvx_e32xm2_uint32xm2 (uint32xm2_t a, unsigned int b, unsigned int gvl) {
    return vmseqvx_e32xm2_uint32xm2 (a, b, gvl);
}


e32xm4_t test_vmseqvx_e32xm4_int32xm4 (int32xm4_t a, int b, unsigned int gvl) {
    return vmseqvx_e32xm4_int32xm4 (a, b, gvl);
}


e32xm4_t test_vmseqvx_e32xm4_uint32xm4 (uint32xm4_t a, unsigned int b, unsigned int gvl) {
    return vmseqvx_e32xm4_uint32xm4 (a, b, gvl);
}


e32xm8_t test_vmseqvx_e32xm8_int32xm8 (int32xm8_t a, int b, unsigned int gvl) {
    return vmseqvx_e32xm8_int32xm8 (a, b, gvl);
}


e32xm8_t test_vmseqvx_e32xm8_uint32xm8 (uint32xm8_t a, unsigned int b, unsigned int gvl) {
    return vmseqvx_e32xm8_uint32xm8 (a, b, gvl);
}


e64xm1_t test_vmseqvx_e64xm1_int64xm1 (int64xm1_t a, long b, unsigned int gvl) {
    return vmseqvx_e64xm1_int64xm1 (a, b, gvl);
}


e64xm1_t test_vmseqvx_e64xm1_uint64xm1 (uint64xm1_t a, unsigned long b, unsigned int gvl) {
    return vmseqvx_e64xm1_uint64xm1 (a, b, gvl);
}


e64xm2_t test_vmseqvx_e64xm2_int64xm2 (int64xm2_t a, long b, unsigned int gvl) {
    return vmseqvx_e64xm2_int64xm2 (a, b, gvl);
}


e64xm2_t test_vmseqvx_e64xm2_uint64xm2 (uint64xm2_t a, unsigned long b, unsigned int gvl) {
    return vmseqvx_e64xm2_uint64xm2 (a, b, gvl);
}


e64xm4_t test_vmseqvx_e64xm4_int64xm4 (int64xm4_t a, long b, unsigned int gvl) {
    return vmseqvx_e64xm4_int64xm4 (a, b, gvl);
}


e64xm4_t test_vmseqvx_e64xm4_uint64xm4 (uint64xm4_t a, unsigned long b, unsigned int gvl) {
    return vmseqvx_e64xm4_uint64xm4 (a, b, gvl);
}


e64xm8_t test_vmseqvx_e64xm8_int64xm8 (int64xm8_t a, long b, unsigned int gvl) {
    return vmseqvx_e64xm8_int64xm8 (a, b, gvl);
}


e64xm8_t test_vmseqvx_e64xm8_uint64xm8 (uint64xm8_t a, unsigned long b, unsigned int gvl) {
    return vmseqvx_e64xm8_uint64xm8 (a, b, gvl);
}


e8xm1_t test_vmseqvx_e8xm1_int8xm1 (int8xm1_t a, signed char b, unsigned int gvl) {
    return vmseqvx_e8xm1_int8xm1 (a, b, gvl);
}


e8xm1_t test_vmseqvx_e8xm1_uint8xm1 (uint8xm1_t a, unsigned char b, unsigned int gvl) {
    return vmseqvx_e8xm1_uint8xm1 (a, b, gvl);
}


e8xm2_t test_vmseqvx_e8xm2_int8xm2 (int8xm2_t a, signed char b, unsigned int gvl) {
    return vmseqvx_e8xm2_int8xm2 (a, b, gvl);
}


e8xm2_t test_vmseqvx_e8xm2_uint8xm2 (uint8xm2_t a, unsigned char b, unsigned int gvl) {
    return vmseqvx_e8xm2_uint8xm2 (a, b, gvl);
}


e8xm4_t test_vmseqvx_e8xm4_int8xm4 (int8xm4_t a, signed char b, unsigned int gvl) {
    return vmseqvx_e8xm4_int8xm4 (a, b, gvl);
}


e8xm4_t test_vmseqvx_e8xm4_uint8xm4 (uint8xm4_t a, unsigned char b, unsigned int gvl) {
    return vmseqvx_e8xm4_uint8xm4 (a, b, gvl);
}


e8xm8_t test_vmseqvx_e8xm8_int8xm8 (int8xm8_t a, signed char b, unsigned int gvl) {
    return vmseqvx_e8xm8_int8xm8 (a, b, gvl);
}


e8xm8_t test_vmseqvx_e8xm8_uint8xm8 (uint8xm8_t a, unsigned char b, unsigned int gvl) {
    return vmseqvx_e8xm8_uint8xm8 (a, b, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8\n\tvmseq\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8\n\tvmseq\.vx" } }*/

/* { dg-final { cleanup-saved-temps } } */

