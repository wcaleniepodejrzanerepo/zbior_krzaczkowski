#include <stdio.h>

//¿eby nie by³o ¿e u¿ywam funkcji bibliotecznych
void memcpyA(void* dst, void* src, size_t n){
    char* a = dst;
    char* b = src;
    for (int x = 0; x != n; x++){
        a[x] = b[x];
    }
}

int strlenA(char* a){
    int x = 0;
    for (; a[x] != '\0'; x++){}
    return x;
}

int strlenW(wchar_t* a){
    int x = 0;
    for (; a[x] != L'\0'; x++){}
    return x;
}


char* sklej(char n1[], char n2[], char n3[]){
    int dl1 = strlenA(n1);
    int dl2 = strlenA(n2);
    int dl3 = strlenA(n3);

    char* out = malloc(sizeof(char)*(dl1+dl2+dl3+1));
    out[dl1+dl2+dl3] = '\0';
    memcpyA(out, n1, dl1*sizeof(char));
    memcpyA(out+dl1, n2, dl2*sizeof(char));
    memcpyA(out+dl1+dl2, n3, dl3*sizeof(char));
    return out;
}

wchar_t* sklejW(wchar_t n1[], wchar_t n2[], wchar_t n3[]){
    int dl1 = strlenW(n1);
    int dl2 = strlenW(n2);
    int dl3 = strlenW(n3);

    wchar_t* out = malloc(sizeof(wchar_t)*(dl1+dl2+dl3+1));
    out[dl1+dl2+dl3] = 'L\0';
    memcpyA(out, n1, dl1*sizeof(wchar_t));
    memcpyA(out+dl1, n2, dl2*sizeof(wchar_t));
    memcpyA(out+dl1+dl2, n3, dl3*sizeof(wchar_t));
    return out;
}

int main(){
    char t1[] = "tekst1";
    char t2[] = "tekst22";
    char t3[] = "tekst333";

    char* t4 = sklej(t1,t2,t3);
    printf("%s\n",t4);

    wchar_t t1w[] = L"wtekst1";
    wchar_t t2w[] = L"wtekst22";
    wchar_t t3w[] = L"wtekst333";

    wchar_t* t4w= sklejW(t1w,t2w,t3w);
    wprintf(L"%s", t4w);
}
