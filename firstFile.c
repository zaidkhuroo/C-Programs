#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp=NULL; 
    char str[50];
    int i;
    int a= 10;
    char ch='b';
    fp=fopen("abc.txt","w");
    if (fp==NULL)
    {
        printf("no file");
        exit(1);
    }
    printf("Enter the string");
    gets(str);

    fprintf(fp,"%d %s %c", a,str,ch);
    //for(i=0;i!=strlen(str);i++)
    //fputs(str[i],fp);
    fclose(fp);
}
