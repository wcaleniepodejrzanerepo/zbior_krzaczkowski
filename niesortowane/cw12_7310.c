#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element* next;
};

struct element* utworz(){
    struct element* p = (struct element*)malloc(sizeof(struct element));
    p->i = 0;
    p->next = NULL;
    return p;
}

int main(){
    struct element* p = utworz();
    printf("%d\n", p->i);
    return 0;
}