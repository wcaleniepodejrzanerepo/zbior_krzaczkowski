#include <stdio.h>

enum zwierzak
{
    KOT = 0,
    PIES = 1,
    PTAK = 2,
    SZCZUR = 3,
    PYTHON = 4,
};


int main(){
    enum zwierzak zwierzak = PIES;
    printf("%i\n", zwierzak);
    return 0;
}
