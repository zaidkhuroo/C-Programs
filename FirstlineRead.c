#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp=NULL;      //declaring file pointer as equal to NULL
    char ch[100];
    //char v=0;

    fp=fopen("abc.txt","r");        //opening a file and reading it

if (fp==NULL) //if file has nothing in it, this satement will be executed
{
    printf("No File");
    exit(1);
}
fscanf(fp, "%[^\n]", ch);
    printf("Data from the file:\n%s", ch);
    

// while(!feof(fp))        //while (file end of file)
// {
// ch=fgetc(fp);       //fgetc means get character frok file
// printf("%c",ch);
// fclose(fp);
}