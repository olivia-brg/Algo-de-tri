#include "RechercheDichotomique.h"
#include <stdio.h>

int rechercheDichotomique(int arr[], int taille, int target) {
    int start = 0;
    int end = taille - 1;
    int guessIndex;

    while (start <= end) {
        guessIndex = start + (end - start) / 2;

        if (arr[guessIndex] == target) {
            return guessIndex;
        }
        else if (arr[guessIndex] > target) {
            end = guessIndex - 1;
        }
        else {
            start = guessIndex + 1;
        }
    }

    printf("Hors du tableau\n");
    return 404;
}