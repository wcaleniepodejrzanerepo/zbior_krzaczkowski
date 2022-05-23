#include <stdio.h>
#include <stdlib.h>

// zadanie 6.2.25

int ** tab2(int n, int m)
{
    int ** tab = malloc(n * sizeof(int*));
    for(int i = 0; i < n; i++)
    {
        tab[i] = malloc(m * sizeof(int));
    }
    return tab;
}

void tab_free(int **tab, int n)
{
    for(int i = 0; i < n; i++)
        free(tab[i]);
    free(tab);
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

int ** transp(int **tab, int n, int m)
{
    int **t_temp = tab2(m, n);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            t_temp[j][i] = tab[i][j];
    tab_free(tab, n);
    return t_temp;
}

int main()
{
    int ** bomba = tab2(3, 4);
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
            bomba[i][j] = i + j*j;
    }

    wypisz(bomba, 3, 4);
    printf("\n");

    bomba = transp(bomba, 3, 4);

    wypisz(bomba, 4, 3);
    return 0;
}
