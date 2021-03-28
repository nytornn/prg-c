#include <stdio.h>
#include <math.h>

#define PI 3.14159265389

double deg2rad(double deg)
{
    return deg / 180 * PI;
}

double prepona(double alpha, double a)
{
    double b = tan(deg2rad(alpha)) *a;
    double c = sqrt(a * a + b * b);
    return c;
}

int main()
{

    printf("%.5f", prepona(45, 5.5));
    return 0;
    
}