#include <stdio.h>
#include <stdlib.h>

int main(void) {
   double y;

   y = 0.1;
   printf("|%g|\n", y);
   printf("|%#g|\n", y);
   printf("|%f|\n", y);
   // cout << y << endl;   // You can uncomment this line if you use this code as C++
   printf("/n");

   y = 1.2345678;
   printf("|%g|\n", y);
   printf("|%#g|\n", y);
   printf("|%f|\n", y);
   // cout << y << endl;   // You can uncomment this line if you use this code as C++
   printf("/n");

   y = 0.00001;
   printf("|%g|\n", y);
   printf("|%#g|\n", y);
   printf("|%e|\n", y);   // Shows another zero
   // cout << y << endl;   // You can uncomment this line if you use this code as C++
   printf("/n");

   y = 1.2345678;
   printf("|%6.2g|\n", y);
   // Shows only 2 significant digits because it needs the rest to use for the
   // output.

   return EXIT_SUCCESS;

}

// Conclusions
// 1) cout behaves like printf using %g
// 2) %g and even %#g don't give the same number of decimal places that %e gives!
