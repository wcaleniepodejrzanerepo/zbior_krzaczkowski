#include <stdio.h>

int** nowa_tab_2d(int n, int m)
{
    int** tab = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)
    {
        tab[i] = (int*)malloc(m * sizeof(int));
    }
    return tab;
}

void wypisz(int** tab, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%i ", tab[i][j]);
        }
        printf("\n");
    }
}

void transpozycja(int** tab, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int t = tab[i][j];
            tab[i][j] = tab[j][i];
            tab[j][i] = t;
        }
    }
}

int main(){
    int** tab = nowa_tab_2d(3, 3);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tab[i][j] = i*i + j;
        }
    }
    wypisz(tab, 3, 3);
    transpozycja(tab, 3);
    printf("----------------\n");
    wypisz(tab, 3, 3);
}
