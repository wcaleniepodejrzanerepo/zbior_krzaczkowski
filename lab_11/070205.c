#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// zadanie 7.2.5

typedef struct punkt10
{
    float wsp[10];
} punkt10;

void przepisz(punkt10 tab1[], punkt10 tab2[], int n)
{
    for(int i = 0; i < n; i++)
    {
        tab2[i] = tab1[i];
    }
}

int main()
{
    punkt10 tab1[2] = {{{2, 3, 4, 5, 6, 7, 8, 9, 10, 11}}, {{1, 2, 3, 5, 4, 5, 7, 8, 9, 10}}};
    punkt10 tab2[2];

    // 7.2.4
    przepisz(tab1, tab2, 2);
    for(int i = 0; i < 2; i++)
    {
        printf("tab[%d] = (", i);
        for(int j = 0; j < 10; j++)
        {
            printf("%.2f", tab2[i].wsp[j]);
            if(j != 9)
                printf(",\t", tab2[i].wsp[j]);
        }
        printf(")\n");
    }

    return 0;
}
