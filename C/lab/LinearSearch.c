#include<stdio.h>
void main()
{
    int n,key,count=0;
    printf("Enter the number of element : ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the number in the array : ");
    for(int i =0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Enter the element you want to search : ");
    scanf("%d",&key);
    for(int i = 0 ; i<n;i++)
    {
        if(ar[i]==key)
        {
            count++;
            break;
        }
    }
    if(count==1)
    {
        printf("Elemnet found");
    }
    else
    {
        printf("Not found");
    }
}