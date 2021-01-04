#include <stdio.h>
int main() {    

    int c1, c2, sum;
    
    printf("Zadej 2 Integery: ");
    scanf("%d %d", &c1, &c2);

    sum = c1 + c2;      
    
    printf("%d + %d = %d", c1, c2, sum);
    return 0;
}