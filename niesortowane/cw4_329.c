
int* nowy_int(){
    return (int*)malloc(sizeof(int));
}

int main(){
    int* a = nowy_int();

    *a = 4;
    printf("%i", *a);
}
