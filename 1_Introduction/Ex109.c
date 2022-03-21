/*
-----------------------------------------------------------------------------------
Filename : Ex109.c
Author(s) : Gonçalo Heleno
Creation date : 18/03/2022
Description : What is the output of the following lines?
Note(s) : None
Compilator : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <stdlib.h>
#include <stdio.h>

int main(void) {
   int n = 127;
   double x = 12.3456;
   printf("R1 : |%-4d|\n", n);
   printf("R2 : |%04d|\n", n);
   printf("R3 : |%x|\n", n);
   printf("R4 : |%#o|\n", n);
   printf("R5 : |%f|\n", x);
   printf("R6 : |%5.2f|\n", x);
   printf("R7 : |%.2e|\n", x);
   printf("R8 : |%g|\n", x);
   return EXIT_SUCCESS;
}

// Output
// |127 |
// |0127|
// |7f|
// |0177|
// |12.345600|
// |12.35|
// |1.23e+01|
// |12.3456|
