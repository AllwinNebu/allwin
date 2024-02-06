#include<stdio.h>
#include<stdlib.h>

void binarytree(int*tree, int size, int element)
{
    
    if(tree==NULL)
    {
        return;
    }
  int pos=0;
  while(pos<size){ 
  if(tree[pos])
     {
        if(tree[pos]<element)
        {
            pos= (2*pos)+2;
        }
        else if(tree[pos]&&tree[pos]>element)
        {
            pos=(2*pos)+1;
        }
     }
    else
    {
        tree[pos]=element;
        return;
    }
   }
}

void display(int*tree , int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d \t",tree[i]);
    }
}

int main()
{
    int tree[100]={0};
    int size=100;
    int element;
    int n;
    printf("\nEnter te number of element : ");
    scanf("%d",&n);
    printf("Enter the element : ");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&element);
       binarytree(tree,size,element);
    }
    printf("The binary tree : ");
    display(tree,30);
}