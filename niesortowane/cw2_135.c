#include <math.h>


float pole_trojkata_ah(float a, float h){
    return a * h * (1/2.0f);
}

float pole_trojkata_abc(float a, float b, float c){
    float p = (a + b + c) / 2;
    float ret = 0;
    ret = sqrt(p * (p - a) * (p - b) * (p - c));

    return ret;
}

int main(){
    char wyb = -1;
    printf("Obliczyc pole na podstawie wszystkich bokow? [Y/N] > ");
    scanf("%c", &wyb);
    printf("\n\n");

    if (wyb == 'Y'){
        float a,b,c;
        printf("Podaj boki trojkata > ");
        scanf("%f %f %f", &a, &b, &c);

        printf("\n%f", pole_trojkata_abc(a,b,c));
    } else {
        float a,h;
        printf("Podaj dl. podstawy i wysokosc > ");
        scanf("%f %f", &a, &h);

        printf("\n%f", pole_trojkata_ah(a,h));
    }
}
