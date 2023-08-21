#include<stdio.h>
int main()
{
    int a[100],i,s,n,count=0;
    printf("Enter the number of element ");
    scanf("%d",&n);
    printf("Enter the  element : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search : ");
    scanf("%d",&s);
    for (i=0;i<n;i++)
    {
        if(a[i]==s){
           
            count++;
            }
    }
    printf("count : %d",count);
    return 0;
}