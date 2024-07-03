#include<stdio.h>

struct process
{
    int process_ID, arrival_time,burst_time,completion_time,waiting_time,turn_around_time;
};

void sjf_sheduling(struct process pro [],int n)
{
    int current_time=0, completed=0 ,smallest,next_process;

    for(int i =0;i<n-1;i++)
    {
        for (int j =i+1;j<n;j++)
        {
            if(pro[i].arrival_time > pro[j].arrival_time)
            {
                struct process temp = pro[i];
                pro[i]=pro[j];
                pro[j]=temp;
            }
        }
    }

    current_time= pro[0].arrival_time;

    while(completed<n)
    {
        smallest=9999;
        next_process=-1;

        for(int i =0;i<n;i++)
        {
            if(pro[i].arrival_time<=current_time && pro[i].completion_time==0)
            {
                if(pro[i].burst_time<smallest)
                {
                    smallest=pro[i].burst_time;
                    next_process=i;
                }
            }
        }
        if(next_process == -1)
        {
            current_time++;
        }
        else
        {
            pro[next_process].completion_time = current_time + pro[next_process].burst_time;
            current_time=pro[next_process].completion_time;
            completed++;
        }
    }
    for(int i = 0;i<n; i++)
    {
        pro[i].turn_around_time = pro[i].completion_time - pro[i].arrival_time;
        pro[i].waiting_time = pro[i].waiting_time - pro[i].burst_time;
    }
}

void Average(int n ,struct process pro[])
{
   float total_turn_around_time=0.0 , total_waiting_time=0.0 , Average_waiting_time, Average_turn_around_time;
   for(int i = 0 ; i<n ; i++)
   {
    total_waiting_time=total_waiting_time+pro[i].waiting_time;
    total_turn_around_time=total_turn_around_time+pro[i].turn_around_time;
   } 

   Average_waiting_time=total_waiting_time/n;
   Average_turn_around_time=total_turn_around_time/n;

   printf("\nAverage Waiting Time : %f \n", Average_waiting_time);
   printf("Average Turn Around Time : %f \n", Average_turn_around_time);
}

void Gantt_Chart(int n , struct process pro[])
{
    printf("Gantt Chart:\n");
    printf(" |");
    for (int i = 0; i < n; i++) {
        printf(" P%d |", pro[i].process_ID);
    }
    printf("\n");

    printf("0");
    for (int i = 0; i < n; i++) {
        printf("  %d", pro[i].completion_time);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the number of process : ");
    scanf("%d",&n);
    
    struct process pro[n];

    for(int i=0;i<n;i++)
    {
        pro[i].process_ID=i+1;

        printf("Enter the Arrival Time for process %d : ", pro[i].process_ID);
        scanf("%d",&pro[i].arrival_time);

        printf("Enter the Burst  Time for process %d : ", pro[i].process_ID);
        scanf("%d",&pro[i].burst_time);

        printf("\n");

        pro[i].completion_time=0;
        pro[i].turn_around_time=0;
        pro[i].waiting_time=0;
    }

    sjf_sheduling(pro,n);
    Average(n,pro);
    Gantt_Chart(n,pro);
    return 0;
}