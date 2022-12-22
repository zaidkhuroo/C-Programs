#include<stdio.h>
struct boult{

    int brand_id; //here brand_id is a structure member and not a variable name
    char logo[20];//here logo is a structure member and not a variable name
    float fine; //here fine is a structure member and not a variable name
}s1;
void main()
{
printf("enter the elements in structure\n");
scanf("%d",&s1.brand_id);
scanf("%s",&s1.logo);
scanf("%f",&s1.fine);
   
   //struct boult s2={124,"alpha",90.5};
printf("\nBrand id is %d", s1.brand_id);
printf("\nFine imposed %f", s1.fine);
printf("\nlogo name is %s", s1.logo);
}
// printf("Struct first is %d", s2);
// printf("Struct first is %d", s1);
// }