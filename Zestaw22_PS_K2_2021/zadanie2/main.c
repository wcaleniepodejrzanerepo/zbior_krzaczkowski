#include <stdio.h>
#include <stdlib.h>

void foo(char x[],char y)
{
    int i,j = 0;
    while(x[i] != '\0')
    {
        if(x[i]==y)
        {
            j=i;
            while(x[j] != '\0') {
                x[j]=x[j+1];
                j++;
            }
        }
        i++;
    }
}

int main()
{
    char napis[] = "smasn";
    foo(napis,'s');
    printf("%s\n",napis);
    return 0;
}
