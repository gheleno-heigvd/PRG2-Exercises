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


/*
// Proposed solution by the teacher

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#define INT_SIZE sizeof(int * 8

typedef unsigned short ushort;

ushort getBit(ushort pos, int n);

int main(void) {
   for (ushort pos = 0 ; pos < INTSIZE; ++pos)
      printf("bit %hu = %hu\n, pos, getBit(pos,10));   // %hu means unsigned short
   return EXIT_SUCCESS;
}

ushort getBit(ushort pos, int n) {
   assert(pos < INT_SIZE);
   return n >> pos & 1;   // Here the >> is not dangerous (identical to my solution)

   // Other ways to solve the program, but that not really answer what is demanded:
   // const int MASK = 1 << pos;
   // return (n & MASK) == MASK;   // Possible but uses ==, that is, we do not work exclusively with bit by bit operators!
   // return n & 1 << pos ? 1 : 0;   // Possible but uses ?: (as an if)
}
*/
