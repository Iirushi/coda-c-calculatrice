#include <stdlib.h>
#include <stdio.h>

int main() {
    // Déclaration des variables
    int nombre1, nombre2;
    char operateur;

    // Dire bonjour à l'utilisateur
    printf("Bonjour !\n");

    // Demander à l'utilisateur de choisir un opérateur
    printf("Veuillez choisir un opérateur parmi la liste suivante (+, -, *, /, %%): ");
    scanf(" %c", &operateur);

    // Demander à l'utilisateur de choisir un premier nombre
    printf("Veuillez entrer un premier nombre: ");
    scanf("%d", &nombre1);

    // Demander à l'utilisateur de choisir un second nombre
    printf("Veuillez entrer un second nombre: ");
    scanf("%d", &nombre2);

    // Vérifier la valeur de l'opérateur et effectuer l'opération correspondante
    if (operateur == '+') {
        int resultat = nombre1 + nombre2;
        printf("Résultat de l'addition: %d\n", resultat);
    } else if (operateur == '-') {
        int resultat = nombre1 - nombre2;
        printf("Résultat de la soustraction: %d\n", resultat);
    } else if (operateur == '*') {
        int resultat = nombre1 * nombre2;
        printf("Résultat de la multiplication: %d\n", resultat);
    } else if (operateur == '/') {
        if (nombre2 == 0) {
            printf("Il est impossible de diviser par 0.\n");
        } else {
            float resultat = (float)nombre1 / nombre2;
            printf("Résultat de la division: %.2f\n", resultat);
        }
    } else if (operateur == '%') {
        if (nombre2 == 0) {
            printf("Il est impossible de diviser par 0.\n");
        } else {
            int resultat = nombre1 % nombre2;
            printf("Résultat du modulo: %d\n", resultat);
        }
    } else {
        printf("L'opérateur n'est pas reconnu.\n");
    }

    // Renvoie le code de fin 0
    return 0;
}