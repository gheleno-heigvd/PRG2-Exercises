/*
-----------------------------------------------------------------------------------
Filename : Ex106.c
Author(s) : Gonçalo Heleno
Creation date : 12/03/2022
Description : Write a function to set the bit of a number (n) at a certain
 position (pos).
Note(s) : None
Compilator : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <stdlib.h>
#include <stdio.h>

int* setBit(unsigned short pos, unsigned short bitValue, int* n) {
   // Create a mask with a bit at 1 at pos
   int mask = 1u << pos;
   // Obtain the value from the pointer
   int value = *n;
   // Zero the bit at pos using bit by bit intersection between n and the inverse of the mask
   value = value & ~mask;
   // Create new with the intended bit
   int mask_new_bit = bitValue << pos;
   // Change the said bit on the value
   value = value | mask_new_bit;
   // Return the new value
   return &value;
}

int main(void) {
   int n = 1;
   int new_n = *setBit(1, 1, &n);
   printf("%d\n", new_n);
   return EXIT_SUCCESS;
}
