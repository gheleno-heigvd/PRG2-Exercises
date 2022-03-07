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
   printf("%d\n", n);   // %i and %d both mean signed integer
   printf("%s\n", "AB");   // Since there are " it is a string and the
                           // preprocessor won't do anything here, it's one
                           // of the three cases where the preprocessor won't
                           // replace the value (strings between "",
                           // characters between '' and identifiers).
   printf("%i\n", F(A, B));

   return EXIT_SUCCESS;
}

// Output
// 3
// AB
// 3 --> It's a 3 year because the preprocessor concatenates A with B which gives
//       AB that is already defined as 3! Never thought this would be possible...