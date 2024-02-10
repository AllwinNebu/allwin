#include<stdio.h>
#include<string.h>
int main()
{
    FILE *text;
    char name[30];
    int age;
    printf("Enter name and age : ");
    scanf("%s%d",&name,&age);
    text=fopen("text.txt","w");
    fprintf(text,"%s%d",name,age);
    fclose(text);
    return 0;
}    