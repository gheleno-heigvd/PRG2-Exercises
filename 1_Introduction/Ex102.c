/*
-----------------------------------------------------------------------------------
Filename : Ex102.c
Author(s) : Gonçalo Heleno
Creation date : 06/03/2022
Description : Correct the program so it shows 25 -1 as the output
Note(s) : Original code
   #include <stdio.h>
   #include <stdlib.h>

   #define A = 2;
   #define B = A + 1;
   #define PLUS (X,Y) X+Y;
   #define MOINS(X,Y) X-Y;

   int main(void) {
      printf("%d %d\n", 5*PLUS(A,B), MOINS(A+1,B+1));
      return EXIT_SUCCESS;
   }
Compilator : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

#define A 2
#define B ((A) + 1)   // We could have A without the parenthesis, since we ONLY have
                      // additions and subtractions
#define PLUS(X, Y) ((X) + (Y))    // If we had a blank space here as before, we
                                  // would replace PLUS for everything after
#define MOINS(X, Y) ((X) - (Y))

int main(void) {
   printf("%d %d\n", 5 * PLUS(A, B), MOINS(A + 1, B + 1));
   printf("%d\n", A * B);
   return EXIT_SUCCESS;
}
