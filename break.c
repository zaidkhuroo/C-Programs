#include <stdio.h>

int main()
{
    int a, i, sum=0;

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
