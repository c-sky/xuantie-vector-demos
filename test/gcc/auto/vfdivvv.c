
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float32xm1_t test_vfdivvv_float32xm1 (float32xm1_t a, float32xm1_t b, unsigned int gvl) {
return a/b;
}


float32xm2_t test_vfdivvv_float32xm2 (float32xm2_t a, float32xm2_t b, unsigned int gvl) {
return a/b;
}


float32xm4_t test_vfdivvv_float32xm4 (float32xm4_t a, float32xm4_t b, unsigned int gvl) {
return a/b;
}


float32xm8_t test_vfdivvv_float32xm8 (float32xm8_t a, float32xm8_t b, unsigned int gvl) {
return a/b;
}


float64xm1_t test_vfdivvv_float64xm1 (float64xm1_t a, float64xm1_t b, unsigned int gvl) {
return a/b;
}


float64xm2_t test_vfdivvv_float64xm2 (float64xm2_t a, float64xm2_t b, unsigned int gvl) {
return a/b;
}


float64xm4_t test_vfdivvv_float64xm4 (float64xm4_t a, float64xm4_t b, unsigned int gvl) {
return a/b;
}


float64xm8_t test_vfdivvv_float64xm8 (float64xm8_t a, float64xm8_t b, unsigned int gvl) {
return a/b;
}

/* { dg-final { scan-assembler "vsetvli\tzero,x0,e32,m1\n\tvfdiv\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e32,m2\n\tvfdiv\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e32,m4\n\tvfdiv\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e32,m8\n\tvfdiv\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e64,m1\n\tvfdiv\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e64,m2\n\tvfdiv\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e64,m4\n\tvfdiv\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\tzero,x0,e64,m8\n\tvfdiv\.vv" } }*/

/* { dg-final { cleanup-saved-temps } } */

