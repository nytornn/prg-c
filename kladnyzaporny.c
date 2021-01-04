#include <stdio.h>
int main() {
    double c;
    printf("Zadej číslo: ");
    scanf("%lf", &c);
    if (c <= 0.0) {
        if (c == 0.0)
            printf("Zadal jsi 0.");
        else
            printf("Zadal jsi záporné číslo.");
    } else
        printf("Zadal jsi kladné číslo.");
    return 0;
}