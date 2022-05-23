#include <stdio.h>

int** nowa_tab_trojkatna(int n)
{
    int** tab = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)
    {
        tab[i] = (int*)malloc((i + 1) * sizeof(int));   //o takie coś chodziło?
    }
    return tab;
}

int main(){
    int** tab = nowa_tab_trojkatna(3);
    for(int i = 0; i != 3; i++){
        tab[i][i] = i;
    }
    printf("%i\n", tab[2][2]);
}