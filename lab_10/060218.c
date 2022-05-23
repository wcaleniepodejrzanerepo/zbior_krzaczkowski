#include <stdio.h>
#include <stdlib.h>

// zadanie 6.2.18

int ** tab2(int n, int m)
{
    int ** tab = malloc(n * sizeof(int*));
    for(int i = 0; i < n; i++)
    {
        tab[i] = malloc(m * sizeof(int));
    }
    return tab;
}

void wypisz(int **tab, int n, int m)
{
    printf("tab:\n\n");
    for(int i = 0; i < n; i++)
    {
        printf("| ");
        for(int j = 0; j < m; j++)
            printf("%d\t| ", tab[i][j]);
        printf("\n");
    }
}

int main()
{
    int ** bomba = tab2(3, 4);
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
            bomba[i][j] = i + j;
    }

    wypisz(bomba, 3, 4);
    return 0;
}
