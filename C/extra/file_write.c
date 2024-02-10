/*fputc is to print the value in the name array into the text file */
/* same method as to print array is used in this to put the value inside the text i.e, using a loop*/
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *text;
    char name[50]="Hello world";
    int leng=strlen(name);
    text=fopen("Test.txt","w");
    for(int i =0;i<leng;i++)
    {
        fputc(name[i],text);
    }
    fclose(text);
    return 0;
}