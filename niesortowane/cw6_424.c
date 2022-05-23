#include <math.h>
#include <stdio.h>

float sr_geometryczna(int n, unsigned int* tab){
    float s = 1;
    for (int x = n; n-->0;){
        s *= tab[x];
    }
    return pow(s, 1.0f/n);
}

int main(){
    int n = 5;
    unsigned int t[5] = {78, 56, 12, 78, 19};
    printf("%f", sr_geometryczna(n, t));
}
