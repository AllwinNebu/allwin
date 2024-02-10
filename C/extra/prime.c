#include <stdio.h>
int main()
{
    int a,flag=0;
    printf("Enter the number to check : ");
    scanf("%d",&a);
    for (int i = 1 ; i<=a;i++)
    {
        if (a%i==0)
        {
            flag++;
        }
    }    
        if (flag==2)
        {
            printf("Prime");
        }
        else
        {
            printf("Not prime ");
        }
    
    return 0;
}