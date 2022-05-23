
void odwr(int n, int* tab){
    //a)
    for (int x = 0; x != n/2; x++){
        int wk = tab[x];
        tab[x] = tab[n-1-x];
        tab[n-1-x] = wk;
    }
}

void lshift(int n, int* tab){
    //b)
    int pierw = tab[0];
    for (int x = 0; x != n-1; x++){
        tab[x] = tab[x+1];
    }
    tab[n-1] = pierw;
}


void rshift(int n, int* tab){
    //c)
    int ost = tab[n-1];
    for (int x = n; x-->0;){
        tab[x] = tab[x-1];
    }
    tab[0] = ost;
}

int kolejn(int n, int* tab){
    int a = tab[0];
    for (int x = 1; x != n; x++){
        if (tab[x] < a){
            return 0;
        }
        a = tab[x];
    }
    return 1;
}

void bsort(int n, int* tab){
    //d)
    while (!kolejn(n,tab)){
        for (int x = 0; x != n-1; x++){
            if (tab[x] > tab[x+1]){
                int zm = tab[x+1];
                tab[x+1] = tab[x];
                tab[x] = zm;
            }
        }
    }
}

void bsort_malejaco(int n, int* tab){
    //e)
    bsort(n, tab);
    odwr(n, tab);
}

int main(){
    int t[] = {324,6,457,35,6,3,23,443,63,3,452,65,264,542,315,4};
    int n = sizeof(t)/sizeof(int);
    for (int x = 0; x != n; x++){
        printf("%i: %i\n", x, t[x]);
    }
    bsort(n,t);
    printf("----------------\n");
    for (int x = 0; x != n; x++){
        printf("%i: %i\n", x, t[x]);
    }
}
