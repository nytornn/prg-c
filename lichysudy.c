#include <stdio.h>
int main() {
    int c;
    printf("Zadej integer: ");
    scanf("%d", &c);

    if(c % 2 == 0)
        printf("%d je sudý.", c);
    else
        printf("%d je lichý.", c);
    
    return 0;
}