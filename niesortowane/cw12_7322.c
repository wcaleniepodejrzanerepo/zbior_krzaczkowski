#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct trojkat{
    int a;
    int b;
    int c;
    int pole;
    struct trojkat* nast;
};

void pole(struct trojkat* Lista){
    struct trojkat* p = Lista;
    while(p != NULL){
        int pp = (p->a+p->b+p->c)/2;
        p->pole = sqrt(pp*(pp-p->a)*(pp-p->b)*(pp-p->c));
        p = p->nast;
    }
}

int main(){
    struct trojkat* p = malloc(sizeof(struct trojkat));
    p->a = 3;
    p->b = 4;
    p->c = 5;
    p->nast = NULL;
    pole(p);
}