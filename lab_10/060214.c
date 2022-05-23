#include <stdio.h>
#include <stdlib.h>

// zadanie 6.2.14

int *** tab3(int n, int m, int p)
{
    int *** tab = malloc(n * sizeof(int**));
    for(int i = 0; i < n; i++)
    {
        tab[i] = malloc(m * sizeof(int*));
        for(int j = 0; j < m; j++)
            tab[i][j] = malloc(p * sizeof(int));
    }
    return tab;
}

int suma(int ***tab)
{
    int w = 0;
    for(int i = 0; i < 100; i++)
        for(int j = 0; j < 100; j++)
            for(int k = 0; k < 100; k++)
                w += *(*(*(tab + i) + j) + k);
    return w;
}

int main()
{
    int ***bomba = tab3(100, 100, 100);
    for(int i = 0; i < 100; i++)
        for(int j = 0; j < 100; j++)
            for(int k = 0; k < 100; k++)
                *(*(*(bomba + i) + j) + k) = 1;

    *(*(*(bomba + 99) + 99) + 99) = -999999;

    printf("%d", suma(bomba));
    return 0;
}
