#include <stdio.h>

int main() {
    
    double c1, c2, c3;
    printf("Zadejte 3 čísla: ");
    scanf("%lf %lf %lf", &c1, &c2, &c3);

    if (c1 >= c2 && c1 >= c3)
        printf("%.2f je největší číslo.", c1);

    if (c2 >= c1 && c2 >= c3)
        printf("%.2f je největší číslo.", c2);

    if (c3 >= c1 && c3 >= c2)
        printf("%.2f je největší číslo.", c3);

    return 0;
}