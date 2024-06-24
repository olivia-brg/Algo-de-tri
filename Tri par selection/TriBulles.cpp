#include "TriBulles.h"

void triBulles(int nouveauTableau[], int taille) {
    for (int i = taille - 1; i >= 1; i--) {

        int finit = true;

        for (int j = 0; j < i; j++) {
            if (nouveauTableau[j] > nouveauTableau[j + 1]) {
                int temp = nouveauTableau[j];
                nouveauTableau[j] = nouveauTableau[j + 1];
                nouveauTableau[j + 1] = temp;
                finit = false;
            }
        }
        if (finit) {
            break;
        }
    }
}