#include <stdio.h>
int main()
{
    int a[4], i;
    for (i = 0; i <= 4; i++)
    {
        printf("enter Number\n");
        scanf("%d", &a[i]);
    }
    //printf("Numbers are\n");

    for (i = 0; i <= 4; i++)
    {

        if (a[i] % 2 == 0)
        {
            printf("Even Number %d\n", a[i]);
        }
        else
        {
            printf("Odd Number: %d\n", a[i]);
        }
    }
    // for(i=0;i<=3;i++)
    // {
    //     printf("\t%d", a[i]);
    // }

    // printf("\nReverse: ");
    // for(i=3;i>=0;i--)
    // {

    //     printf("\t%d", a[i]);
    //}
}
