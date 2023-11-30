#include<stdio.h>
int stack[15], top=-1;
int notExit = 1;
void push(int item)
{
if(top==14) 
{
printf("Stack overflow\n");
} 
else 
{
printf("Enter the item to insert: ");
scanf("%d", &item);
stack[++top] = item;
}
}
int pop() 
{
int item;
if(top==-1) 
{
printf("Stack underflow\n");
} 
else 
{
item = stack[top--];
}
return item; 
}
void main()
{
while(notExit == 1)
{
int opt, item;
printf("Enter the option\n");
printf("1. Push\n2. Pop\n3. Exit\n");
scanf("%d",&opt);
switch(opt) 
{
case 1:
push(item);
break;
case 2:
item = pop();
if(item != 0) 
{
printf("The popped item is %d\n", item);
}
break;
case 3:
notExit = 0;
printf("Exited");
default:
printf("Invalid Operator\n");
} } }