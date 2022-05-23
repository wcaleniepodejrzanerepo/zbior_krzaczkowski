#include <stdio.h>
#include <stdlib.h>

void podmiana ( char* tab )
{
	for (int i=0 ;tab[i]!=0;i+=1)
	{
		if (tab[i]>='a'&&tab[i]<='z')
		{
			tab[i] = tab[i]-'a'+'A';
		}
	}

}
int main()
{
    char s[]="ALA ma Kota";
    printf("%s\n",s);
    podmiana(s);
    printf("%s\n",s);
    return 0;
}
