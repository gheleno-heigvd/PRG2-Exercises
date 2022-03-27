#include <stdlib.h>
#include <stdio.h>

void clear_stdin(void);

int main(void) {
   
   int n = -1;
   
   printf("Entrez un entier (par ex 10, 012(oct) ou 0xA(hex)) : ");
   scanf("%i", &n); // <<<<<
   printf("Vous avez saisi la valeur %i\n", n);
   
   clear_stdin();
      
   double x;
   printf("Entrez un double : ");
   scanf("%lf", &x); // <<<<<
   printf("Vous avez saisi la valeur %g\n", x);

   return EXIT_SUCCESS;
}

void clear_stdin(void) {
   int c;
   do {
      c = getchar();
   } while (c != '\n' && c != EOF);   
}
