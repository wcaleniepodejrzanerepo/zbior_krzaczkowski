#include <stdio.h>

struct punkt {
    double x;
    double y;
};


void kopiuj(struct punkt tab1[], struct punkt tab2[], int n){
    for (int i = 0; i < n; i++){
        tab2[i] = tab1[i];
    }
}

int main(){
    struct punkt p1[] = {{1, 1}, {2, 2}, {3, 3}};
    struct punkt p2[] = {{3, 4}, {2, 3}, {1, 2}};
    kopiuj(p1, p2, 3);

    for (int i = 0; i < 3; i++){
        printf("%f %f\n", p2[i].x, p2[i].y);
    }
}