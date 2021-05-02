#include <stdio.h>

int power(int n1, int n2);

int main()
{
    int base, exp;
    printf("Zadej mocněnec: ");
    scanf("%d", &base);
    printf("\nZadej exponent: ");
    scanf("%d", &exp);
    printf("\n%d^%d = %d", base, exp, power(base, exp));
    return 0;
}
int power(int b, int e)
{
    if(e == 0)
        return 1;
    return (b*power(b, e-1));
}