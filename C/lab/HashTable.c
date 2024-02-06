#include<stdio.h>
#include<stdlib.h>
int h[10];
void insert()
{
   int key,index,hkey,i,flag=0;
   printf("Enter the vlaue  you want to insert : ");
   scanf("%d",&key);
   hkey=key%10;
   for(i=0;i<10;i++)
   {
     index=(hkey*i)%10;
     if(h[index]=='\0')
     {
        h[index]=key;
        break;
     }
   }
   if(i==10)
   {
    printf("Cannot insert element");
   }
}

void display()
{
    int i;
    printf("\n Element in hash table \n");
    for(i=0;i<10;i++)
    {
    printf("\nINDEX : %d \t VALUE : %d \n",i,h[i]);
    }
}
int main()
{
    int cho;
    for(int i=1;i>=0;i++)
    {
        printf("Enter the choice  : ");
        printf(" \n 1.Insert \n 2.Display \n 3.Exit \n");
        scanf("%d",&cho);
        if(cho==1)
        {
            insert();
        }
        else if(cho==2)
        {
            display();
        }
        else
        {
            break;
        }

    }
}
