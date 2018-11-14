#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int a;
    int b;

    printf("Wpisz pierwsza liczbe: ");
    scanf("%d", &a);
    printf("Wpisz druga liczbe, wieksza niz poprzednia: ");
    scanf("%d", &b);

    if (a<b)
    {

    if (a%2 == 0)
    {
        if(b%2==0)
        {
            for(i=b; i>=a; i=i-2)
            {
                printf("%4d",i);
            }
        }
        else
        {
            for(i=b-1; i>=a; i=i-2)
            {
                printf("%4d",i);
            }
        }
    }
    else
    {
        if(b%2==0)
        {
            for(i=b; i>a; i=i-2)
            {
                printf("%4d",i);
            }
        }
        else
        {
            for (i=b-1; i>a; i=i-2)
            {
                printf("%4d",i);
            }
        }
    }
    }
    else
    {
        printf("Bledne dane");
    }
    printf("\n");
    return 0;
}
