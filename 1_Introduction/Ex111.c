/*
-----------------------------------------------------------------------------------
Filename : Ex111.c
Author(s) : Gonçalo Heleno
Creation date : 20/03/2022
Description : Complete the program in order to have the following output:
 i = 1
 j = 4294967295
Note(s) : None
Compilator : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>

int main(void) {
   size_t i = 1;
   uint32_t j = UINT32_MAX;

   printf("%zd\n", i);
   printf("%zd\n", j);

   return EXIT_SUCCESS;
}