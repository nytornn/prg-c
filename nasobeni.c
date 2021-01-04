#include <stdio.h>
int main() {
    double a, b, soucin;
    printf("Zadejte 2 čísla: ");
    scanf("%lf %lf", &a, &b);  
 
    soucin = a * b;

    printf("soucin = %.2lf", soucin);
    
    return 0;
}