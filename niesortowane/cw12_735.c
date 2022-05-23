#include <stdio.h>

struct element {
    int v;
    struct element* nast;
};

struct element* dodajw(struct element* Lista, struct element* elem, int a){
    struct element* p = Lista;
    struct element* n = malloc(sizeof(struct element));
    n->v = a;
    if (elem == NULL){
        n->nast = Lista;
        return n;
    }
    while(p->nast != NULL && p->v != elem->v){
        p = p->nast;
    }
    n->nast = p->nast;
    p->nast = n;
    
    return Lista;
}

int main(){
    struct element* p = malloc(sizeof(struct element));
    p->v = 0;
    p->nast = NULL;
    dodajw(p, NULL, 3);
    printf("%d\n", p->v);
    printf("%d\n", p->nast->v);
    return 0;
}