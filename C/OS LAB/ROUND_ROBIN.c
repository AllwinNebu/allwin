#include<stdio.h>

void find_waiting_time(int n,int waiting_time[],int burst_time[],int quantum)
{
    int remaining_burst_time[n];
    for(int i=0;i<n;i++)
    {
        remaining_burst_time[i]=burst_time[i];
    }
    int t=0;

    while(1)
    {
        int done =1;
        for(int i =0;i<n;i++)
        {
            if(remaining_burst_time[i]>0)
            {
               done=0;
               if(remaining_burst_time[i]>quantum)
               {
                 t=t+quantum;
                 remaining_burst_time[i]=remaining_burst_time[i]-quantum;
               }
               else
               {
                t=t+remaining_burst_time[i];
                waiting_time[i]=t-burst_time[i];
                remaining_burst_time[i]=0;
               }
            }
        }
        if(done==1)
        {
            break;
        }
    }
}

void find_turn_around_time(int n,int waiting_time[],int burst_time[],int turn_around_time[])
{
    for(int i = 0;i<n;i++)
    {
        turn_around_time[i]=burst_time[i]+waiting_time[i];
    }
}

void calculate_average_time(int n,int burst_time[],int quantum)
{
    int waiting_time[n],turn_around_time[n];

    float total_turn_around_time=0.0,total_waiting_time=0.0, Average_waiting_time, Average_turn_around_time;

    find_waiting_time(n,waiting_time,burst_time,quantum);
    find_turn_around_time(n,waiting_time,burst_time,turn_around_time);

    for(int i =0;i<n;i++)
    {
        total_turn_around_time=total_turn_around_time+turn_around_time[i];
        total_waiting_time=total_waiting_time+waiting_time[i];
    }

   Average_waiting_time=total_waiting_time/n;
   Average_turn_around_time=total_turn_around_time/n;

   printf("\nAverage Waiting Time : %f ", Average_waiting_time);
   printf("Average Turn Around Time : %f ", Average_turn_around_time);
   printf("\n");
}

void Gantt_chart(int n,int burst_time[],int quantum)
{
   int remaining_burst_time[n];
    for(int i=0;i<n;i++)
    {
        remaining_burst_time[i]=burst_time[i];
    }
    int t=0;
     while(1)
    {
        int done =1;
        for(int i =0;i<n;i++)
        {
            if(remaining_burst_time[i]>0)
            {
               done=0;
               if(remaining_burst_time[i]>quantum)
               {
                 t=t+quantum;
                 remaining_burst_time[i]=remaining_burst_time[i]-quantum;
                 printf(" P%d |", i + 1);
               }
               else
               {
                t=t+remaining_burst_time[i];
                remaining_burst_time[i]=0;
                printf(" P%d |", i + 1);
               }
            }
        }
        if(done==1)
        {
            break;
        }
    } 
}

int main()
{
    int n;
    printf("Enter the number of process : " );
    scanf("%d",&n);

    int burst_time[n];

    for(int i = 0;i<n;i++)
    {
        printf("\nEnter the Burst time of process %d : ",i+1);
        scanf("%d",&burst_time[i]);
        printf("\n");
    }

    int quantum;

    printf("\nEnter time Quantum : ");
    scanf("%d",&quantum);
    printf("\n");

    calculate_average_time(n,burst_time,quantum);
    Gantt_chart(n,burst_time,quantum);

    return 0;
}