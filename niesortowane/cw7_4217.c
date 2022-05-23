#include <stdio.h>

double* funkcja(int n, double* tab){
    double* r = (double*)malloc(n*sizeof(double));
    for (int x = n; x-->0;){
        r[x] = tab[x];
    }
    return r;
}

int main(){
    double a[] = {2.453, 23.53, 4.342};
    int n = 3;

    double* b = funkcja(n,a);
    for (int x = 0; x != n; x++){
        printf("%f\n", b[x]);
    }
}
