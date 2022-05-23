#include <stdio.h>
#include <stdlib.h>

// zadanie 6.2.1

int ** tab2(int n, int m)
{
    int ** tab = malloc(n * sizeof(int*));
    for(int i = 0; i < n; i++)
    {
        tab[i] = malloc(m * sizeof(int));
    }
    return tab;
}

int main()
{
    int ** bomba = tab2(5, 6);
    bomba[1][2] = 9;
    printf("%d", *(*(bomba + 1) + 2));
    return 0;
}
