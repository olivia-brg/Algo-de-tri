#include <stdio.h>
#include <stdlib.h>

#include "CreerTableau.h"

int valeur;

int* creerTableau(int taille) {
    int* tableau = (int*)malloc(taille * sizeof(int));

    // V�rifie si l'allocation de m�moire a r�ussi
    if (tableau == NULL) {
        printf("Erreur d'allocation de m�moire.\n");
        exit(EXIT_FAILURE);
        // return 1; // Autre mani�re de g�rer l'erreur
    }

    // Initialisation du tableau
    for (int i = 0; i < taille; i++) {
        printf("Entrez la valeurs n# %d: ", i + 1);
        scanf_s("%d", &valeur);
        tableau[i] = valeur;
    }
    printf("\n");

    return tableau; // Retourne le pointeur vers le tableau allou� dynamiquement
}
