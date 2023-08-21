#include <stdio.h>
#include<stdlib.h>
void add (int a[50][50], int b[50][50], int c[50][50],int row,int col )
{
   for(int i=0;i<=row;i++)
   {
   for (int j = 0; j <=col; j++)
   {
     c[i][j]=a[i][j]+b[i][j];
   }
   }
}

void subtract(int a[50][50], int b[50][50], int c[50][50],int row,int col )
{
   for(int i=0;i<=row;i++)
   {
   for (int j = 0; j <=col; j++)
   {
     c[i][j]=a[i][j]-b[i][j];
   }
   }
}

void multiply(int a[50][50], int b[50][50], int c[50][50],int row,int col)
{
    for(int i=0;i<=row;i++)
   {
   for (int j = 0; j <=col; j++)
   {
      c[i][j] = 0;
      for (int k = 0; k < row; k++)
      {
      c[i][j] += a[i][k] * b[k][j];}
   }
}
}

void transpose(int a[3][3], int c[3][3])
{
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      c[i][j] = a[j][i];
}

void display(int matrix[3][3], int row, int col)
{
  for(int i=0; i<row; i++)
  {
    for(int j=0; j<col; j++)
      printf("%d\t",matrix[i][j]);

    printf("\n");
  }
}

int main()
{
    int row , col;
    printf("Enter no.of rows and colums of two array : ");
    scanf("%d,%d",&row,&col);
    int a[10][10],b[10][10],c[10][10];
    printf("Enter the element of first array : ");
    for (int i = 0; i<row;i++)
    {
    for (int j=0;j<col; j++)
    {
        scanf("%d%d",&a[i][j]); 
    }}

    printf("Enter the element of second array : ");
    for (int i = 0; i<row;i++){
    for (int j=0;j<col; j++)
    {
        scanf("%d%d",&b[i][j]); 
    } }

    int choice;
  do
  {
    printf("\nChoose the matrix operation,\n");
    printf("----------------------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Transpose\n");
    printf("5. Exit\n");
    printf("----------------------------\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        add(a, b, c,row,col);
        printf("Sum of matrix: \n");
        display(c,row,col);
        break;
      case 2:
        subtract(a, b, c,row,col);
        printf("Subtraction of matrix: \n");
        display(c,row,col);
        break;
      case 3:
        multiply(a, b, c,row ,col);
        printf("Multiplication of matrix: \n");
        display(c,row,col);
        break;
      case 4:
        printf("Transpose of the first matrix: \n");
        transpose(a, c);
        display(c,row,col);
        printf("Transpose of the second matrix: \n");
        transpose(b, c);
        display(c,row,col);
        break;
      case 5:
        printf("Thank You.\n");
        exit(0);
      default:
        printf("Invalid input.\n");
        printf("Please enter the correct input.\n");
    }
  }while(1);
}