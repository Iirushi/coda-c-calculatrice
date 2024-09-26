#include <stdlib.h>
#include <stdio.h>

int main() {
    
    int nombre1, nombre2;
    char operateur;

  
    printf("Bonjour !\n");

    
    printf("Veuillez choisir un opérateur parmi la liste suivante (+, -, *, /, %%): ");
    scanf(" %c", &operateur);

   
    printf("Veuillez entrer un premier nombre: ");
    scanf("%d", &nombre1);

   
    printf("Veuillez entrer un second nombre: ");
    scanf("%d", &nombre2);

   
    return 0;
}