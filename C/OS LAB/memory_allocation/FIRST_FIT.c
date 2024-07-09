#include<stdio.h>
void main()
{
    int bsize[10],psize[10],bno,pno,flag[10],allocation[10],i,j;
    for(i=0;i<10;i++)
    {
        flag[i]=0;
        allocation[i]=-1;
    }
    printf("Enter the number of blocks : \n");
    scanf("%d",&bno);
    for(i=0;i<bno;i++)
    {
        printf("Enter the %d block : \n",i+1);
        scanf("%d",&bsize[i]);
    }
    printf("Enter the number of process : \n");
    scanf("%d",&pno);
    for(i=0;i<pno;i++)
    {
        printf("Enter the %d process : \n",i+1);
        scanf("%d",&psize[i]);
    }
    for(i=0;i<pno;i++)
    {
        for(j=0;j<bno;j++)
        {
            if(bsize[j] >= psize[i])
            {
               allocation[i]=j;
               bsize[j]-=psize[i];
               break;
            }
        }
    }
    printf("\n Process number \t process size \t block no\n");
    for(i=0;i<pno;i++)
    {
        printf("%d\t\t\t %d \t\t\t",i+1,psize[i]);
        if(allocation[i]!=-1)
        {
            printf("%d\n",allocation[i]+1);
        }
        else
        {
            printf("Not allocated\n");
        }
    }
}