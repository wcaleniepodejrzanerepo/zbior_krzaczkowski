#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// zadanie 7.2.9

typedef struct lista
{
    int liczba;
    struct lista * next;
} lista;

// zadanie 7.2.10

typedef union super_int
{
    int n1;
    unsigned int n2;
} super_int;

// zadanie 7.2.11

typedef union liczba
{
    int a;
    float b;
} liczba;

typedef struct dane
{
    int tp;
    liczba zaw;
} dane;

dane input()
{
    dane temp;
    printf("liczba:\n0. calkowita\n1. wymierna\n\nwybierz typ: ");
    scanf("%d", &temp.tp);
    if(temp.tp == 0)
    {
        printf("podaj liczbe calkowita: ");
        scanf("%d", &temp.zaw.a);
    }
    else
    {
        printf("podaj liczbe wymierna: ");
        scanf("%f", &temp.zaw.b);
    }
    return temp;
}

void read(dane n)
{
    if(n.tp == 0)
        printf("liczba calkowita: %d\n", n.zaw.a);
    else
        printf("liczba wymierna: %f\n", n.zaw.b);
}

// zadanie 7.2.15

enum zwierzak {pies, kot, chomik, nemo};

int main()
{
    dane w = input();
    read(w);
    printf("%i", chomik);
    return 0;
}
