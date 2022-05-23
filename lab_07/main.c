#include <stdio.h>
#include <stdlib.h>

// zadanie 4.2.14

double *tworz(int n)
{
    return malloc(n*sizeof(double));
}

// zadanie 4.2.16

void tab_free(double *tab)
{
    free(tab);
}

// zadanie 4.2.17

double *kopia(int n, double tab[])
{
    double *w = malloc(n*sizeof(double));
    for(int i = 0; i < n; i++)
        w[i] = tab[i];
    return w;
}

// zadanie 4.2.19

int *niezera(int n, int tab[]){
    int licz = 0;
    int *w = malloc(sizeof(int));
    for(int i = 0; i < n; i++){
        if(tab[i] != 0){
            w[licz] = tab[i];
            licz++;
            w = realloc(w, licz*sizeof(int));
        }
    }
    return w;
}

int main()
{
    // 4.2.14
    double *tab = tworz(5);
    tab[0] = 5;
    tab[1] = 2;
    tab[2] = 9;
    tab[3] = 2;
    tab[4] = 1;
    for(int i = 0; i < 5; i++)
        printf("tab1[%d] = %.2lf\n", i, tab[i]);

    // 4.2.17
    double *tab2 = kopia(5, tab);
    for(int i = 0; i < 5; i++)
        printf("tab2[%d] = %.2lf\n", i, tab2[i]);

    // 4.2.16
    tab_free(tab); // w funkcji jest samo free()
    for(int i = 0; i < 5; i++)
        printf("tab1[%d] = %.2lf\n", i, tab[i]);
    if(tab == NULL) // nie mam tutaj pojecia dlaczego free nie zwalnia pamieci albo moze to zly warunek sprawdzajacy?
        printf("Pamiec zostala zwolniona.\n");
    else
        printf("Pamiec nie jest zwolniona.\n");

    // 4.2.19
    int tab3[] = {5, 2, 0, 0, 7, 4};
    int *tab4 = niezera(6, tab3);
    for(int i = 0; i < 4; i++)
        printf("tab4[%d] = %d\n", i, tab4[i]);

    return 0;
}
