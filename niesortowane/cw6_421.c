#include <stdio.h>

void funkcja(int n, int* tab){
    for (int x = n; x-->0;){
        //a)
        tab[x] = 0;
        //b)
        tab[x] = x;
        //c)
        tab[x] *= 2;
        //d)
        tab[x] = tab[x] < 0 ? tab[x] * -1 : tab[x];
    }
}


int main(){

    int t[10] = { 234, 453 ,52,34 ,325 ,234 ,23,4, 32, 21};
    funkcja(10, t);
    for (int x = 0; x != 10; x++){
        printf("%i ", t[x]);
    }
}
