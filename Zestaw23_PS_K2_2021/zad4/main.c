#include <stdio.h>
#include <stdlib.h>

typedef struct Osoba
{
    char *imie;
    unsigned int wiek;
    float wzrost;
}tab[2];

float NajwiekszyWzrost(int n, struct Osoba tab[])
{
    float max = 0.0;
    int licznik = -1;
    for(int i = 0; i<n;i++)
        if(max<tab[i].wzrost)
        {
            max = tab[i].wzrost;
            licznik++;
        }
    return tab[licznik].wzrost;
}

int main()
{
    struct Osoba tab[2];
    tab[0].imie = "Andrzej";
    tab[0].wiek = 21;
    tab[0].wzrost = 1.89;
    tab[1].imie = "Micha³";
    tab[1].wiek = 20;
    tab[1].wzrost = 1.80;

    printf("%.2f\n",NajwiekszyWzrost(2,tab));
    return 0;
}
