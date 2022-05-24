#include <stdio.h>
#include <stdlib.h>


enum Film {serial=0, western=1, horror=2, dokumentalny=3, animowany=4, przygodowy=5};

int main()
{
    enum Film tab[6] = {serial, western, western, dokumentalny, animowany, przygodowy};
    for(int i=0; i<6; i++)
    {
        if(tab[i]==0)
        {
            printf("%s\n", "serial");
        }
        if(tab[i]==1)
        {
            printf("%s\n", "western");
        }
        if(tab[i]==2)
        {
            printf("%s\n", "horror");
        }
        if(tab[i]==3)
        {
            printf("%s\n", "dokumentalny");
        }
        if(tab[i]==4)
        {
            printf("%s\n", "animowany");
        }
        if(tab[i]==5)
        {
            printf("%s\n", "przygodowy");
        }
    }
    return 0;
}
