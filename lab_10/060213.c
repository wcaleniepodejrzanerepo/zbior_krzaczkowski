#include <stdio.h>
#include <stdlib.h>

// zadanie 6.2.13

int suma(int n, int m, int tab[n][m])
{
    int w = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            w += tab[i][j];
    }
    return w;
}

int main()
{
    int bomba[2][3] = {{1, 2, 3},{4, 5, 6}};

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
            printf("tab[%d][%d] = %d\n", i, j, bomba[i][j]);
    }

    printf("%d", suma(2, 3, bomba));
    return 0;
}