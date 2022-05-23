#include <stdio.h>

void funkcja(int n, int* tab1, int* tab2, int* tab3){
    //a)
    for (int x = n; x-->0;){
        tab3[x] = tab1[x] + tab2[x];
    }

    //b)
    for (int x = n; x-->0;){
        tab3[x] = (tab1[x] > tab2[x] ? tab1[x] : tab2[x]);
    }

    //c)
    for (int x = n; x-->0;){
        int wt3 = tab3[x];
        tab3[x] = tab2[x];
        tab2[x] = tab1[x];
        tab1[x] = wt3;
    }
}

int main(){
    int n = 10;
    int t1[] = {1,2,3,4,5,6,7,8,9,10};
    int t2[] = {11,12,13,14,15,16,17,18,19,20};
    int t3[] = {21,22,23,24,25,26,27,28,29,30};
    for (int x = 0; x != n; x++){
        printf("%i: %i %i %i\n", x, t1[x], t2[x], t3[x]);
    }
    printf("--------------\n");

    funkcja(n, t1,t2,t3);

    for (int x = 0; x != n; x++){
        printf("%i: %i %i %i\n", x, t1[x], t2[x], t3[x]);
    }
}
