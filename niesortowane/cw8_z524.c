#include <stdio.h>

int funkcja(char c1[], char c2[]){
    for (int x = 0; ; x++){
        if (c1[x] != c2[x]){
            if (c1[x] < c2[x]){
                return 1;
            } else {
                return 0;
            }
        } else if (c1[x] == '\0'){
            return 1;
        } else if (c2[x] == '\0'){
            return 0;
        }
    }
}

int main(){

    char a1[] = "napispierwszy";
    char a2[] = "napisdrugi";
    printf("%i\n", funkcja(a1, a2));
    printf("%i\n", funkcja(a2, a1));
}
