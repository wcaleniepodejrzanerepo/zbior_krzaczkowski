#include <stdio.h>
#include <stdlib.h>

float foo(int n,int m,int tab[n][m])
{
    float suma,licznik = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(j%2==1 && i%2==1)
            {
                suma+=tab[i][j];
                licznik++;
            }
        }
    }
    return suma/licznik;

}

int main()
{
    int tab[5][3]={{1,2,3,4,5},
                   {1,2,3,4,5},
                   {1,2,3,4,5}};
    printf("%.2f\n",foo(5, 3,tab));
    return 0;
}
