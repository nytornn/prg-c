#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("\nZadej teplotu v celsiu: ");
    scanf("%f", &celsius);

    fahrenheit = (1.8*celsius) + 32;
    printf("\nTeplota ve Fahrenheitech je: %f ", fahrenheit);
    return 0;
}