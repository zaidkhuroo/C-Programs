#include<stdio.h>

int main()
{
//     making an array of size 100
    int a[100],i,n,MAX,MIN;
    printf("Enter size of the array");
    scanf("%d", &n);
    
    printf("Enter Elements in array");
    for(i=0;i<=n;i++)
    {
    scanf("%d", &a[i]);
    }
    MAX=MIN=a[0];
for(i=1;i<n;i++)
{
    if(MIN>a[i])
    MIN=a[i];
    if(MAX<a[i])
    MAX=a[i];
}
printf("Max element is %d", MAX);
printf("Max element is %d", MIN);
 return 0;
}
