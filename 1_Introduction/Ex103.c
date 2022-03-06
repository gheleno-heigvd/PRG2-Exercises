/*
-----------------------------------------------------------------------------------
Filename : Ex103.c
Author(s) : Gonçalo Heleno
Creation date : 06/03/2022
Description : Answer the questions
Note(s) : None
Compilator : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

// #define ABS(X) (((X) > 0) ? (X) : (-X))
#define ABS(value)          \
int absolute(int value) {   \
   int n = value;           \
   n > 0 ? n : -n;          \
}

int main(void) {
   int n;

   printf("1. %d\n", ABS(2));
   printf("2. %d\n", ABS(-2));
   printf("3. %d\n", ABS('A'));

   n = -2;
   printf("4. %d\n", ABS(n+1));

   n = -2;
   printf("5. %d", ABS(n++)); printf(" %d\n", n);

   n = -2;
   printf("6. %d", ABS(++n)); printf(" %d\n", n);

   n = -2;
   printf("7. %d", abs(++n)); printf(" %d\n", n);

   return EXIT_SUCCESS;
}

/*

1. What will be the output of this program?
   1. 2
   2. 2
   3. 65
   4. 3
   5. 1 0
   6. 0 0
   7. 1 -1

2. Why is this program problematic?
   Because using the macro as it is, it translates the function as is while replacing
   all values inside by the given values. This includes expressions as ++n, so
   ABS(++n) would translate to (((++n) > 0) ? (++n) : (-++n)) which does two
   incrementations.

3. Could we rewrite the macro ABS (without using the function abs from stdlib) in
   order to avoid the problems from point 2?
   
   We could rewrite it as a function.
   #define ABS(value) \
   int absolute(int value) {
      int n = value;
      n > 0 ? n : -n;
   }
   This won't resolve the issue where 'A' is read as 65, but I think this a
   reasonable behaviour. But still it would not be usable, as we cannot call this
   function inside the printf.
   So, in conclusion, I don't think we can resolve this issue but maybe I'm wrong...

*/
