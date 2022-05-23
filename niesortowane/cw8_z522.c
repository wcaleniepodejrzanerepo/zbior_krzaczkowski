#include <stdio.h>

int dlugosc(char a[]){
    int x = 0;
    while (a[x] != '\0'){
        x++;
    }
    return x;
}

int dlugoscW(wchar_t a[]){
    int x = 0;
    while (a[x] != '\0'){
        x++;
    }
    return x;
}


int main(){
    char str1[] = "tekst1";
    wchar_t str2[] = L"ąąąątekst2";
    printf("%i, %i", dlugosc(str1), dlugoscW(str2));
}
