#include "TriInsertion.h"

void triInsertion(int nouveauTableau[], int taille) {
    for (int i = 1; i <= taille - 1; i++) {

        int x = nouveauTableau[i];
        int j = i;

        while ((j > 0) && (nouveauTableau[j - 1] > x)) {
            nouveauTableau[j] = nouveauTableau[j - 1];
            j--;
        }
        nouveauTableau[j] = x;
    }
}