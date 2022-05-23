#include <stdio.h>

int suma(int n, int m, int tab[n][m])
{
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            suma += tab[i][j];
        }
    }
    return suma;
}

int main(){
    int tab[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tab[i][j] = i + j;
        }
    }
    printf("%i\n", suma(3, 3, tab));
}
