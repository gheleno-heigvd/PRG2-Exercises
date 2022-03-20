/*
-----------------------------------------------------------------------------------
Filename : Ex110.c
Author(s) : Gonçalo Heleno
Creation date : <dd/mm/yyyy>
Description : Write printf instructions to output the following
 0377
 FF
 +###255
 1.235e+001
 12.345
 12.3450
Note(s) : None
Compilator : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <stdlib.h>
#include <stdio.h>

int main(void) {
   int n = 255;
   double x = 12.345;

   printf("%#o\n", n);
   printf("%X\n", n);
   printf("%+d\n", n);   // How to show the ###?
   printf("%.3e\n", x);  // How to show another zero at the exposant?
   printf("%.3f\n", x);
   printf("%.4f\n", x);
   return EXIT_SUCCESS;
}