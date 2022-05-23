#include <stdio.h>

int* funkcja(int n, int* tab){
    int nz_e = 0;
    for (int x = n; x-->0;){
        if (tab[x] != 0){
            nz_e++;
        }
    }
    int* tab2 = malloc(nz_e*sizeof(int));
    for (int x = 0, w = 0; x != n; x++){
        if (tab[x] != 0){
            tab2[w] = tab[x];
            w++;
        }
    }
    return tab2;
}

int main(){
    int tab[] = {1,2,5,6,78,0,2,5,6,9,0,2,0,0,1,4,0,2,0};
    int n = sizeof(tab)/sizeof(int);
    int* t2 = funkcja(n, tab);
    for (int x = 0; x != 13; x++){
        printf("%i\n", t2[x]);
    }
}
