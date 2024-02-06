#include<stdio.h>
#include<stdlib.h>

struct node{
 int data;
 struct node* next;
}*ptr,*start=NULL,*last=NULL,*t=NULL,*t2=NULL;


void createnode()
{ 
 int item;
 ptr=(struct node*)malloc(sizeof(struct node));
 printf("Enter item : ");
 scanf("%d",&ptr->data);
 ptr->next=NULL;
 if(start == NULL)
 {
  start=ptr;
  last= ptr;
 }
 else
 {
  last->next = ptr;
  last = ptr;
 }
}

void insert_first()
{
 int item;
 ptr=(struct node*)malloc(sizeof(struct node));
 printf("Enter item : ");
 scanf("%d",&ptr->data);
 if(start == NULL)
 {
  start=ptr;
  last= ptr;
 }
 else
 {
  ptr->next=start;
  start = ptr;
 }
}

void insert_last()
{
 int item;
 ptr=(struct node*)malloc(sizeof(struct node));
 printf("Enter item : ");
 scanf("%d",&ptr->data);
 ptr->next=NULL;
 if(start == NULL)
 {
  start=ptr;
  last= ptr;
 }
 else
 {
  last->next = ptr;
  last = ptr;
 }
 
}

void insert_key()
{
 int key;
 printf("Enter key :");
 scanf("%d",&key);
 t = start;
 while(t != NULL)
 {
  if(t->data == key){
   ptr=(struct node*)malloc(sizeof(struct node));
   printf("Enter item : ");
   scanf("%d",&ptr->data);
   ptr->next=t->next;
   t->next=ptr;
   break;
  }
  t=t->next;
 }
 if(t == NULL){printf("Key not found");}
   
}

void deletion_first(){
 if(start == NULL)
 {
  printf("List is empty\n");
 }
 else if(start == last)
 {
  printf("Deleted element : %d\n",start->data);
  start = NULL;
  last = NULL;
 }
 else
 {
  printf("Deleted element : %d\n",start->data);
  t = start;
  start = start->next;
  free(t);
 }
}

void deletion_last()
{
 if(start == NULL)
 {
  printf("List is empty\n");
 }
 else if(start == last)
 {
  printf("Deleted element : %d\n",last->data);
  start = NULL;
  last = NULL;
 }
 else
 {
  t = start;
  while(t->next != NULL)
  {
   t2=t;
   t = t->next;
  }
  t2->next=NULL;
  last = t2;
  printf("Deleted element : %d\n",t->data);
  free(t);
  
 }
}

void deletion_key()
{
 int key;
 printf("Enter key :");
 scanf("%d",&key);
 t=start;
 t2=start;
 while(t!= NULL)
 {
  if(t->data == key)
  {
   if(t == start)
   {
    start = t->next;
    printf("Deleted element : %d\n",t->data);
    free(t);
   }
   else if( t == last)
   {
    last = t2;
    t2->next = NULL;
    printf("Deleted element : %d\n",t->data);
    free(t);
   }
   else{
    printf("Deleted element : %d\n",t->data);
    t2->next = t->next;
    free(t);
   }
   break;
  }
  t2 = t;
  t=t->next;
 }
}
void display()
{
 t = start;
 printf("Elements are : ");
 while(t != NULL)
 {
  printf("%d  ",t->data);
  t = t->next;
 }
 printf("\n");
}

void main()
{
 int ch;
 while(1){
  printf("1.Create Node\n2.Display List\n3.Insertion at Start\n4.Insertion at last\n5.Insertion at key\n6.Delete at start\n7.Delete at last\n8.Delete at key\n0.Exit\nEnter choice : ");
  scanf("%d",&ch);
  if(ch == 0){break;}
  switch(ch)
  {
   case 1: createnode();
    break;
   case 2: display();
    break;
   case 3: insert_first();
    break;
   case 4: insert_last();
    break;
   case 5: insert_key();
    break;
   case 6: deletion_first();
    break;
   case 7: deletion_last();
    break;
   case 8: deletion_key();
    break;
   default: printf("Invalid choice \n");
  }
 }
}