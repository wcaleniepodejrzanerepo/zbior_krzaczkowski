#include <stdio.h>

int*** nowa_tab_3d(int n, int m, int k)
{
    int*** tab = (int***)malloc(n * sizeof(int**));
    for (int i = 0; i < n; i++)
    {
        tab[i] = (int**)malloc(m * sizeof(int*));
        for (int j = 0; j < m; j++)
        {
            tab[i][j] = (int*)malloc(k * sizeof(int));
        }
    }
    return tab;
}

void zwolnij_tab(int*** tab, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            free(tab[i][j]);
        }
        free(tab[i]);
    }
    free(tab);
}

int main(){
    int*** tab = nowa_tab_3d(3, 3, 3);
    tab[2][2][2] = 3;
    printf("%i\n", tab[2][2][2]);
    zwolnij_tab(tab, 3, 3);
}