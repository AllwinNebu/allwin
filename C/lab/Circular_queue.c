#include<stdio.h>
int queue[100];
int front=-1;
int rear =-1;

void enqueue(int item)
{
    if(((rear+1)%100)==front)
    {
      printf("\n Queue is full \n");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=item;
    }
    else
    {
        rear=(rear+1)%100;
        queue[rear]=item;
    }
}

void dequeue()
{
    if(rear==-1 && front==-1)
    {
        printf("\n Queue is empty\n");
    }

    else if(front==rear)
    {
        int delete=queue[front];
        printf("The element %d deleted",delete);
        front=rear=0;
    }

    else
    {
        int delete=queue[front];
        printf("The element %d deleted",delete);
        front=(front+1)%100;
    }
}

void display()
{
    printf("QUEUE : ");
   for(int i =front;i<=rear;i++)
   {
    printf("%d \t",queue[i]);
   }
}

void main()
{
     for(int i=1;i>0;i++)
    {
        int cho;
        printf("\nEnter the choice : \n1.Insert \n2.Delete \n3.Display \n4.Exit \n");
        scanf("%d",&cho);
        if(cho==1)
        {
            int item;
            printf("Enter the item to insert : ");
            scanf("%d",&item);
            enqueue(item);
        }
        else if (cho==2)
        {
            dequeue();
        }
        else if (cho ==3)
        {
            display();
        }
        else
        {
            break;
        }
    }
}