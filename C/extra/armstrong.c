#include<stdio.h>
int main()
{
    int a ,temp,n=0,m=0;
    printf("Enter the number : ");
    scanf("%d",&a);
    temp = a;
    for (int i=a;i>0;i=i/10)
    {
      m=i%10;
      n=n+(m*m*m);
    }
    if (temp==n)
    {
        printf("Armstrong ");
    }
    else{
        printf("Not armstrong");
    }
    return 0;
}      