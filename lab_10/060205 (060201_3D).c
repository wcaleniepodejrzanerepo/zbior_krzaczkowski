#include <stdio.h>
#include <stdlib.h>

// zadanie 6.2.5

int *** tab3(int n, int m, int p)
{
    int *** tab = malloc(n * sizeof(int**));
    for(int i = 0; i < n; i++)
    {
        tab[i] = malloc(m * sizeof(int*));
        for(int j = 0; j < m; j++)
        {
            tab[i][j] = malloc(p * sizeof(int));
        }
    }
    return tab;
}

int main()
{
    int *** bomba = tab3(5, 6, 3);
    *(*(*(bomba + 1) + 2) + 2) = 25;
    printf("%d", *(*(*(bomba + 1) + 2) + 2));
    return 0;
}
