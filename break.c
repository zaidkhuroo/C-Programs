#include <stdio.h>

int main()
{
    int a, i, sum=0; //setting the value of sum to 0 so the if on adding variable SUM with any number, then the result will be exact

    for (i = 1; i <= 5; ++i)
    {
        printf("enter a number");
        scanf("%d", &a);

        if (a < 0)
        {
//             if a is less than 0 the loop will break and the control will move out of the loop
            break;
        }
    
    sum = sum + a;
    }
    printf("%d", sum);
return 0;
}
