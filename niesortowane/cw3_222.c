
int silnia(int n){
    int r = 1;
    for (int x = 1; x <= n; x++){
        r *= x;
    }
    return r;
}

int main(){
    int a;
    scanf("%i", &a);

    printf("%i", silnia(a));
}
