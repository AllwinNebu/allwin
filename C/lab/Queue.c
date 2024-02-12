#include<stdio.h>
int queue[100];
int rear=-1;
int front = -1;

void enqueue(int item)
{
    if(rear==99)
    {
        printf("Queue is full \n");
    }

    else if (rear==-1 && front==-1)
    {
        front=rear=0;
        queue[rear]=item;
    }
    else 
    {
        queue[++rear]=item;
    }
}

void dequeue()
{
    if(rear==-1 && front==-1)
    {
        printf("Queue is empty \n");
    }

    else if (rear==front)
    {
        printf("The deleted item is : %d \n",queue[front]);
        rear=front=-1;
    }

    else
    {
        printf("The item  %d deleted \n ", queue[front]);
        front++;
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
