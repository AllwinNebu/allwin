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
}
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
      f   
    }
}