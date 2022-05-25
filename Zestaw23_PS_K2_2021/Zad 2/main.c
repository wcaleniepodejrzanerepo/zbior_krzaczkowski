#include <stdio.h>
#include <stdlib.h>

int foo(char napis[])
{
    int x = 0;
    if(napis[0]=='\0')
        return 0;
    while(napis[x]!='\0')
    {
        x++;
    }
    for(int i = x-1;i>=0;i--)
    {
        if(napis[i]>=97)
            return i;
    }
    return 0;
}

int main()
{
    char napis[] = "KUTAKOZLA";
    printf("%d\n",foo(napis));
    return 0;
}
