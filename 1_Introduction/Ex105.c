/*
-----------------------------------------------------------------------------------
Filename : Ex105.c
Author(s) : Gonçalo Heleno
Creation date : 12/03/2022
Description : Write a function to determine the bit of a number (n) at a certain
 position (pos).
Note(s) : None
Compilator : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <stdlib.h>
#include <stdio.h>

unsigned short getBit(unsigned short pos, int n) {
   return (n >> pos) & 1u;
}

int main(void) {
   printf("%d\n", getBit(0,5));
   printf("%d\n", getBit(1,5));
   printf("%d\n", getBit(2,5));
   return EXIT_SUCCESS;
}
