#include <stdio.h>

union Liczba{
    int i;
    double r;
};

struct Dane{
    int tp;
    union Liczba zaw;
};

struct Dane funkcja(){
    struct Dane dane;
    printf("Typ danych [c/w]: ");
    dane.tp = getchar();
    dane.tp = (dane.tp == 'w' ? 1 : 0);
    printf("Podaj liczbe: ");
    if (dane.tp == 0){
        scanf("%i", &dane.zaw.i);
    } else {
        scanf("%lf", &dane.zaw.r);
    }
    return dane;
}

int main(){
    struct Dane dane = funkcja();
    printf("typ: %i\n liczba: ", dane.tp);
    if (dane.tp == 0){
        printf("%i\n", dane.zaw.i);
    } else {
        printf("%f\n", dane.zaw.r);
    }
    return 0;
}