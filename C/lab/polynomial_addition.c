#include<stdio.h>

struct poly
{
    int coffe,expo;
}; 
struct poly p1[10],p2[10],p3[10];

int read_poly(struct poly p[10])
{
    int n;
    printf("Enter the Number of elements : ");
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        printf("Enter the Cofefficient : ");
        scanf("%d",&p[i].coffe);

        printf("Enter the Exponenet : ");
        scanf("%d",&p[i].expo);
    }
    return n;
}

int add_poly(struct poly p1[10], struct poly p2[10], struct poly p3[10],int n1,int n2)
{
    int i=0,j=0,k=0;
    while(n1>i&&n2>j)
    {
        if(p1[i].expo==p2[j].expo)
        {
            p3[k].coffe=p1[i].coffe+p2[j].coffe;
            p3[k].expo=p1[i].expo;
            i++;
            j++;
            k++;
        }

        else if(p1[i].expo>p2[j].expo)
        {
           p3[k].coffe=p1[i].coffe;
           p3[k].expo=p1[i].expo;
           k++;
           i++;
        }

        else
        {
            p3[k].coffe=p2[j].coffe;
            p3[k].expo=p2[j].expo;
            k++;
            j++;
        }
    }
    while(i<n1)
    {
        p3[k].coffe=p1[i].coffe;
        p3[k].expo=p1[i].expo;
        i++;
        k++;
    }

    while (j<n2)
    {
        p3[k].coffe=p2[j].coffe;
        p3[k].expo=p3[j].expo;
        k++;
        j++;
    }
         
      return k;
}

void display_poly(struct poly p[10], int n3)
{
    for(int k=0;k<n3-1;k++)
    {
        printf("%d(x^%d)+",p[k].coffe,p[k].expo);
    }
}

void main()
{
    int n1,n2,n3;
    printf("Enter the First polynomail:  \n");
    n1=read_poly(p1);

    printf("Enter the second polynomial : \n");
    n2=read_poly(p2);

    n3=add_poly(p1,p2,p3,n1,n2);
    printf("The sum is : ");
    display_poly(p3,n3);
}
