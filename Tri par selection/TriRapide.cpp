#include "TriRapide.h"
#include "Permuter.h"

void triRapide(int nouveauTableau[], int first, int last) {

    int pivot, i, j;

    if (first < last) {
        pivot = first;
        i = first;
        j = last;

        while (i < j) {

            while ((nouveauTableau[i] <= nouveauTableau[pivot]) && (i < last))
                i++;

            while (nouveauTableau[j] > nouveauTableau[pivot])
                j--;

            if (i < j) {
                permuter(&nouveauTableau[i], &nouveauTableau[j]);
            }
        }
        permuter(&nouveauTableau[pivot], &nouveauTableau[j]);
        triRapide(nouveauTableau, first, j - 1);
        triRapide(nouveauTableau, j + 1, last);
    }
}