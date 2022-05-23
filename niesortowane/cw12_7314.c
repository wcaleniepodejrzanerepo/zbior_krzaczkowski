#include <stdio.h>
#include <stdlib.h>

struct element {
    int i;
    struct element* next;
};

struct element* dodajw(struct element* Lista, struct element* elem, int a){
    struct element* p = Lista->next;
    struct element* n = malloc(sizeof(struct element));
    n->i = a;
    while(p->next != NULL && p->i != elem->i){
        p = p->next;
    }
    n->next = p->next;
    p->next = n;
    
    return Lista;
}

int main(){
    struct element* p = malloc(sizeof(struct element));
    p->i = 0;
    p->next = NULL;
    dodajw(p, NULL, 3);
    printf("%d\n", p->i);
    printf("%d\n", p->next->i);
    return 0;
}