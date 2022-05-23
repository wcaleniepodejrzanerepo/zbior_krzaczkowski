int potega(int a, int n){
    int r = 1;
    for (int x = 0; x != n; x++){
        r *= a;
    }
    return r;
}

int yrootfloor(int m, float n){
    int lb = 0;
    for (float x = 0; potega(x,m) <=n; x++){
        if (potega(x,m) == n){
            return x;
        } else {
            lb = x;
        }
    }
    return lb;
}

int liczenie_sumy(int m, int n){
    int suma = 0;
    for (int x = 0; x <= n; x++){
        suma += yrootfloor(m, x);
        //printf("suma: %i: %i\n", x, suma);
    }
    return suma;
}

int main(){
    int m,n;
    scanf("%i %i", &m, &n);

    printf("%i", liczenie_sumy(m,n));
}
