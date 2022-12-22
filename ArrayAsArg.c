#include<stdio.h>
int avg(int [], int);
int main()
{
    int marks[]={1,2,3,4,5};
    int av,size;
    size=sizeof(marks)/sizeof(marks[0]);
    av=avg(marks,size);
    printf("Average Marks are:\n %d", av);
    
    

}
int avg(int marks[],int size)
{
    int i,a,sum=0,av=0;
    for(i=0;i<size;i++)
    {
        sum=sum+marks[i];
    }
    av=sum/size;
    return (av);
}