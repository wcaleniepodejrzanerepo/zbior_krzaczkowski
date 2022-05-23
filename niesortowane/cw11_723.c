#include <stdio.h>
#include <math.h>

struct punkt{
    double x;
    double y;
};

double najmn_odleglosc(struct punkt* tab, int n){
    double min = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){ //i+1 bo nie ma co liczyć poprzednich
            double dist = sqrt(pow(tab[i].x - tab[j].x, 2) + pow(tab[i].y - tab[j].y, 2));
            if(i == 0 || dist < min){
                min = dist;
            }
        }
    }
    return min;
}

int main(){
    struct punkt p[3] = {{1, 1}, {2, 2}, {3, 3}};
    printf("%f\n", najmn_odleglosc(p, 3));
    return 0;

}
