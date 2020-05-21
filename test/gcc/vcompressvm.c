
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16xm1_t test_vcompressvm_int16xm1_e16xm1 (int16xm1_t a, e16xm1_t b, unsigned int gvl) {
    return vcompressvm_int16xm1_e16xm1 (a, b, gvl);
}


int16xm2_t test_vcompressvm_int16xm2_e16xm2 (int16xm2_t a, e16xm2_t b, unsigned int gvl) {
    return vcompressvm_int16xm2_e16xm2 (a, b, gvl);
}


int16xm4_t test_vcompressvm_int16xm4_e16xm4 (int16xm4_t a, e16xm4_t b, unsigned int gvl) {
    return vcompressvm_int16xm4_e16xm4 (a, b, gvl);
}


int16xm8_t test_vcompressvm_int16xm8_e16xm8 (int16xm8_t a, e16xm8_t b, unsigned int gvl) {
    return vcompressvm_int16xm8_e16xm8 (a, b, gvl);
}


int32xm1_t test_vcompressvm_int32xm1_e32xm1 (int32xm1_t a, e32xm1_t b, unsigned int gvl) {
    return vcompressvm_int32xm1_e32xm1 (a, b, gvl);
}


int32xm2_t test_vcompressvm_int32xm2_e32xm2 (int32xm2_t a, e32xm2_t b, unsigned int gvl) {
    return vcompressvm_int32xm2_e32xm2 (a, b, gvl);
}


int32xm4_t test_vcompressvm_int32xm4_e32xm4 (int32xm4_t a, e32xm4_t b, unsigned int gvl) {
    return vcompressvm_int32xm4_e32xm4 (a, b, gvl);
}


int32xm8_t test_vcompressvm_int32xm8_e32xm8 (int32xm8_t a, e32xm8_t b, unsigned int gvl) {
    return vcompressvm_int32xm8_e32xm8 (a, b, gvl);
}


int64xm1_t test_vcompressvm_int64xm1_e64xm1 (int64xm1_t a, e64xm1_t b, unsigned int gvl) {
    return vcompressvm_int64xm1_e64xm1 (a, b, gvl);
}


int64xm2_t test_vcompressvm_int64xm2_e64xm2 (int64xm2_t a, e64xm2_t b, unsigned int gvl) {
    return vcompressvm_int64xm2_e64xm2 (a, b, gvl);
}


int64xm4_t test_vcompressvm_int64xm4_e64xm4 (int64xm4_t a, e64xm4_t b, unsigned int gvl) {
    return vcompressvm_int64xm4_e64xm4 (a, b, gvl);
}


int64xm8_t test_vcompressvm_int64xm8_e64xm8 (int64xm8_t a, e64xm8_t b, unsigned int gvl) {
    return vcompressvm_int64xm8_e64xm8 (a, b, gvl);
}


int8xm1_t test_vcompressvm_int8xm1_e8xm1 (int8xm1_t a, e8xm1_t b, unsigned int gvl) {
    return vcompressvm_int8xm1_e8xm1 (a, b, gvl);
}


int8xm2_t test_vcompressvm_int8xm2_e8xm2 (int8xm2_t a, e8xm2_t b, unsigned int gvl) {
    return vcompressvm_int8xm2_e8xm2 (a, b, gvl);
}


int8xm4_t test_vcompressvm_int8xm4_e8xm4 (int8xm4_t a, e8xm4_t b, unsigned int gvl) {
    return vcompressvm_int8xm4_e8xm4 (a, b, gvl);
}


int8xm8_t test_vcompressvm_int8xm8_e8xm8 (int8xm8_t a, e8xm8_t b, unsigned int gvl) {
    return vcompressvm_int8xm8_e8xm8 (a, b, gvl);
}


uint16xm1_t test_vcompressvm_uint16xm1_e16xm1 (uint16xm1_t a, e16xm1_t b, unsigned int gvl) {
    return vcompressvm_uint16xm1_e16xm1 (a, b, gvl);
}


uint16xm2_t test_vcompressvm_uint16xm2_e16xm2 (uint16xm2_t a, e16xm2_t b, unsigned int gvl) {
    return vcompressvm_uint16xm2_e16xm2 (a, b, gvl);
}


uint16xm4_t test_vcompressvm_uint16xm4_e16xm4 (uint16xm4_t a, e16xm4_t b, unsigned int gvl) {
    return vcompressvm_uint16xm4_e16xm4 (a, b, gvl);
}


uint16xm8_t test_vcompressvm_uint16xm8_e16xm8 (uint16xm8_t a, e16xm8_t b, unsigned int gvl) {
    return vcompressvm_uint16xm8_e16xm8 (a, b, gvl);
}


uint32xm1_t test_vcompressvm_uint32xm1_e32xm1 (uint32xm1_t a, e32xm1_t b, unsigned int gvl) {
    return vcompressvm_uint32xm1_e32xm1 (a, b, gvl);
}


uint32xm2_t test_vcompressvm_uint32xm2_e32xm2 (uint32xm2_t a, e32xm2_t b, unsigned int gvl) {
    return vcompressvm_uint32xm2_e32xm2 (a, b, gvl);
}


uint32xm4_t test_vcompressvm_uint32xm4_e32xm4 (uint32xm4_t a, e32xm4_t b, unsigned int gvl) {
    return vcompressvm_uint32xm4_e32xm4 (a, b, gvl);
}


uint32xm8_t test_vcompressvm_uint32xm8_e32xm8 (uint32xm8_t a, e32xm8_t b, unsigned int gvl) {
    return vcompressvm_uint32xm8_e32xm8 (a, b, gvl);
}


uint64xm1_t test_vcompressvm_uint64xm1_e64xm1 (uint64xm1_t a, e64xm1_t b, unsigned int gvl) {
    return vcompressvm_uint64xm1_e64xm1 (a, b, gvl);
}


uint64xm2_t test_vcompressvm_uint64xm2_e64xm2 (uint64xm2_t a, e64xm2_t b, unsigned int gvl) {
    return vcompressvm_uint64xm2_e64xm2 (a, b, gvl);
}


uint64xm4_t test_vcompressvm_uint64xm4_e64xm4 (uint64xm4_t a, e64xm4_t b, unsigned int gvl) {
    return vcompressvm_uint64xm4_e64xm4 (a, b, gvl);
}


uint64xm8_t test_vcompressvm_uint64xm8_e64xm8 (uint64xm8_t a, e64xm8_t b, unsigned int gvl) {
    return vcompressvm_uint64xm8_e64xm8 (a, b, gvl);
}


uint8xm1_t test_vcompressvm_uint8xm1_e8xm1 (uint8xm1_t a, e8xm1_t b, unsigned int gvl) {
    return vcompressvm_uint8xm1_e8xm1 (a, b, gvl);
}


uint8xm2_t test_vcompressvm_uint8xm2_e8xm2 (uint8xm2_t a, e8xm2_t b, unsigned int gvl) {
    return vcompressvm_uint8xm2_e8xm2 (a, b, gvl);
}


uint8xm4_t test_vcompressvm_uint8xm4_e8xm4 (uint8xm4_t a, e8xm4_t b, unsigned int gvl) {
    return vcompressvm_uint8xm4_e8xm4 (a, b, gvl);
}


uint8xm8_t test_vcompressvm_uint8xm8_e8xm8 (uint8xm8_t a, e8xm8_t b, unsigned int gvl) {
    return vcompressvm_uint8xm8_e8xm8 (a, b, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvcompress\.vm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8\n\tvcompress\.vm" } }*/

/* { dg-final { cleanup-saved-temps } } */

