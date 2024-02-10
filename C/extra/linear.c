#include<stdio.h>
int main()
{  
  	int n,i,count,item;
  	count=0;
  	count++;
  	printf("Enter the limit of the array");
  	count++;
  	scanf("%d",&n);
  	count++;
  	int a[n];
  	printf("Enter the elements of the array");
  	count++;
  	for(i=0;i<n;i++)
    	{
    		  count++;
    		  scanf("%d",&a[i]);
    		  count++;
    	}
    	count++;
  	printf("Enter the number to be searched");
  	count++;
  	scanf("%d",&item);
  	count++;
  	for(i=0;i<n;i++)
  	{
  		 count++;
        	 if(a[i]==item)
        	 {
           		  printf("The element is present");
    			  count++;
            		  break;
          	 }
                 count++;
     	}
     		 if(i==n)
      		 {
        		printf("Element not found");
        		count++;
      		 }
  	printf("Space complexity is %d",20+(4*n));
  	count++;
  	printf("Time complexity is %d",++count);
}
