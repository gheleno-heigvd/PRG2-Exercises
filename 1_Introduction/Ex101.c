/*
-----------------------------------------------------------------------------------
Filename : <filename>.<xxx>
Author(s) : Gonçalo Heleno
Creation date : <dd/mm/yyyy>
Description : <to complete>
Note(s) : <to complete>
Compilator : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <stdio.h> #include <stdlib.h>

#define A 1
#define B 2
#define AB 3 #define F(X,Y) X##Y

int main(void) {

   int n = AB;
   printf("%<?>\n", n);
   printf("%<?>\n", "AB");
   printf("%<?>\n", F(A, B));

   return EXIT_SUCCESS;
}
