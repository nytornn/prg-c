#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() 
{
    int h;
    printf("zadej počet řádků: ");
    scanf("%d", &h);
    printf("\n");
    
    for(int i = 1; i <= h; i++)
    {   
        for(int space = 0; space <= h - i; space++)
        {
            printf("   ");
        }

        for(int j = 1; j <= i * 2 - 1; j++)
        {
            printf(" * ");
        }               

        printf("\n");
    }

    return 0;
}