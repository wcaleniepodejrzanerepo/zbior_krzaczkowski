#include <stdio.h>

struct zespolone {
    double re;
    double im;
};

struct zespolone dodaj(struct zespolone a, struct zespolone b){
    struct zespolone c;
    c.re = a.re + b.re;
    c.im = a.im + b.im;
    return c;
}

int main(){
    struct zespolone a = {1, 1};
    struct zespolone b = {2, 2};
    struct zespolone c = dodaj(a, b);
    printf("%f %f\n", c.re, c.im);
    return 0;
}