#include <stdio.h>

/* Déclaration de la fonction */
int factorial(int n);

int main() {
    /* Code de test */
    printf("0! = %i\n", factorial(0));
    printf("1! = %i\n", factorial(1));
    printf("3! = %i\n", factorial(3));
    printf("5! = %i\n", factorial(5));
    // printf("-1! = %i\n", factorial(-1));  // NE PAS FAIRE : cela causerait une erreur de segmentation
}

/* Définition de la fonction factorial */
int factorial(int n) {
    if (n < 0) {
        printf("Erreur : la factorielle n'est pas définie pour les entiers négatifs.\n");
        return -1;  // Valeur spéciale pour signaler une erreur
    } else if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
