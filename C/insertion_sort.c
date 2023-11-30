#include<stdio.h>
int main()
{
    int n,temp,arr[50],j;
    printf("enter the number of element : ");
    scanf("%d",&n);
    printf("Enter the element : ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Sorted");
    for (int i=1;i<n;i++)
    {
        temp =arr[i];
        j=i-1;
        while(j>=0&&arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}