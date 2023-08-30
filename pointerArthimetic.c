#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5,6,7};
    int s;
    int *p=a; 
    int *q=&a[3];
    printf("q-p value is %d\n",q-p);
    q=q+2;
    printf("value of p is %d\n",*p);
    p=p+2;
    printf("value of p is %d\n",*p);
    printf("value of q is %d\n",*q);
    printf("value of p+q is %d\n",*p+*q);
    


}
