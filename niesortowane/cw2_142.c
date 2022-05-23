#include <math.h>

int main(){
    printf("Podaj licbzy n i m> ");
    int n,m;
    scanf("%i %i", &n, &m);

    for (int x = 0; x != m; x++){
        printf("Wielokrotnosc %i: %i\n", x+1, n * (x+2));
    }

}
