#include <stdio.h>
#include <stdlib.h>

void foo(int n, int m, int tab[n][m])
{
    int x = 0;
    for(int i = 2; i<n; i+=2)
    {
        for(int j = 0;j<m/2;j++)
        {
            x = tab[i][j];
            tab[i][j] = tab[i][m-j-1];
            tab[i][m-j-1] = x;
        }
    }
}
void wypisanie_tablicy_2d(int n, int m, int tab[n][m])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d, ",tab[i][j] );
        }
        printf("\n");
    }
}

int main()
{
    int macierz[4][3] = {{2,3,-3},
    {1,4,7},
    {-3,-6,11},
    {-2,8,23}};
    foo(4,3,macierz);
    wypisanie_tablicy_2d(4,3,macierz);
    return 0;
}
