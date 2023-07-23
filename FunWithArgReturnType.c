#include <stdio.h>
int adnan(int, int);
int main()
{
    int a, b, s; 
    printf("enter two numbers\n");
    scanf("%d %d", &a, &b);
    s = adnan(a, b);
    printf("the sum is %d", s);
}

int adnan(int x, int y)
{
    int sum = 0;
    sum = x + y;
    return (sum);
}
