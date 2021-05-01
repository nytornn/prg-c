#include <stdio.h>
int main()
{
    int y;

    printf("zadej rok: ");
    scanf("%d",&y);

    if(y % 4 == 0)
    {
        if( y % 100 == 0)
        {
            if ( y % 400 == 0)
            printf("%d je přestupný rok", y);
            else
            printf("%d není přestupný rok", y);
        }
        else
        printf("%d je přestupný rok", y );
    }
    else
    printf("%d není přestupný rok", y);

    return 0;
}