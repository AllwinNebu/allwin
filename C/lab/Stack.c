#include<stdio.h>
int stack[100];
int top=-1;

void push()
{
    int item;
    if(top==99)
    {
        printf("Stack Overflow \n");
    }
    else
    {
        printf("Enter the item to insert  : ");
        scanf("%d",&item);
        stack[++top]=item;
        printf("The element %d is inserted \n",item);
    }
}

void pop()
{
    int delete;
    if(top==-1)
    {
        printf("Stack is Empty \n");
    }
    else 
    {
        delete=stack[top--];
        printf("The element %d deleted \n" ,delete);
    }
}

void display()
{
    printf("STACK : \n");
    for(int i =0;i<=top;i++)
    {
        printf("%d \n",stack[i]);
    }
}

void main()
{
    for(int i = 1; i>0;i++)
    {
        int cho;
        printf("Enter your choice : \n1.Push \n2.pop \n3.display \n4.exit \n");
        scanf("%d",&cho);
        if(cho==1)
        {
            push();
        }
        else if (cho==2)
        {
            pop();
        }
        else if (cho==3)
        {
            display();
        }
        else
        {
            break;
        }
    }
}