
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

e16xm1_t test_vmsgtvi_e16xm1_int16xm1 (int16xm1_t a, const short b, unsigned int gvl) {
    return vmsgtvi_e16xm1_int16xm1 ( a,  1,  gvl);
}


e16xm2_t test_vmsgtvi_e16xm2_int16xm2 (int16xm2_t a, const short b, unsigned int gvl) {
    return vmsgtvi_e16xm2_int16xm2 ( a,  1,  gvl);
}


e16xm4_t test_vmsgtvi_e16xm4_int16xm4 (int16xm4_t a, const short b, unsigned int gvl) {
    return vmsgtvi_e16xm4_int16xm4 ( a,  1,  gvl);
}


e16xm8_t test_vmsgtvi_e16xm8_int16xm8 (int16xm8_t a, const short b, unsigned int gvl) {
    return vmsgtvi_e16xm8_int16xm8 ( a,  1,  gvl);
}


e32xm1_t test_vmsgtvi_e32xm1_int32xm1 (int32xm1_t a, const int b, unsigned int gvl) {
    return vmsgtvi_e32xm1_int32xm1 ( a,  1,  gvl);
}


e32xm2_t test_vmsgtvi_e32xm2_int32xm2 (int32xm2_t a, const int b, unsigned int gvl) {
    return vmsgtvi_e32xm2_int32xm2 ( a,  1,  gvl);
}


e32xm4_t test_vmsgtvi_e32xm4_int32xm4 (int32xm4_t a, const int b, unsigned int gvl) {
    return vmsgtvi_e32xm4_int32xm4 ( a,  1,  gvl);
}


e32xm8_t test_vmsgtvi_e32xm8_int32xm8 (int32xm8_t a, const int b, unsigned int gvl) {
    return vmsgtvi_e32xm8_int32xm8 ( a,  1,  gvl);
}


e64xm1_t test_vmsgtvi_e64xm1_int64xm1 (int64xm1_t a, const long b, unsigned int gvl) {
    return vmsgtvi_e64xm1_int64xm1 ( a,  1,  gvl);
}


e64xm2_t test_vmsgtvi_e64xm2_int64xm2 (int64xm2_t a, const long b, unsigned int gvl) {
    return vmsgtvi_e64xm2_int64xm2 ( a,  1,  gvl);
}


e64xm4_t test_vmsgtvi_e64xm4_int64xm4 (int64xm4_t a, const long b, unsigned int gvl) {
    return vmsgtvi_e64xm4_int64xm4 ( a,  1,  gvl);
}


e64xm8_t test_vmsgtvi_e64xm8_int64xm8 (int64xm8_t a, const long b, unsigned int gvl) {
    return vmsgtvi_e64xm8_int64xm8 ( a,  1,  gvl);
}


e8xm1_t test_vmsgtvi_e8xm1_int8xm1 (int8xm1_t a, const signed char b, unsigned int gvl) {
    return vmsgtvi_e8xm1_int8xm1 ( a,  1,  gvl);
}


e8xm2_t test_vmsgtvi_e8xm2_int8xm2 (int8xm2_t a, const signed char b, unsigned int gvl) {
    return vmsgtvi_e8xm2_int8xm2 ( a,  1,  gvl);
}


e8xm4_t test_vmsgtvi_e8xm4_int8xm4 (int8xm4_t a, const signed char b, unsigned int gvl) {
    return vmsgtvi_e8xm4_int8xm4 ( a,  1,  gvl);
}


e8xm8_t test_vmsgtvi_e8xm8_int8xm8 (int8xm8_t a, const signed char b, unsigned int gvl) {
    return vmsgtvi_e8xm8_int8xm8 ( a,  1,  gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvmsgt\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvmsgt\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvmsgt\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvmsgt\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvmsgt\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvmsgt\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvmsgt\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvmsgt\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvmsgt\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvmsgt\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvmsgt\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvmsgt\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvmsgt\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvmsgt\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvmsgt\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8\n\tvmsgt\.vi" } }*/

/* { dg-final { cleanup-saved-temps } } */

