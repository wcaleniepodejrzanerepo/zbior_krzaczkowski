
int potega(int a, int n){
    int r = 1;
    for (int x = 0; x != n; x++){
        r *= a;
    }
    return r;
}

int main(){
    int n;
    scanf("%i", &n);

    printf("%i", potega(2, n));
}
