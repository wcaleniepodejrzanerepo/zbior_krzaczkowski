#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int foo(char x[],char y[])
{

  int ilosc_spacji=0;
  int i,j;
if(strlen(x)>=strlen(y))
{
    for(i=0;x[i]!=0;i++)
    {
        x[i]==' ';
        ilosc_spacji++;
    }
    return ilosc_spacji;
}
else
{
    for(j=0;y[j]!=0;j++)
    {
        y[i]==' ';
        ilosc_spacji++;
    }
    return ilosc_spacji;
}

}

int main()
{
    char jeden[]="S E B asdteaiun";
    char dwa[] ="Ma teusz";
    printf("%s\0",foo(jeden,dwa));
    return 0;
}
