#include <stdlib.h>
#include <stdio.h>

#define WINDOWS
//#define MAC
//#define LINUX

int main(void) {
//    #if 0   
      #ifdef WINDOWS // écriture 1 (façons d'écrire if defined)
         printf("Compilation pour Windows\n");
      #elif defined MAC // écriture 2
         printf("Compilation pour MAC\n");
      #elif defined(LINUX) // écriture 3
         printf("Compilation pour Linux\n"); 
      #else
         #error No operating system   // Repara bem nesta sintaxe de erro, neste
                                      // caso o préprocessador não vai sequer
                                      // funcionar!
      #endif
//    #endif

// O if 0 e endif que estão comentados, servem para nós um dia eliminarmos este
// bloco de código, caso queiramos. Basicamente isto tem um efeito de comentar este
// bloco com um /* */.

   return EXIT_SUCCESS;
} 
