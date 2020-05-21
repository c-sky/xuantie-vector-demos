
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float32xm1_t test_vlev_float32xm1 (const float *address, unsigned int gvl) {
    return vlev_float32xm1 (address, gvl);
}


float32xm2_t test_vlev_float32xm2 (const float *address, unsigned int gvl) {
    return vlev_float32xm2 (address, gvl);
}


float32xm4_t test_vlev_float32xm4 (const float *address, unsigned int gvl) {
    return vlev_float32xm4 (address, gvl);
}


float32xm8_t test_vlev_float32xm8 (const float *address, unsigned int gvl) {
    return vlev_float32xm8 (address, gvl);
}


float64xm1_t test_vlev_float64xm1 (const double *address, unsigned int gvl) {
    return vlev_float64xm1 (address, gvl);
}


float64xm2_t test_vlev_float64xm2 (const double *address, unsigned int gvl) {
    return vlev_float64xm2 (address, gvl);
}


float64xm4_t test_vlev_float64xm4 (const double *address, unsigned int gvl) {
    return vlev_float64xm4 (address, gvl);
}


float64xm8_t test_vlev_float64xm8 (const double *address, unsigned int gvl) {
    return vlev_float64xm8 (address, gvl);
}


int16xm1_t test_vlev_int16xm1 (const short *address, unsigned int gvl) {
    return vlev_int16xm1 (address, gvl);
}


int16xm2_t test_vlev_int16xm2 (const short *address, unsigned int gvl) {
    return vlev_int16xm2 (address, gvl);
}


int16xm4_t test_vlev_int16xm4 (const short *address, unsigned int gvl) {
    return vlev_int16xm4 (address, gvl);
}


int16xm8_t test_vlev_int16xm8 (const short *address, unsigned int gvl) {
    return vlev_int16xm8 (address, gvl);
}


int32xm1_t test_vlev_int32xm1 (const int *address, unsigned int gvl) {
    return vlev_int32xm1 (address, gvl);
}


int32xm2_t test_vlev_int32xm2 (const int *address, unsigned int gvl) {
    return vlev_int32xm2 (address, gvl);
}


int32xm4_t test_vlev_int32xm4 (const int *address, unsigned int gvl) {
    return vlev_int32xm4 (address, gvl);
}


int32xm8_t test_vlev_int32xm8 (const int *address, unsigned int gvl) {
    return vlev_int32xm8 (address, gvl);
}


int64xm1_t test_vlev_int64xm1 (const long *address, unsigned int gvl) {
    return vlev_int64xm1 (address, gvl);
}


int64xm2_t test_vlev_int64xm2 (const long *address, unsigned int gvl) {
    return vlev_int64xm2 (address, gvl);
}


int64xm4_t test_vlev_int64xm4 (const long *address, unsigned int gvl) {
    return vlev_int64xm4 (address, gvl);
}


int64xm8_t test_vlev_int64xm8 (const long *address, unsigned int gvl) {
    return vlev_int64xm8 (address, gvl);
}


int8xm1_t test_vlev_int8xm1 (const signed char *address, unsigned int gvl) {
    return vlev_int8xm1 (address, gvl);
}


int8xm2_t test_vlev_int8xm2 (const signed char *address, unsigned int gvl) {
    return vlev_int8xm2 (address, gvl);
}


int8xm4_t test_vlev_int8xm4 (const signed char *address, unsigned int gvl) {
    return vlev_int8xm4 (address, gvl);
}


int8xm8_t test_vlev_int8xm8 (const signed char *address, unsigned int gvl) {
    return vlev_int8xm8 (address, gvl);
}


uint16xm1_t test_vlev_uint16xm1 (const unsigned short *address, unsigned int gvl) {
    return vlev_uint16xm1 (address, gvl);
}


uint16xm2_t test_vlev_uint16xm2 (const unsigned short *address, unsigned int gvl) {
    return vlev_uint16xm2 (address, gvl);
}


uint16xm4_t test_vlev_uint16xm4 (const unsigned short *address, unsigned int gvl) {
    return vlev_uint16xm4 (address, gvl);
}


uint16xm8_t test_vlev_uint16xm8 (const unsigned short *address, unsigned int gvl) {
    return vlev_uint16xm8 (address, gvl);
}


uint32xm1_t test_vlev_uint32xm1 (const unsigned int *address, unsigned int gvl) {
    return vlev_uint32xm1 (address, gvl);
}


uint32xm2_t test_vlev_uint32xm2 (const unsigned int *address, unsigned int gvl) {
    return vlev_uint32xm2 (address, gvl);
}


uint32xm4_t test_vlev_uint32xm4 (const unsigned int *address, unsigned int gvl) {
    return vlev_uint32xm4 (address, gvl);
}


uint32xm8_t test_vlev_uint32xm8 (const unsigned int *address, unsigned int gvl) {
    return vlev_uint32xm8 (address, gvl);
}


uint64xm1_t test_vlev_uint64xm1 (const unsigned long *address, unsigned int gvl) {
    return vlev_uint64xm1 (address, gvl);
}


uint64xm2_t test_vlev_uint64xm2 (const unsigned long *address, unsigned int gvl) {
    return vlev_uint64xm2 (address, gvl);
}


uint64xm4_t test_vlev_uint64xm4 (const unsigned long *address, unsigned int gvl) {
    return vlev_uint64xm4 (address, gvl);
}


uint64xm8_t test_vlev_uint64xm8 (const unsigned long *address, unsigned int gvl) {
    return vlev_uint64xm8 (address, gvl);
}


uint8xm1_t test_vlev_uint8xm1 (const unsigned char *address, unsigned int gvl) {
    return vlev_uint8xm1 (address, gvl);
}


uint8xm2_t test_vlev_uint8xm2 (const unsigned char *address, unsigned int gvl) {
    return vlev_uint8xm2 (address, gvl);
}


uint8xm4_t test_vlev_uint8xm4 (const unsigned char *address, unsigned int gvl) {
    return vlev_uint8xm4 (address, gvl);
}


uint8xm8_t test_vlev_uint8xm8 (const unsigned char *address, unsigned int gvl) {
    return vlev_uint8xm8 (address, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8\n\tvle\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

