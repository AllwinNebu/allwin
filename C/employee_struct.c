#include <stdio.h>
#include<string.h>
 
struct employee{
    char    members_name[30];
    int     e_id;
    float   salary;
};
 
int main()
{
  int n;
  printf("Enter the number of employees : ");
  scanf("%d",&n);                              
  struct employee emp[30];
  for(int j =0 ; j<n; j++)                      
  {
    printf("Enter employee name :");
    scanf("%s",emp[j].members_name);
    printf("Enter employee ID : ");
    scanf("%d", &emp[j].e_id);
    printf("Enter employee Salary : ");
    scanf("%f",&emp[j].salary);
    getchar();                                 

  }
  int i =0;
  while(i<n){                                   
    printf("Name : %s \n",emp[i].members_name);
    printf("ID : %d \n",emp[i].e_id);
    printf("Salary %f \n",emp[i].salary);
    i++;
  }
  return 0;
}
