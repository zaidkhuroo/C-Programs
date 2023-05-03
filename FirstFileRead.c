#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
//     making a file using and using it with the pointer *fp
    FILE *fp=NULL;
    char ch;

    fp=fopen("abc.txt","r");

if (fp==NULL)
{
    printf("No File");
    exit(1);
}
while(!feof(fp))
{
ch=fgetc(fp);
printf("%c",ch);
}
fclose(fp);
}
