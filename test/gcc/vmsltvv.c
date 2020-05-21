
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

e16xm1_t test_vmsltvv_e16xm1_int16xm1 (int16xm1_t a, int16xm1_t b, unsigned int gvl) {
    return vmsltvv_e16xm1_int16xm1 (a, b, gvl);
}


e16xm2_t test_vmsltvv_e16xm2_int16xm2 (int16xm2_t a, int16xm2_t b, unsigned int gvl) {
    return vmsltvv_e16xm2_int16xm2 (a, b, gvl);
}


e16xm4_t test_vmsltvv_e16xm4_int16xm4 (int16xm4_t a, int16xm4_t b, unsigned int gvl) {
    return vmsltvv_e16xm4_int16xm4 (a, b, gvl);
}


e16xm8_t test_vmsltvv_e16xm8_int16xm8 (int16xm8_t a, int16xm8_t b, unsigned int gvl) {
    return vmsltvv_e16xm8_int16xm8 (a, b, gvl);
}


e32xm1_t test_vmsltvv_e32xm1_int32xm1 (int32xm1_t a, int32xm1_t b, unsigned int gvl) {
    return vmsltvv_e32xm1_int32xm1 (a, b, gvl);
}


e32xm2_t test_vmsltvv_e32xm2_int32xm2 (int32xm2_t a, int32xm2_t b, unsigned int gvl) {
    return vmsltvv_e32xm2_int32xm2 (a, b, gvl);
}


e32xm4_t test_vmsltvv_e32xm4_int32xm4 (int32xm4_t a, int32xm4_t b, unsigned int gvl) {
    return vmsltvv_e32xm4_int32xm4 (a, b, gvl);
}


e32xm8_t test_vmsltvv_e32xm8_int32xm8 (int32xm8_t a, int32xm8_t b, unsigned int gvl) {
    return vmsltvv_e32xm8_int32xm8 (a, b, gvl);
}


e64xm1_t test_vmsltvv_e64xm1_int64xm1 (int64xm1_t a, int64xm1_t b, unsigned int gvl) {
    return vmsltvv_e64xm1_int64xm1 (a, b, gvl);
}


e64xm2_t test_vmsltvv_e64xm2_int64xm2 (int64xm2_t a, int64xm2_t b, unsigned int gvl) {
    return vmsltvv_e64xm2_int64xm2 (a, b, gvl);
}


e64xm4_t test_vmsltvv_e64xm4_int64xm4 (int64xm4_t a, int64xm4_t b, unsigned int gvl) {
    return vmsltvv_e64xm4_int64xm4 (a, b, gvl);
}


e64xm8_t test_vmsltvv_e64xm8_int64xm8 (int64xm8_t a, int64xm8_t b, unsigned int gvl) {
    return vmsltvv_e64xm8_int64xm8 (a, b, gvl);
}


e8xm1_t test_vmsltvv_e8xm1_int8xm1 (int8xm1_t a, int8xm1_t b, unsigned int gvl) {
    return vmsltvv_e8xm1_int8xm1 (a, b, gvl);
}


e8xm2_t test_vmsltvv_e8xm2_int8xm2 (int8xm2_t a, int8xm2_t b, unsigned int gvl) {
    return vmsltvv_e8xm2_int8xm2 (a, b, gvl);
}


e8xm4_t test_vmsltvv_e8xm4_int8xm4 (int8xm4_t a, int8xm4_t b, unsigned int gvl) {
    return vmsltvv_e8xm4_int8xm4 (a, b, gvl);
}


e8xm8_t test_vmsltvv_e8xm8_int8xm8 (int8xm8_t a, int8xm8_t b, unsigned int gvl) {
    return vmsltvv_e8xm8_int8xm8 (a, b, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvmslt\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvmslt\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvmslt\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvmslt\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvmslt\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvmslt\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvmslt\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvmslt\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvmslt\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvmslt\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvmslt\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvmslt\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvmslt\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvmslt\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvmslt\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8\n\tvmslt\.vv" } }*/

/* { dg-final { cleanup-saved-temps } } */

