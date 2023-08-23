#include<stdio.h>
int main()
{
    int reminder,reverse=0,a;
    printf("Enter the number : ");
    scanf("%d",&a);
    for(int i =a; i>0;i=i/10)
    {
        reminder=i%10;
        reverse=(reverse*10)+reminder;
    }
    printf("%d",reverse);
    return 0;
}