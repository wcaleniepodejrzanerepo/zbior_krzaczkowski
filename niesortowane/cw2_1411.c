
int abs(int n){
    return ( n < 0 ? n*(-1.0f) : n);
}


int main(){
    printf("Podaj licbzy a b c d > ");
    float a,b,c,d;
    scanf("%f %f %f %f", &a, &b, &c, &d);

    int x = 1;
    while (1){
        float eq_res = (a *(x*x)) + (b*x) + c - d;
        //printf("dla x = %i: %i\n", x, eq_res);
        if (eq_res > 0){
            break;
        }
        x++;
    }

    printf("wynik a): %i\n", x);

    x = 1;
    while (1){
        float eq_res = (5 *(x*x)) + (a*x) + b - c;
        //printf("dla x = %i: %i\n", x, eq_res);
        if (eq_res < 0){
            break;
        }
        x++;
    }

    printf("wynik b): %i\n", x);
    x = 1;
    while (1){
        float eq_res = (5 *(x*x)) + (a*x) + b - c;
        //printf("dla x = %i: %i\n", x, eq_res);
        if (eq_res <= 0){
            break;
        }
        x++;
    }

    printf("wynik c): %i\n", x);

}
