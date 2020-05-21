
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16xm1_t test_vmvvx_int16xm1 (short a, unsigned int gvl) {
    return vmvvx_int16xm1 (a, gvl);
}


int16xm2_t test_vmvvx_int16xm2 (short a, unsigned int gvl) {
    return vmvvx_int16xm2 (a, gvl);
}


int16xm4_t test_vmvvx_int16xm4 (short a, unsigned int gvl) {
    return vmvvx_int16xm4 (a, gvl);
}


int16xm8_t test_vmvvx_int16xm8 (short a, unsigned int gvl) {
    return vmvvx_int16xm8 (a, gvl);
}


int32xm1_t test_vmvvx_int32xm1 (int a, unsigned int gvl) {
    return vmvvx_int32xm1 (a, gvl);
}


int32xm2_t test_vmvvx_int32xm2 (int a, unsigned int gvl) {
    return vmvvx_int32xm2 (a, gvl);
}


int32xm4_t test_vmvvx_int32xm4 (int a, unsigned int gvl) {
    return vmvvx_int32xm4 (a, gvl);
}


int32xm8_t test_vmvvx_int32xm8 (int a, unsigned int gvl) {
    return vmvvx_int32xm8 (a, gvl);
}


int64xm1_t test_vmvvx_int64xm1 (long a, unsigned int gvl) {
    return vmvvx_int64xm1 (a, gvl);
}


int64xm2_t test_vmvvx_int64xm2 (long a, unsigned int gvl) {
    return vmvvx_int64xm2 (a, gvl);
}


int64xm4_t test_vmvvx_int64xm4 (long a, unsigned int gvl) {
    return vmvvx_int64xm4 (a, gvl);
}


int64xm8_t test_vmvvx_int64xm8 (long a, unsigned int gvl) {
    return vmvvx_int64xm8 (a, gvl);
}


int8xm1_t test_vmvvx_int8xm1 (signed char a, unsigned int gvl) {
    return vmvvx_int8xm1 (a, gvl);
}


int8xm2_t test_vmvvx_int8xm2 (signed char a, unsigned int gvl) {
    return vmvvx_int8xm2 (a, gvl);
}


int8xm4_t test_vmvvx_int8xm4 (signed char a, unsigned int gvl) {
    return vmvvx_int8xm4 (a, gvl);
}


int8xm8_t test_vmvvx_int8xm8 (signed char a, unsigned int gvl) {
    return vmvvx_int8xm8 (a, gvl);
}


uint16xm1_t test_vmvvx_uint16xm1 (unsigned short a, unsigned int gvl) {
    return vmvvx_uint16xm1 (a, gvl);
}


uint16xm2_t test_vmvvx_uint16xm2 (unsigned short a, unsigned int gvl) {
    return vmvvx_uint16xm2 (a, gvl);
}


uint16xm4_t test_vmvvx_uint16xm4 (unsigned short a, unsigned int gvl) {
    return vmvvx_uint16xm4 (a, gvl);
}


uint16xm8_t test_vmvvx_uint16xm8 (unsigned short a, unsigned int gvl) {
    return vmvvx_uint16xm8 (a, gvl);
}


uint32xm1_t test_vmvvx_uint32xm1 (unsigned int a, unsigned int gvl) {
    return vmvvx_uint32xm1 (a, gvl);
}


uint32xm2_t test_vmvvx_uint32xm2 (unsigned int a, unsigned int gvl) {
    return vmvvx_uint32xm2 (a, gvl);
}


uint32xm4_t test_vmvvx_uint32xm4 (unsigned int a, unsigned int gvl) {
    return vmvvx_uint32xm4 (a, gvl);
}


uint32xm8_t test_vmvvx_uint32xm8 (unsigned int a, unsigned int gvl) {
    return vmvvx_uint32xm8 (a, gvl);
}


uint64xm1_t test_vmvvx_uint64xm1 (unsigned long a, unsigned int gvl) {
    return vmvvx_uint64xm1 (a, gvl);
}


uint64xm2_t test_vmvvx_uint64xm2 (unsigned long a, unsigned int gvl) {
    return vmvvx_uint64xm2 (a, gvl);
}


uint64xm4_t test_vmvvx_uint64xm4 (unsigned long a, unsigned int gvl) {
    return vmvvx_uint64xm4 (a, gvl);
}


uint64xm8_t test_vmvvx_uint64xm8 (unsigned long a, unsigned int gvl) {
    return vmvvx_uint64xm8 (a, gvl);
}


uint8xm1_t test_vmvvx_uint8xm1 (unsigned char a, unsigned int gvl) {
    return vmvvx_uint8xm1 (a, gvl);
}


uint8xm2_t test_vmvvx_uint8xm2 (unsigned char a, unsigned int gvl) {
    return vmvvx_uint8xm2 (a, gvl);
}


uint8xm4_t test_vmvvx_uint8xm4 (unsigned char a, unsigned int gvl) {
    return vmvvx_uint8xm4 (a, gvl);
}


uint8xm8_t test_vmvvx_uint8xm8 (unsigned char a, unsigned int gvl) {
    return vmvvx_uint8xm8 (a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvmv\.v\.x" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8\n\tvmv\.v\.x" } }*/

/* { dg-final { cleanup-saved-temps } } */

