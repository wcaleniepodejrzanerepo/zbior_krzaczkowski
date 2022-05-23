#include <stdio.h>
#include <stdlib.h>

struct element {
    int v;
    struct element* nast;
};

struct element* utworz(){
    return NULL;
}

int main(){
    struct element* p = utworz();
}