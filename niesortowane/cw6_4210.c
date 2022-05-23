#include <stdio.h>

int funkcja1(int n, int* tab){
    //a)
    int m = tab[n-1];
    for (int x = n; x-->0;){
        if (tab[x] > m){
            m = tab[x];
        }
    }
    return m;

}
int funkcja2(int n, int* tab){
    //b)
    int m = tab[n-1];
    for (int x = n; x-->0;){
        if (tab[x] < m){
            m = tab[x];
        }
    }
    return m;
}
int funkcja3(int n, int* tab){
    //c)
    int m = n-1;
    for (int x = n; x-->0;){
        if (tab[x] > tab[m]){
            m = x;
        }
    }
    return m;
}
int funkcja4(int n, int* tab){
    //d)
    int m = n-1;
    for (int x = n; x-->0;){
        if (tab[x] < tab[m]){
            m = x;
        }
    }
    return m;
}
int funkcja5(int n, int* tab){
    //e)
    int m = tab[n-1] < -1 ? tab[n-1]*-1 : tab[n-1];
    for (int x = n; x-->0;){
        int ab = tab[x] < -1 ? tab[x]*-1 : tab[x];
        if (ab > m){
            m = ab;
        }
    }
    return m;
}
int funkcja6(int n, int* tab){
    //f)
    int m = tab[n-1] < -1 ? tab[n-1]*-1 : tab[n-1];
    int idx = n-1;
    for (int x = n; x-->0;){
        int ab = tab[x] < -1 ? tab[x]*-1 : tab[x];
        if (ab > m){
            idx = x;
            m = ab;
        }
    }
    return idx;
}

int main(){
    int n = 6;
    int t[] = {-231, 134, 2,43 ,5, 4};
    printf("%i", funkcja5(n,t));
}
