#include <stdio.h>
#include <stdlib.h>

struct element {
    int i;
    struct element* next;
};

int minimum_bg(struct element* Lista){
    struct element* p = Lista;
    int min = p->i;
    while(p != NULL){
        if (p->i < min){
            min = p->i;
        }
        p = p->next;
    }
    return min;
}

int minimum_g(struct element* Lista){
    return minimum_bg(Lista->next);
}

int main(){
    struct element* p = malloc(sizeof(struct element));
    p->i = 0;
    struct element* q = malloc(sizeof(struct element));
    q->i = 3;
    struct element* r = malloc(sizeof(struct element));
    r->i = 2;
    struct element* s = malloc(sizeof(struct element));
    s->i = 1;
    p->next = q;
    q->next = r;
    r->next = s;
    printf("%d\n", minimum(p));
    return 0;
}