#include <stdio.h>

int indexof(char t[], char w){
    for (int x = 0; t[x] != '\0'; x++){
        if (t[x] == w){
            return x;
        }
    }
    return -1;
}

int indexofW(wchar_t t[], wchar_t w){
    for (int x = 0; t[x] != L'\0'; x++){
        if (t[x] == w){
            return x;
        }
    }
    return -1;
}

void wytnijzn(char nap1[], char nap2[]){
    for (int x = 0; nap1[x] != '\0'; x++){
        int r = indexof(nap2, nap1[x]);
        if (r == -1){
            nap1[x] = ' ';
        }
    }
}

void wytnijznW(wchar_t nap1[], wchar_t nap2[]){
    for (int x = 0; nap1[x] != L'\0'; x++){
        int r = indexofW(nap2, nap1[x]);
        if (r == -1){
            nap1[x] = L' ';
        }
    }
}

int main(){
    char napis1[] = "tekst";
    char napis2[] = "ste";
    wytnijzn(napis1, napis2);

    printf("%s\n", napis1);

    wchar_t napis1w[] = L"tekst";
    wchar_t napis2w[] = L"ste";
    wytnijznW(napis1w, napis2w);

    wprintf(L"%s", napis1w);
}
