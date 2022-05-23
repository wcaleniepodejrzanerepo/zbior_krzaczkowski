#include <stdio.h>

//bez funkcji bibliotecznych
int memcompare(void* a, void* b, int n){
    char* c1 = (char*)a;
    char* c2 = (char*)b;
    for (int x = 0; x != n; x++){
        if (c1[x] != c2[x]){
            return (int)c1[x] - (int)c2[x];
        }
    }
    return 0;
}

void wytnij2(char nap1[], char nap2[]){
    int dl1 = 0;
    int dl2 = 0;
    while (nap1[dl1] != '\0'){
        dl1++;
    }
    while (nap2[dl2] != '\0'){
        dl2++;
    }

    if (dl2 > dl1){
        return;
    }

    for (int x = 0; x != dl1-dl2+1; x++){
        if (memcompare(((char*)nap1)+x, nap2, dl2) == 0){
            for (int y = x; y != x+dl2; y++){
                nap1[y] = ' ';
            }
            return;
        }
    }
}

void wytnij2W(wchar_t nap1[], wchar_t nap2[]){
    int dl1 = 0;
    int dl2 = 0;
    while (nap1[dl1] != L'\0'){
        dl1++;
    }
    while (nap2[dl2] != L'\0'){
        dl2++;
    }

    if (dl2 > dl1){
        return;
    }

    for (int x = 0; x != dl1-dl2+1; x++){
        if (memcompare(((wchar_t*)nap1)+x, nap2, dl2*sizeof(wchar_t)) == 0){
            for (int y = x; y != x+dl2; y++){
                nap1[y] = L' ';
            }
            return;
        }
    }
}

int main(){
    char nap1[] = "123123123tekst1231232tekst765";
    char nap2[] = "tekst";
    wytnij2(nap1, nap2);

    wchar_t nap1w[] = L"123123123tekst1231232tekst765";
    wchar_t nap2w[] = L"tekst";
    wytnij2W(nap1w, nap2w);

    printf("%s\n", nap1);
    wprintf(L"%s", nap1w);
}
