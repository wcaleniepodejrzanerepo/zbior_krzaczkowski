#include <stdio.h>

double* funkcja(int n){
    return (double*)malloc(sizeof(double)*n);
}

int main(){
    double* a = funkcja(10);
    a[9] = 0.2343;
    printf("%f", a[9]);
}
