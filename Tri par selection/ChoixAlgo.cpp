#include <iostream>
#include <stdio.h>

#include "TriBulles.h"
#include "TriInsertion.h"
#include "TriRapide.h"
#include "TriSelection.h"
#include "ChoixAlgo.h"

int choixAlgo(int Tableau[], int taille) {

    int choix;
    printf("\n=== Choix du tri ===\n1. Tri a bulles\n2. Tri par insertion\n3. Tri par selection\n4. Tri rapide\n0. QUITTER\n\nVotre choix ?\n");

    do {
        // Choix de l'algo, vérification si l'entrée est un entier
        if (scanf_s("%d", &choix) != 1) {
            printf("Choix non valide. Veuillez entrer un nombre entre 1 et 4.\n");
            while (getchar() != '\n');
            continue;
        }
        // Vérification si l'entier est dans la plage de choix
        if (choix < 0 || choix > 4) {
            printf("Choix non valide. Veuillez entrer un nombre entre 1 et 4.\n");
        }
    } while (choix < 0 || choix > 4);

    // Appel de la fonction choisie
    if (choix >= 0 && choix <= 4) {

        switch (choix)
        {
        case 0:
            return 1;
            break;
        case 1:
            printf("Vous avez choisi le tri a bulles");
            triBulles(Tableau, taille);
            break;
        case 2:
            printf("Vous avez choisi le tri par insertion");
            triInsertion(Tableau, taille);
            break;
        case 3:
            printf("Vous avez choisi le tri par selection");
            triSelection(Tableau, taille);
            break;
        case 4:
            printf("Vous avez choisi le tri rapide");
            triRapide(Tableau, 0, taille - 1);
            break;
        default:
            printf("Erreur #01, veuillez contacter le support technique.");
            break;
        }
    }
    else {
        printf("Erreur #02, veuillez contacter le support technique.");
    }
    if (choix >= 1 && choix <= 4) {
        printf("\nTableau trie :");
        for (int i = 0; i < taille; i++) {
            printf("%d ", Tableau[i]);
        }
        printf("\n");
    }
    return 0;
}