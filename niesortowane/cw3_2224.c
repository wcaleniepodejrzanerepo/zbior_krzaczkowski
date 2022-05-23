
int funkcja(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    int r = 0;
    for (int x = 0; x != n; x++){
        r += funkcja(x);
    }

    return r;
}

int main(){
    int n;
    scanf("%i", &n);

    printf("%i", funkcja(n));
}
