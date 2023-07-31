#include<stdio.h>

int main(){
    int i,n,x[100],temp;
    int size=sizeof(x);
    printf("Enter the size of array\t");
    scanf("%d",&size); 
for(int i=0;i<size;i++)
{
    printf("Enter the %d Element in array\t", i+1);
    scanf("%d",&x[i]);
}
for(int i=0;i<size;i++)
{
    printf("\n%d Element:\t %d",i+1,x[i]);
}
int a,found=0;
printf("\nEnter the number to search in array \t");
scanf("%d",&a);
for(int i=0;i<size;i++)
{
if (a==x[i])
found==1;
break;
}
if (found==1)
{
    printf("\nNumber is present at position %d", i+1);
}
else
{
printf("\n Sorry Number not found");
}
}
