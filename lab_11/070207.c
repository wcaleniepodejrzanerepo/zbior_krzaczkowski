#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// zadanie 7.2.7

typedef struct zesp
{
    double re, im;
} zesp;

zesp dodaj(zesp z1, zesp z2)
{
    zesp w = {z1.re + z2.re, z1.im + z2.im};
    return w;
}

void wypisz_zesp(zesp z)
{
    printf("z = %.2lf ", z.re);
    if(z.im > 0)
        printf("+ %.2lfi", fabs(z.im));
    else if(z.im < 0)
        printf("- %.2lfi", fabs(z.im));
    printf("\n");
}

// zadanie 7.2.4

int main()
{
    zesp z1 = {2, 3};
    zesp z2 = {7, -9};

    wypisz_zesp(z1);
    wypisz_zesp(z2);
    wypisz_zesp(dodaj(z1, z2));

    return 0;
}
