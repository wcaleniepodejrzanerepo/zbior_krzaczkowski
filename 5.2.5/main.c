#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

void przepisz(char* napis1, char* napis2){
    for (int x = 0; napis1[x] != '\0'; x++){
        napis2[x] = napis1[x];
    }
}

void przepiszW(wchar_t* napis1, wchar_t* napis2){
    for (int x = 0; napis1[x] != L'\0'; x++){
        napis2[x] = napis1[x];
    }
}

int main(){
    char t[] = "napis1";
    char t2[] = "napis222222";

    przepisz(t,t2);
    printf("%s", t2);
}
