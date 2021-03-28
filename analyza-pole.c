#include <stdlib.h>
#include <stdio.h>

#define COUNT 5

int main()
{
    int tmp, p[COUNT], large, small, i, sum;
    double average;
    int count = sizeof(p) / sizeof(p[0]);
    srand(1);
    for (int i = 0; i < count; i++)
    {
        p[i] = rand() % 100;
        printf("%02i ", p[i]);
    }
    for (int j = 0; j < count; j++)
    {
        for (int i = 0; i < count - j - 1; i++)
        {
            if (p[i] > p[i + 1])
            {
                tmp = p[i];
                p[i] = p[i + 1];
                p[i + 1] = tmp;
            }
        }
    }
    printf("\n");
    for (int i = 0; i < count; i++)
    {
        printf("%02i ", p[i]);
    }
    printf("\n");
    small = p[0];
    for(i = 1; i < count; i++)
    {
        if(small > p[i])
        {
            small = p[i];
        }
    }
    printf("nejmensi cislo je: %d\n", small);

    large = p[0];
    for(i = 1; i < count; i++)
    {
        if(large < p[i])
        {
            large = p[i];
        }
    }
    printf("nejvetsi cislo je: %d\n", large);
    
    sum = p[0];
    for(i = 0; i < count; i++)
    {
        sum += p[i];
        average = sum / count;
    }
    printf("prumerna hodnota je: %f\n", average);
    sum = p[0];
    for(i = 0; i < count; i++)
    {
        sum += p[i];
    }
    printf("soucet vsech cisel je: %d\n", sum);
    return 0;
}