#include<stdio.h>
#define MAX_BLOCK 100
#define MAX_PROCESS 100
#define NEXT_LINE printf("\n")

struct block
{
    int size,is_allocated;
};

void first_fit(struct block blocks[MAX_BLOCK],int n, int process_size)
{
   for(int i =0;i<n;i++)
   {
    if (!blocks[i].is_allocated && blocks[i].size>=process_size)
    {
        blocks[i].is_allocated=1;
        printf("Process of size %d allocated to block %d of size %d\n", process_size, i, blocks[i].size);
        NEXT_LINE;
        return;
    }
    printf("Process of size %d could not be allocated\n", process_size);
    NEXT_LINE;
   }
}

int main()
{
    struct block blocks[MAX_BLOCK];
    int n ,m,process_size[MAX_PROCESS];
    
    printf("Enter the number of memeory blocks : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
      printf("Enter the block %d : ",i+1);
      scanf("%d",&blocks[i].size);
      blocks[i].is_allocated=0;
      NEXT_LINE;
    }

    printf("Enter the number of process : ");
    scanf("%d",&m);

    for(int i=0;i<n;i++)
    {
       printf("Enter the process %d : ",i+1);
       scanf("%d",&process_size[i]);
       NEXT_LINE;
    }

    for(int i=0;i<n;i++)
    {
        first_fit(blocks,n,process_size[i]);
    }
    return 0;
}