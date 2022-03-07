#include <stdlib.h>
#include <stdio.h>

// #define FOO(X) do {f1(X); f2(X);} while (0)
#define FOO(X) {f1(X); f2(X);}

void f1(int n) {
   printf("Appel de f1(%d)\n", n);   
}

void f2(int n) {
   printf("Appel de f2(%d)\n", n);   
}
   
int main(void) {
   int n = 1;
   if (n == 1) 
      FOO(1); // Sans le else les 2 versions du #define plus haut sont ok
              // mais avec le else ce n'est plus le cas... à moins de supprimer
              // le ; après FOO(1)... ce qui n'est pas intuitif.
//    else
//       printf("blabla\n");
         
   return EXIT_SUCCESS;
}
