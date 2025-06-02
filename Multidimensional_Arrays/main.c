#include <stdio.h>

int main() {
    int grades[2][5];  // Déclaration du tableau 2D
    float average;
    int i, j;

    // Initialisation des notes
    grades[0][0] = 80;
    grades[0][1] = 70;
    grades[0][2] = 65;
    grades[0][3] = 89;
    grades[0][4] = 90;

    grades[1][0] = 85;
    grades[1][1] = 80;
    grades[1][2] = 80;
    grades[1][3] = 82;
    grades[1][4] = 87;

    // Boucle sur les étudiants (2 étudiants)
    for (i = 0; i < 2; i++) {
        average = 0;
        // Addition des 5 notes pour l'étudiant i
        for (j = 0; j < 5; j++) {
            average += grades[i][j];
        }

        // Calcul de la moyenne
        average /= 5.0;

        // Affichage de la moyenne
        printf("The average marks obtained by student %d is: %.2f\n", i + 1, average);
    }

    return 0;
}
