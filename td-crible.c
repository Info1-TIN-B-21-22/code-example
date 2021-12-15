#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define MAX 200

int td_crible(){

    int array[MAX];

    for (int i = 0; i < MAX; i++)
        array[i] = i + 1;

    // Crible d'Ératosthène
    const int max = sqrt(MAX);
    for (int nbr = 2; nbr < max; nbr++){
        if( array[nbr-1] < 0 )
            continue;
        for (int i = nbr*2; i <= MAX; i+=nbr)
            array[i-1] = -1; // Discard number
    }

    int count = 0;
    for (int i = 0; i < MAX; i++)
        if (array[i] != -1) // Ignore discarded
            printf("%5d%c", array[i], ++count % 10 == 0 ? '\n' : ' ');

    printf("\n");
    return 0;
}