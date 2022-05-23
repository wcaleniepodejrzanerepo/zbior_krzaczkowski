#include <math.h>

int main(){
    printf("Podaj licbzy > ");
    float a,b;
    scanf("%f %f", &a, &b);

    printf("\n");

    char op[2];
    printf("Podaj operacje [+ - / *] > ");
    scanf_s("%s", &op, 2);

    switch (op[0]){
        case '+':
            printf("Wynik: %f", a + b);
            break;
        case '-':
            printf("Wynik: %f", a - b);
            break;
        case '*':
            printf("Wynik: %f", a * b);
            break;
        case '/':
            printf("Wynik: %f", a / b);
            break;
        default:
            printf("Nieznana operacja %c", op);
            break;
    }
}
