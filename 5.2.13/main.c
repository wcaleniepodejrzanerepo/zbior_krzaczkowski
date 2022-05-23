#include <stdio.h>
#include <stdlib.h>

void wytnij(char *nap1, char *nap2)
{
    int i ,j;
    for(i=0,j=0;nap1[i]!=0;i++)
        if(nap1[i]!=nap2[i])
    {
        if(j<i)
        nap1[j]=nap1[i];
        j++;
    }
    nap1[j]=0;
}
void wytnijtm(wchar_t *nap1, wchar_t *nap2)
{
    int i ,j;
    for(i=0,j=0;nap1[i]!=0;i++)
        if(nap1[i]!=nap2[i])
    {
        if(j<i)
        nap1[j]=nap1[i];
        j++;
    }
    nap1[j]=0;
}

int main()
{
    char t[]="Napis1";
    char t2[]="Nap";
    wytnij(t,t2);
    printf("%s",t);
    return 0;
}
