#include <iostream>
#include <stdio.h>

#include "CreerTableau.h"
#include "ChoixAlgo.h"
#include "ChoixAlgo2.h"
#include "Stats.h"

// Déclaration des variables
int choix, taille, total, moyenne;
int stop = true;


int main()
{
    // Demande à l'utilisateur de définir la taille du tableau
    printf("Entrez la taille du tableau :");
    scanf_s("%d", &taille);

    // Appel de la fonction pour créer le tableau
    int *nouveauTableau = creerTableau(taille);

    // Affiche les éléments du tableau
    printf("Votre tableau : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", nouveauTableau[i]);
    }

    printf("\n\n");

    stats(nouveauTableau, taille);
    for (int i = 0; i < taille - 1; i++) {
        total += nouveauTableau[i];
    }
    moyenne = total / taille;
    printf("Moyenne des elements : %d\n", moyenne);

    

    int notDone = choixAlgo(nouveauTableau, taille);
    if (!notDone) {
        choixAlgo2(nouveauTableau, taille);
    }

    free(nouveauTableau);

    return 0;
}