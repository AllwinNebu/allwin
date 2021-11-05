#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

struct sales_data
{
    int code;
    char name[20];
    float amt[12];
    float avg;
};
int main()
{
    sales_data s[20];
    short n,i,j;
    float sum;
    cout<<"Enter the number of salesman";
    cin>>n;
    for (i=0; i<n; i++)
    {
      cout <<"Enter the detail of the salesman  " <<i+1;
      cout<<"\nSalesman code: ";
      cin>>s[i].code;
      fflush(stdin);
      cout<<"Name: ";
      gets(s[i].name);
      cout<<"Amout of sales in 12 months: ";
      for(sum=0,j=0; j<12; j++)
      {
        cin>>s[i].amt[j];
        sum=sum+s[i].amt[j];
      }
      s[i].avg=sum/12;
    }
    cout<<"\t\tDetail of Sales\n";
    cout<<"Code \t\tName \t\tAverage Sales\n";
    for(i=0;i<n;i++)
    {
      cout<<setw(4)<<s[i].code<<setw(15)<<s[i].name;
      for (j=0;j<12;j++)
      {
        cout<<setw(4)<<s[i].amt[j];
      }
      cout<<s[i].avg<<'\n';
    }
    return 0;
}