#include <stdlib.h>
#include <stdio.h>

#define MAX_SIZE 10

void clear_stdin(void); // /!\ Ne fonctionne que si stdin n'est pas vide

int main(void) {

   char chaine1[MAX_SIZE + 1] = "";

// A tester avec " 123abc"
   printf("Entrez une chaine (max %d caract.) > ", MAX_SIZE);
   scanf("%[0123456789]", chaine1); // Les espaces blancs initiaux ne sont PAS sautés           
   printf("|%s|\n", chaine1); // affichera une chaîne vide
   
   clear_stdin();

   char chaine2[MAX_SIZE + 1] = "";
   printf("Entrez une chaine (max %d caract.) > ", MAX_SIZE);
   scanf(" %2[0123456789]", chaine2); // Attention l'espace devant % fait toute la différence!
                                      // Les espaces blancs initiaux sont sautés      
   printf("|%s|\n", chaine2); // affichera 12

   return EXIT_SUCCESS;   
}

// Função para limpar o buffer
// Tem de ser feito desta maneira porque o buffer é uma estrutura um
// bocado complicada...
void clear_stdin(void) {
   int c;
   do {
      c = getchar();
   } while (c != '\n' && c != EOF);   
}

// NB
// - avec scanf("%[ 0123456789]", chaine1); donnerait " 123"