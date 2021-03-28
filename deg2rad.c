#include <stdio.h>

#define PI 3.14159265389

double deg2rad(double deg)
{
    return deg / 180 * PI;
}

int main()
{
    printf("%.2f", deg2rad(15));
    return 0;
}