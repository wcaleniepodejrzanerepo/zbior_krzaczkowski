#include <stdio.h>
#include <stdlib.h>

void przepisz(struct trojkat troj1, struct trojkat *troj2)
{
    *troj2=troj1;
}

int main()
{
    struct trojkat troj1 = {2};
    struct trojkat troj2 = {4};
    przepisz(troj1,troj2);
    printf("%d\n",troj2);
    return 0;
}
