
int silnia_rek(int n){
    if (n == 1){
        return 1;
    }
    return silnia_rek(n - 1) * n;
}

int main(){
    int n;
    scanf("%i", &n);

    printf("%i", silnia_rek(n));
}
