#include<stdio.h>
int main()
{
    int a ,temp,reverse=0,reminder;
    printf("Enter the number : ");
    scanf("%d",&a);
    temp = a;
    for (int i=a;i>0;i=i/10)
    {
      reminder=i%10;
      reverse=(reverse*10)+reminder;
    }
    if (temp==reverse)
    {
        printf("palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
    return 0;
    
}