#include <stdio.h>

struct lista {
    int wartosc;
    struct lista* nast;
};

int main(){
    struct lista* p = malloc(sizeof(struct lista));
    p->wartosc = 1;
    p->nast = malloc(sizeof(struct lista));
    p->nast->wartosc = 2;
    p->nast->nast = malloc(sizeof(struct lista));
    p->nast->nast->wartosc = 3;
    p->nast->nast->nast = NULL;

    struct lista* q = p;
    int e = 0;
    while (q != NULL){
        printf("element listy %i: %i\n", e, q->wartosc);
        q = q->nast;
        e++;
    }
    return 0;
}
