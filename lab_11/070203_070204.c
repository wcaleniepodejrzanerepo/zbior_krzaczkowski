#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// zadanie 7.2.3

typedef struct punkt
{
    float x, y, z;
} punkt;

float dist(punkt p1, punkt p2)
{
    return sqrt(pow((p1.x - p2.x), 2)+ pow((p1.y - p2.y), 2) + pow((p1.z - p2.z), 2));
}

float ob(punkt tab[], int n)
{
    float temp = dist(tab[0], tab[1]);

    for(int i = 0; i < n; i++)
    {
        for(int j = 1; i < n; i++)
            if (i != j)
                if(temp < dist(tab[i], tab[j]))
                    temp = dist(tab[i], tab[j]);
    }
    return temp;
}

// zadanie 7.2.4

void przepisz(punkt tab1[], punkt tab2[], int n)
{
    for(int i = 0; i < n; i++)
    {
        tab2[i] = tab1[i];
    }
}

int main()
{
    punkt tab[] = {{1, 2, 3}, {4, 5, 6}, {2, 4, 6}};

    punkt tab1[] = {{4, 3, 2}, {1, 3, 4}, {5, 6, 4}, {9, 6, 3}};
    punkt tab2[4];

    // 7.2.3
    printf("%f\n", dist(tab[0], tab[1]));
    printf("%f\n", dist(tab[0], tab[2]));
    printf("%f\n\n", dist(tab[1], tab[2]));
    printf("%f\n\n", ob(tab, 3));

    // 7.2.4
    przepisz(tab1, tab2, 4);
    for(int i = 0; i < 4; i++)
    {
        printf("(%f, %f, %f)\n", tab2[i].x, tab2[i].y, tab2[i].z);
    }


    return 0;
}
