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
   // Zero the bit at pos using bit by bit intersection between n and the inverse of the mask
   *n = *n & ~mask;
   // Create new mask with the intended bit
   int mask_new_bit = bitValue << pos;
   // Change the said bit on the value
   *n = *n | mask_new_bit;
   // Return the new value
   return n;
}

int main(void) {
   int n = 1;
   int new_n = *setBit(1, 1, &n);
   printf("%d\n", new_n);
   return EXIT_SUCCESS;
}

/*
// Proposed solution by the teacher

// (Preprocessor headers missing here...)

int* setBit(unsigned short pos, unsigned short bitValue, int* n) {
   assert(pos < INT_SIZE);
   assert(bitValue == 0 || bitValue == 1)
   const int MASK_1 = 1 << pos,
             MARK_2 = bitValue << pos;
   *n = (*n & ~MASK_1) | MASK_2;

   // Option 2
   // const int MASK = 1 << pos;
   // *n ^= (-bitValue ^ *n & MASK;

   // Option 3
   // const int MASK = 1 << pos;
   // *n = bitValue ? *n | MASK : *n & ~MASK;   // Does not comply with the problem, uses a ?:
}

// Pormenores importantes:
// - Em C não temos a noção de referência, apenas a noção de passagem por endereço
//   de memória, por isso passamos o valor que queremos modificar por um ponteiro.
// - Visto que obtemos o valor a mudar através de um endereço, porquê usar um outro
//   endereço de retorno para enviar o novo valor? Isto faz-se frequentemente, devido
//   à flexibilidade disto. A vantagem disto é que assim podemos usar a função seja
//   como uma função void, usando o valor de n (modo procedural) ou que no caso de
//   reenviarmos o valor de retorno (modo função), podemos obter o valor para
//   encadear com uma nova função que chama esta, por exemplo o a printf.

int main(void) {
   int n = 0;
   printf("n = %d\n", n);
   printf("n = %d\n", *setBit(0, 1, &n));  // Note the * to dereference the address returned by the function an show the value instead.
   printf("n = %d\n", *setBit(0, 0, &n));
   printf("n = %d\n", *setBit(1, 1, &n));

   for (ushort pos = 0; pos < INT_SIZE; ++pos) {   // This will turn every bit to 1, we will obtain INT_MAX.
      setBit(pos, 1, &n);
   printf("n = %d\n", n);

   int m = -1;
   printf("m = %d\n", *setBit(31, 0, &m));   // This will change the sign bit and we will obtain a positive number.

   return EXIT_SUCCESS;
}
*/
