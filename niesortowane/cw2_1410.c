
int sqrtfloor(float n){
    int lb = 0;
    for (float x = 0; x*x <=n; x++){
        if (x*x == n){
            return x;
        } else {
            lb = x;
        }
    }
    return lb;
}


int main(){
    printf("Podaj licbze n > ");
    float n;
    scanf("%f", &n);

    printf("%i", sqrtfloor(n));
    //rzutowanie do inta == pod³oga dla liczb nieujemnych

}
