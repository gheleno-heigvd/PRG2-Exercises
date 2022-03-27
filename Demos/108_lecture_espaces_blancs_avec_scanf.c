#include <stdlib.h>
#include <stdio.h>

int main(void) {

   char chaine[100];   

   printf("Entrez votre nom et votre prenom > ");
//   scanf("%s", chaine); // les espaces blancs initiaux sont sautés... mais la lecture s'interrompt
                        // ensuite au premier espace blanc rencontré
   
   scanf(" %99[^\n]", chaine); // Les espaces blancs initiaux sont sautés
                               // on lit tous les caractères initiaux (mais au plus 99 caract)
                               // autres que \n
                               // Corollaire : permet de lire une ligne de texte contenant
                               // des espaces blancs... ce que ne permet pas scanf ("%s", chaine);
                               //
                               // Aqui metemos 99 caractéres e não 100 porque precisamos
                               // sempre de ter em conta que no fim teremos o caractér \0 por defeito
                               // para o qual teremos de ter espaço.
                               //
                               // Repara que como metemos um espaço antes do %99, isso quer
                               // dizer para ignorar todos os espaços antes do primeiro
                               // caractér válido.
   
   printf("|%s|\n", chaine);   
   
   return EXIT_SUCCESS;
}

