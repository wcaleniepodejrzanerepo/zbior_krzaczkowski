#include <stdio.h>

struct punkt10{
    double t[10];
};


int main(){
    struct punkt10 p;
    for (int x = 0; x != 10; x++){
        p.t[x] = x;
    }
    for (int x = 0; x != 10; x++){
        printf("%f, ", p.t[x]);
    }
    return 0;
}