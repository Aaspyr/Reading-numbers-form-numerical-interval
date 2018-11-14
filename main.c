#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int a;
    int b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter the second number, bigger than the previous one: ");
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
        printf("Wrong data");
    }
    printf("\n");
    return 0;
}
