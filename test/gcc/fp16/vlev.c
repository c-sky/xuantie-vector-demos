
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float16xm1_t test_vlev_float16xm1 (const float16_t *address, unsigned int gvl) {
    return vlev_float16xm1 (address, gvl);
}


float16xm2_t test_vlev_float16xm2 (const float16_t *address, unsigned int gvl) {
    return vlev_float16xm2 (address, gvl);
}


float16xm4_t test_vlev_float16xm4 (const float16_t *address, unsigned int gvl) {
    return vlev_float16xm4 (address, gvl);
}


float16xm8_t test_vlev_float16xm8 (const float16_t *address, unsigned int gvl) {
    return vlev_float16xm8 (address, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvle\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvle\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

