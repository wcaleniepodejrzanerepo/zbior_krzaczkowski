//(skopiowane z mojego rozwiazania zadania 1.4.10
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
    float a;
    scanf("%f", &a);

    printf("%i", sqrtfloor(a));
}
