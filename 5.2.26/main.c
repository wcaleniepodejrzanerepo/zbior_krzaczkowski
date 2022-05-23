#include <stdio.h>
#include <stdlib.h>

void maleduze(char *nap)
{
    int i;
    for(i=0;nap[i]!=0;i++)
        nap[i]=towupper(nap[i]);
}
void maleduze_t(wchar_t *nap)
{
    int i;
    for(i=0;nap[i]!=0;i++)
        nap[i]=towupper(nap[i]);
}

int main()
{
    char t[] = "napis1";
    maleduze(t);
    printf("%s",t);
    return 0;
}
