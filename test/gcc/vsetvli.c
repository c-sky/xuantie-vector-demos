
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

unsigned int test_vsetvli (unsigned int avl, const int sew, const int lmul) {
    return vsetvli (avl,  RVV_E32,  RVV_M2);
}

/* { dg-final { scan-assembler-times "vsetvli\t" 1 } }*/

/* { dg-final { cleanup-saved-temps } } */

