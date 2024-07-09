#include<stdio.h>

struct process 
{
    int process_id,burst_time,priority,waiting_time,turn_around_time;
};

void sort_by_priority (int n , struct process pro[])
{
   int i,j;
   struct process temp;
   for(i=0;i<n-1;i++)
   {
    for(j=i+1;j<n;j++)
    {
        if(pro[i].priority>pro[j].priority)
        {
            temp=pro[i];
            pro[i]=pro[j];
            pro[j]=temp;
        }
    }
   }
}

void calculate_time(int n , struct process pro[] )
{
    int i;
    pro[0].waiting_time=0;
    pro[0].turn_around_time=pro[0].burst_time;

    for(i=1;i<n;i++)
    {
        pro[i].waiting_time=pro[i-1].waiting_time+pro[i-1].burst_time;
        pro[i].turn_around_time=pro[i].waiting_time+pro[i].burst_time;
    }
}

void calculate_Average(int n , struct process pro[])
{
    int i;
    float total_waiting_time=0.0,total_turn_around_time=0.0,Average_waiting_time,Average_turn_around_time;
    for(i=0;i<n;i++)
    {
        total_waiting_time=total_waiting_time+pro[i].waiting_time;
        total_turn_around_time=total_turn_around_time+pro[i].turn_around_time;
    }
    Average_waiting_time=total_waiting_time/n;
    Average_turn_around_time=total_turn_around_time/n;

    printf("\nAverage waiting time : %f",Average_waiting_time);
    printf("\nAverage Turn Around time : %f \n",Average_turn_around_time);
}

void Gantt_Chart(int n, struct process proc[]) {
    int i, j;
  

    
    for (i = 0; i < n; i++) {
        printf("----------");
    }
    printf("\n|");

    
    for (i = 0; i < n; i++) {
        printf(" P%d\t|", proc[i].process_id);
    }
    printf("\n");

   
    for (i = 0; i < n; i++) {
        printf("----------");
    }
    printf("\n");

    
    printf("0");
    for (i = 0; i < n; i++) {
        printf("\t%d", proc[i].turn_around_time);
    }
    printf("\n");
}


int main()
{
    int n;
    printf("Enter the Number of process : ");
    scanf("%d",&n);
    printf("\n");

    struct process pro[n];

    for(int i=0;i<n;i++)
    {
        pro[i].process_id=i+1;
        printf("Enter the Burst time of process %d : ",i+1);
        scanf("%d",&pro[i].burst_time);

        printf("Enter the priority of process %d : ",i+1);
        scanf("%d",&pro[i].priority);

        printf("\n");
    }
    sort_by_priority(n,pro);
    calculate_time(n,pro);
    calculate_Average(n,pro);
    Gantt_Chart(n,pro);
}