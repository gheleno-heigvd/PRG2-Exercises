/*
-----------------------------------------------------------------------------------
Filename : Ex101.c
Author(s) : Gonçalo Heleno
Creation date : 06/03/2022
Description : Supposing that the <?> in the code below are replaced by the correct
 code, what will this program output in the console?
Note(s) : None
Compilator : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

#define A 1
#define B 2
#define AB 3
#define F(X,Y) X##Y

int main(void) {

   int n = AB;
   printf("%<?>\n", n);
   printf("%<?>\n", "AB");
   printf("%<?>\n", F(A, B));

   return EXIT_SUCCESS;
}

// Output, considering that the blocks <?> are correct
// 12
// 3
// 12