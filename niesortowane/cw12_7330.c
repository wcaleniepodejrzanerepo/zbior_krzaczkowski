#include <stdio.h>
#include <stdlib.h>

struct element {
    int i;
    struct element* next;
};

struct element* doklej(struct element* Lista1, struct element* Lista2){
    struct element* p = Lista1;
    if (p == NULL){
        return Lista2;
    }
    while (p->next != NULL){
        p = p->next;
    }
    p->next = Lista2;
    return Lista1;
}