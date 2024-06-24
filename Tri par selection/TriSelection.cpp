#include "TriSelection.h"

void triSelection(int nouveauTableau[], int taille) {
    for (int i = 0; i <= taille - 2; i++) {
        int min = i;
        for (int j = i + 1; j < taille; j++) {
            if (nouveauTableau[j] < nouveauTableau[min]) {
                min = j;
            }
        }
        if (min != i) {
            int temp = nouveauTableau[i];
            nouveauTableau[i] = nouveauTableau[min];
            nouveauTableau[min] = temp;
        }
    }
}