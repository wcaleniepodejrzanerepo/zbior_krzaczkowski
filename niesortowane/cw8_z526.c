#include <stdio.h>

void kopiujn(char nap1[], char nap2[], int n){
    for (int x = 0; x != n && nap1[x] != '\0'; x++){
        nap2[x] = nap1[x];
    }
}

void kopiujnW(wchar_t nap1[], wchar_t nap2[], int n){
    for (int x = 0; x != n && nap1[x] != '\0'; x++){
        nap2[x] = nap1[x];
    }
}

int main(){
    char n2[] = "         napis";
    char n1[] = "pierwszy";
    kopiujn(n1,n2,9);
    printf("%s\n", n2);

    wchar_t nw2[] = L"      napis";
    wchar_t nw1[] = L"drugi";
    kopiujnW(nw1,nw2,5);
    wprintf(nw2);
}
