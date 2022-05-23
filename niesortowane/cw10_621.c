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

int main(){
    int** tab = nowa_tab_2d(3, 3);
    tab[2][2] = 3;
    printf("%i\n", tab[2][2]);
}