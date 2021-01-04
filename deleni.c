#include <stdio.h>
int main() {
    int delenec, delitel, podil, zbytek;

    printf("Zadej dělenec: ");
    scanf("%d", &delenec);

    printf("Zadej dělitel: ");
    scanf("%d", &delitel);

    podil = delenec / delitel;

    zbytek = delenec % delitel;

    printf("podil = %d\n", podil);
    printf("zbytek = %d", zbytek);
    return 0;
}