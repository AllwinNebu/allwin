#include <stdio.h>

void find_waiting_time(int processes[],int n, int burst_time[], int arrival_time[] , int waiting_time[])
{
    int service_time[n];
    service_time[0]=arrival_time[0];
    
    waiting_time[0]=0;

    for( int i = 1;i<n;i++)
    {
        service_time[i]=service_time[i-1]+burst_time[i-1];

        waiting_time[i]=service_time[i]-arrival_time[i];

        if(waiting_time<0)
        {
            waiting_time=0;
        }
    }
}


void find_turn_around_time(int processes[], int n , int burst_time[], int waiting_time[], int turn_around_time[])
{
    for(int i = 0;i<n;i++)
    {
        turn_around_time[i]=burst_time[i]+waiting_time[i];
    }
}


void GanttChart(int processes[],int n, int burst_time[], int arrival_time[])
{
    int waiting_time[n],turn_around_time[n],start_time[n],end_time[n];

    find_waiting_time(processes,n,burst_time,arrival_time,waiting_time);
    find_turn_around_time(processes,n,burst_time,waiting_time,turn_around_time);

    for(int i = 0; i<n;i++)
    {
        if(i== 0)
        {
            start_time[i]= arrival_time[i];
        }

        else
        {
            start_time[i]=end_time[i-1];
        }

        end_time[i]=start_time[i]+burst_time[i];
    }
     
  printf("\n Gantt Chart \n");
  printf(" ");

  for(int i =0;i<n;i++)
  {
    printf("--------");
  }
  printf("\n |");

  for(int j =0;j<n ; j++)
  {
    printf("p %d |",processes[j]);
  }
  printf("\n");

  for(int i =0;i<n;i++)
  {
    printf("--------");
  }
  printf("\n");

  for(int i = 0;i<n;i++)
  {
    printf("%d    ", start_time[i]);
  }
  printf("%d \n " , end_time[n-1]);
    
}

void find_Average_Time(int n, int processes[], int burst_time[], int arrival_time[])
{
   int waiting_time[n], turn_around_time[n];
   float total_waiting_time=0.0, total_turn_around_time = 0.0;

   find_waiting_time(processes,n,burst_time,arrival_time,waiting_time);

   find_turn_around_time(processes,n,burst_time,waiting_time,turn_around_time);

   for(int i =0;i<n;i++)
   {
    total_turn_around_time=total_turn_around_time+turn_around_time[i];
    total_waiting_time=total_waiting_time+waiting_time[i];
   }

    float Average_waiting_time = total_waiting_time /n;
    float Average_turn_around_time = total_turn_around_time/n;

   printf("Average waiting time : %f \n" , Average_waiting_time);
   printf("Average Turn Around Time : %f \n", Average_turn_around_time);

   GanttChart(processes,n,burst_time,arrival_time);
}


int main()
{
    int n ;
    printf("Enetre the Number of process : ");
    scanf("%d" , &n);
    printf("\n");

    int burst_time[n], arrival_time[n],processes[n];

    for (int i = 0;i<n;i++)
    {
        processes[i]=i+1;

        printf("Enter burst time for process %d: ", i + 1);
        scanf("%d", &burst_time[i]);

        printf("Enter Arrival time for process %d: ", i + 1);
        scanf("%d", &arrival_time[i]);
        printf("\n");
    }
    find_Average_Time(n,processes,burst_time,arrival_time);
    return 0;
}