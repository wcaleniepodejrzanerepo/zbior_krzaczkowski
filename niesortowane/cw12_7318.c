#include <stdio.h>
#include <stdlib.h>

struct element {
    int i;
    struct element* next;
};

void usunw(struct element* Lista, struct element* elem){
    struct element* p = Lista->next;
    while(p->next != NULL && p->next->i != elem->i){
        p = p->next;
    }
    if (p->next != NULL){
        struct element* q = p->next;
        free(p->next);
        p->next = q->next;
    }
}

int main(){
    struct element* g = malloc(sizeof(struct element));
    g->i = 0;
    struct element* q = malloc(sizeof(struct element));
    q->i = 3;
    struct element* r = malloc(sizeof(struct element));
    r->i = 2;
    struct element* p = malloc(sizeof(struct element));
    p->i = 0;
    g->next = p;
    p->next = r;
    r->next = q;
    usunw(g, r);
    printf("%d\n", p->i);
    printf("%d\n", p->next->i);
    return 0;
}
