#include <stdio.h>

double cm2inch(double cm)
{
    return cm / 2.54;
}

int main()
{
    printf("%.2f inch", cm2inch(10));
    return 0;
}