#include <time.h>

int wywolania = 0;
int funkcja(){
    wywolania++;
    return wywolania;
}


int main(){
    srand(time(0));

    //przypadek testowy: losowa ilo�� wywo�a�
    int wyw = rand() % 100;
    for (int x = 0; x != wyw; x++){
        funkcja();
    }

    printf("wywolania: %i", wywolania);
}
