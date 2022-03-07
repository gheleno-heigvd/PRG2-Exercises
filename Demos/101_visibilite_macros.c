// The preprocessor doesn't obey normal scope rules.
// A macro defined inside a function definition isn't local to that function;
// it remains defined until the end of the file.

#include <stdlib.h>
#include <stdio.h>

void f(void) {
   printf("Dans f(void)\n");
   #define MAX(a,b) ((a) > (b) ? (a) : (b))
}
   
int main(void) {
   printf("MAX(3, 4) = %d\n", MAX(3, 4));
   return EXIT_SUCCESS;
}
