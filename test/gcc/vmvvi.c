
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16xm1_t test_vmvvi_int16xm1 (const short a, unsigned int gvl) {
    return vmvvi_int16xm1 (1,  gvl);
}


int16xm2_t test_vmvvi_int16xm2 (const short a, unsigned int gvl) {
    return vmvvi_int16xm2 (1,  gvl);
}


int16xm4_t test_vmvvi_int16xm4 (const short a, unsigned int gvl) {
    return vmvvi_int16xm4 (1,  gvl);
}


int16xm8_t test_vmvvi_int16xm8 (const short a, unsigned int gvl) {
    return vmvvi_int16xm8 (1,  gvl);
}


int32xm1_t test_vmvvi_int32xm1 (const int a, unsigned int gvl) {
    return vmvvi_int32xm1 (1,  gvl);
}


int32xm2_t test_vmvvi_int32xm2 (const int a, unsigned int gvl) {
    return vmvvi_int32xm2 (1,  gvl);
}


int32xm4_t test_vmvvi_int32xm4 (const int a, unsigned int gvl) {
    return vmvvi_int32xm4 (1,  gvl);
}


int32xm8_t test_vmvvi_int32xm8 (const int a, unsigned int gvl) {
    return vmvvi_int32xm8 (1,  gvl);
}


int64xm1_t test_vmvvi_int64xm1 (const long a, unsigned int gvl) {
    return vmvvi_int64xm1 (1,  gvl);
}


int64xm2_t test_vmvvi_int64xm2 (const long a, unsigned int gvl) {
    return vmvvi_int64xm2 (1,  gvl);
}


int64xm4_t test_vmvvi_int64xm4 (const long a, unsigned int gvl) {
    return vmvvi_int64xm4 (1,  gvl);
}


int64xm8_t test_vmvvi_int64xm8 (const long a, unsigned int gvl) {
    return vmvvi_int64xm8 (1,  gvl);
}


int8xm1_t test_vmvvi_int8xm1 (const signed char a, unsigned int gvl) {
    return vmvvi_int8xm1 (1,  gvl);
}


int8xm2_t test_vmvvi_int8xm2 (const signed char a, unsigned int gvl) {
    return vmvvi_int8xm2 (1,  gvl);
}


int8xm4_t test_vmvvi_int8xm4 (const signed char a, unsigned int gvl) {
    return vmvvi_int8xm4 (1,  gvl);
}


int8xm8_t test_vmvvi_int8xm8 (const signed char a, unsigned int gvl) {
    return vmvvi_int8xm8 (1,  gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvmv\.v\.i" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvmv\.v\.i" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvmv\.v\.i" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvmv\.v\.i" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvmv\.v\.i" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvmv\.v\.i" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvmv\.v\.i" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvmv\.v\.i" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvmv\.v\.i" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvmv\.v\.i" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvmv\.v\.i" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvmv\.v\.i" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvmv\.v\.i" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvmv\.v\.i" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvmv\.v\.i" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8\n\tvmv\.v\.i" } }*/

/* { dg-final { cleanup-saved-temps } } */

