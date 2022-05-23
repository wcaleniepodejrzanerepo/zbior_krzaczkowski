#include <stdio.h>
#include <stdlib.h>

int dlugosc (char *nap)
{
    int i=0;
    while (nap[i]!=0)
        i++;
    return i;
}

int dlugosc_t(wchar_t *nap)
{
     int i=0;
     while(nap[i]!=0)
            i++;
     return i;
}

int main()
{
printf ( "%i \n", dlugosc( "Sebastian" ) );
 return 0;
}
