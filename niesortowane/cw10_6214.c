#include <stdio.h>

int suma(int tab[100][100][100])
{
    int s = 0;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            for (int l = 0; l < 100; l++)
            {
                s += tab[i][j][l];
            }
        }
    }
    return s;
}

int main(){
    //ten kod wywala na moim laptopie 0xC00000FD (stack overflow error) przez zbyt dużą tablicę
    //ale skoro mają być rozmiary na sztywno to będą na sztywno
    //na komputerze stacjonarnym i kompilatorach online działa normalnie
    int tab[100][100][100];
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            for (int l = 0; l < 100; l++)
            {
                tab[i][j][l] = i + j + l;
            }
        }
    }
    printf("%i\n", suma(tab));
}
