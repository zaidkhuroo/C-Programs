#include <stdio.h>
void boss(float, float);
void main()
{

    float a, b;
    printf("Enter numbers\n");
    scanf("%f %f", &a, &b);
    boss(a, b);
}
void boss(float x, float y)
{

    printf("x=%f,y=%f", x, y);
    int sum = x + y;
}