#include <math.h>

int main(){
    printf("Podaj licbze n > ");
    int n;
    scanf("%i", &n);

    if (n <= 0){
        return -1;
    }
    int ret = 1;
    for (int x = 1; x <= n; x++){
        ret *= x;
    }

    printf("%i", ret);

}
