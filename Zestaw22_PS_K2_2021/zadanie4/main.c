#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Ksiazka{
    char *tytul;
    int rok;
    float ocena;
};

int dlugosc(int n, struct Ksiazka tab[n])
{
    int x,y = 0;
    for(int i=0;i<n;i++)
    {
        if(y < tab[i].ocena)
        {
            x = i;
            y = tab[i].ocena;
        }
    }
    return strlen(tab[x].tytul);
}

int main()
{
    struct Ksiazka tab[2];
    tab[0].tytul = "Harry Potter";
    tab[0].rok = 2001;
    tab[0].ocena = 5.9;

    tab[1].tytul = "Hobbit";
    tab[1].rok = 2005;
    tab[1].ocena = 4.5;

    printf("%s %d ocena: %.2f\n",tab[0].tytul,tab[0].rok, tab[0].ocena);
    printf("%d\n",dlugosc(2,tab));

    return 0;
}
