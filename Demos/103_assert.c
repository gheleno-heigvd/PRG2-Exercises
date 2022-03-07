//#define NDEBUG // Pour désactiver assert
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

#define TRACE() \
printf("Trace point in %s:%s line %d\n", __FILE__, __func__, __LINE__)

int f(int n) {
   assert(n <= 4);
   return n;
}

int main(void) {
   TRACE();
   for (int i = 1; i <= 10; ++i) {
      f(i);
      printf("i = %d\n", i);
   }
   return EXIT_SUCCESS;
}
