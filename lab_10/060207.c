#include <stdio.h>
#include <stdlib.h>

// zadanie 6.2.7

int ** troj(int n)
{
    int ** tab = malloc(n * sizeof(int*));
    for(int i = 0; i < n; i++)
    {
        tab[i] = malloc((i + 1) * sizeof(int));
    }
    return tab;
}

int main()
{
    int ** bomba = troj(5);
    bomba[2][4] = 7;
    printf("%d", *(*(bomba + 2) + 4));
    return 0;
}
