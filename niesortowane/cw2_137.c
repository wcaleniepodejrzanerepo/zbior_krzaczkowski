#include <math.h>

int main(){
    printf("Podaj wspolczynniki (od x^2 do wyrazu wolnego) > ");
    float a,b,c;
    scanf("%f %f %f", &a, &b, &c);

    printf("\n");

    float delta = b*b - (4 * a * c);

    if (delta < 0){
        printf("Nie ma rozwiazan (delta = %f)", delta);
    } else if (delta == 0){
        printf("Rozwiazanie: %f", (-b)/(2*a));
    } else {
        float r1, r2;
        r1 = (-b + sqrt(delta))  / (2*a);
        r2 = (-b - sqrt(delta))  / (2*a);

        printf("Rozwiazania: %f, %f", r1, r2);
    }
}
