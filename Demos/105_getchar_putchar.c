#include <stdio.h>
#include <stdlib.h>

int main(void) {
   int c;
   printf("%s", "Enter the text of your choice: ");
   while ( (c = getchar()) != '\n' )
      putchar(c);
   return EXIT_SUCCESS;
}

/* Alternative
int main(void) {
   char c;

   // fputs needs the second parameter because this function writes to a flux,
   // it could even write to a file
   fputs("Enter the text of your choice: ", stdout);

   // An alternative to fputs is puts. This one is made to show text at the console,
   // but adds automatically an \n! Sometimes this could break things.
   // puts("Enter the text of your choice: ");

   while ( (c = (char)) getchar()) != '\n' )
      putchar(c);
   return EXIT_SUCCESS;
}
*/
