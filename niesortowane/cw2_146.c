#include <math.h>

int main(){
    printf("Podaj licbze n > ");
    int n;
    scanf("%i", &n);

    if (n <= 2){
        return -1;
    }
    int ret = 1;
    for (int x = 2; x <= n; x++){
        if (x % 2 == 0 ){
            ret *= x;
        }
    }

    printf("%i", ret);

}
