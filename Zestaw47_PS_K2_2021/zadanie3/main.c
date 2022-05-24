#include <stdio.h>
#include <stdlib.h>

void foo(int n,int m,int tab[n][m])
{
    int temp=0;
    if(m<2)
    {
        return 0;
    }
    int x;
    /*int t2 = tab[n-1];
    tab[n-1] = tab[0];
    tab[0] = t2;*/
    for(int i=0;i<m;i++)            ///zamiana wierszy (Pierwszego z ostatnim) :)
    {
        x=tab[n-1][i];
        tab[n-1][i]=tab[0][i];
        tab[0][i]= x;

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
    int tab[3][4] ={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    foo(3,4,tab);
    wypisanie_tablicy_2d(3,4,tab);

    return 0;
}
