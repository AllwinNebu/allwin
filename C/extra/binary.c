#include<stdio.h>
int main()
{
	int i,first,last,middle,n,search,count;
	count=0;
	count++;
	printf("Enter the number of elements in the array");
	count++;
	scanf("%d",&n);
	count++;
	int a[n];
  	printf("Enter the array elements");
	count++;
    		for(i=0;i<n;i++)
    		{
      			count++;
      			scanf("%d",&a[i]);
      			count++;
    		}
    	count++;
  	printf("Enter the element to be searched");
  	count++;
  	scanf("%d",&search);
	count++;
  	first=0;
  	count++;
  	last=n-1;
  	count++;
  	middle=(first+last)/2;
  	count++;
    		while(first<=last)
    		{
      			count++;
        		if(a[middle]<search)
        		{
          			first=middle+1;
          			count++;
        		}
        		  	else if(a[middle]==search)
        		  	{
        		  	 printf("%d found at%d",search,middle+1);
          		        count++;
          		        break;
          			}
        		else
        		{  
          			last=middle-1;
          			middle=(first+last)/2;
          			count++;
        		}
        		count++;
    		}    
     			 if(first>last)
      		       	 {  
        			printf("Element not found");
        			count++;
      			 }
  	printf("Space complexity is %d",28+(n*4));
  	count++;
  	printf("Time complexity is %d",++count);
}
