#include <stdio.h>

union super_int{
    int i;
    unsigned int u;
};

int main(){
    union super_int s;
    s.i = -1;
    printf("%i\n", s.i);
    printf("%u\n", s.u);
    return 0;
}
