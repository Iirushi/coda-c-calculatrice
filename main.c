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

    
    if (operateur == '+') {
        printf("addition\n");
    } else if (operateur == '-') {
        printf("soustraction\n");
    } else if (operateur == '*') {
        printf("multiplication\n");
    } else if (operateur == '/') {
        printf("division\n");
    } else if (operateur == '%') {
        printf("modulo\n");
    } else {
        printf("L'opérateur n'est pas reconnu.\n");
    }

 
    return 0;
}