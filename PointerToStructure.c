#include<stdio.h>
struct name{
    int roll;
    float class;
    char name[10];
};
void main()
{   
    struct name s={1,12.4,"teddy"}; //inputs to members respectively

    struct name *p=&s; //assigning pointer to the structure where the index of structure is located.
    printf("%d ",p->roll); //p-> can be used to point to a structure member of a structure.
      printf("%f ",p->class);
        printf("%s ",(*p).name);//(*p).name can also be used to point to a structure member of a structure.
}