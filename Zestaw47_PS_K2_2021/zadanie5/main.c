#include <stdio.h>
#include <stdlib.h>
struct node {
int x;
struct node* next;
};

void funkcja(struct node* lista, int a)
{
    while(lista != NULL)
    {
        if(lista->x==a)
        {
            printf("%p\n",lista);
        }
        lista = lista->next;
    }
}
int main()
{
    struct node a= {2, NULL};
    struct node b= {3, &a};
    struct node c= {2, &b};
    struct node d= {4, &c};
    struct node e= {5, &d};
    struct node f= {6, &e};
    struct node g= {2, &f};
    funkcja(&g, 2);
    return 0;
}
