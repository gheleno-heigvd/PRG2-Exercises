#include <stdio.h>

int main(void) {

   {   // Violation de constante
      const int X = 3;
      // X = 4; // impossible car X déclaré const
      int* ptr = &X; // warning: initialization discards 'const' qualifier from pointer target type
      *ptr = 4; // X est modifiable au travers de ptr !!!
      printf("X = %d\n", X); // X = 4
   }
   
   {
      const int X = 3;
      // X = 4; // impossible car X déclaré const
      const int* ptr = &X;
      // *ptr = 4; // impossible car ptr déclaré de type const int*
                   // error: assignment of read-only location '*ptr'
   }
   
}
