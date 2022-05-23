
int alg_euklidesa(int n, int m){
    int a = n;
    int b = m;
    if (a != b){
        if (a > b){
            return alg_euklidesa(a - b, b);
        } else {
            return alg_euklidesa(a, b - a);
        }
    }
    return a;
}


int main(){
    int n, m;
    scanf("%i %i", &n, &m);
    printf("%i\n", alg_euklidesa(n,m));

}
