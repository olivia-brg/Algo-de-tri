#include <stdio.h>

#include "ChoixAlgo2.h"
#include "RechercheDichotomique.h"


int choixAlgo2 (int Tableau[], int taille) {

    int choix;
    printf("\n=== Choix de L'algo ===\n1. Recherche Dichotomique\n0. QUITTER\n\nVotre choix ?\n");

    do {
        // Choix de l'algo, vérification si l'entrée est un entier
        if (scanf_s("%d", &choix) != 1) {
            printf("Choix non valide. Veuillez entrer un nombre entre 1 et 4.\n");
            while (getchar() != '\n');
            continue;
        }
        // Vérification si l'entier est dans la plage de choix
        if (choix < 0 || choix > 1) {
            printf("Choix non valide. Veuillez entrer un nombre entre 1 et 4.\n");
        }
    } while (choix < 0 || choix > 1);

    // Appel de la fonction choisie
    if (choix >= 0 && choix <= 1) {

        int resultat = 404;
        int cible;

        switch (choix)
        {
        case 0:
            break;
        case 1:
            printf("Vous avez choisi la recherche dichotomique\n\n");
            do {
                printf("De quel nombre souhaitez-vous l'index? : ");
                scanf_s("%d", &cible);
                resultat = rechercheDichotomique(Tableau, taille, cible);
            } while (resultat == 404);
            printf("Trouve a l'index %d\n", resultat);
            break;
        default:
            printf("Erreur #01, veuillez contacter le support technique.");
            break;
        }
    }
    else {
        printf("Erreur #02, veuillez contacter le support technique.\n");
    }
    return 0;
}