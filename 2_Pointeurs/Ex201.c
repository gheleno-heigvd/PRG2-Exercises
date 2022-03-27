/*
-----------------------------------------------------------------------------------
Filename : Ex201.c
Author(s) : Gonçalo Heleno
Creation date : 27/03/2022
Description : Write a C program that:
 - Declares a variable n of type int and value 1.
 - Declares a pointer to said variable.
 - Prints the value of the object pointed by n.
 - Prints the address stored on the pointer.
 - Prints the address of the pointer itself.
Note(s) : None
Compilator : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <stdlib.h>
#include <stdio.h>

int main(void) {
   int n = 1;
   int* ptr = &n;

   printf("\n");
   printf("Value stored in n     = %d\n", n);
   printf("Value stored in ptr   = %d\n", *ptr);
   printf("Address stored in ptr = %p\n", (void*) ptr);
   printf("Address of ptr itself = %p\n", (void*) &ptr);

   return EXIT_SUCCESS;
}