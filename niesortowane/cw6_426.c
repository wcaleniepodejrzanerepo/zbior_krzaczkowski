#include <stdio.h>

void funkcja(int n, int* tab1, int* tab2){
    //a)
    for (int x = n; x-->0;){
        tab2[x] = tab1[x];
    }

    //b)
    for (int x = n; x-->0;){
        tab2[(n-1)-x] = tab1[x];
    }
}

int main(){
    int n = 10;
    int t1[] = {1, 432, 45, 23, 23, 432, 65, 4, 65, 23465 };
    int t2[10];
    funkcja(n, t1, t2);

    for (int x = 0; x != n; x++){
        printf("%i: %i %i\n", x, t1[x], t2[x]);
    }
}
