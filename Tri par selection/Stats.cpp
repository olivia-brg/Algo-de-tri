#include <iostream>
#include "Stats.h"

int stats(int arr[], int length)
{
    //création de la variable qui va stocké l'élément le plus grand et celle qui stocke son index
    int biggest = 0;
    int BigIndex = 0;

    int total = 0;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] > biggest) {
            biggest = arr[i];
            BigIndex = i;
        };
        total += arr[i];
    };

    int moyenne = total / length;

    printf("Element le plus grand : % d\nIndex de celui-ci : %d\n", biggest, BigIndex);


    return 0;
};
