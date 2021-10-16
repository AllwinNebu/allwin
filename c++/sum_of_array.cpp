#include<iostream>
using namespace std;
int main()
{
     int n; 
     int sum;

     cout<<"Enter the size of the array \n"; 
     cin>>n;

     int a[n]; 
     int i;   

     cout<<"enter the element in the array \n";
     for(i=0;i<n;i++)
     {
         cin>>a[i];
     }

     for(i=0;i<n;i++)
     {
         sum=sum+a[i]; 
     }

       cout<<"sum is \n";
       cout<<sum;

     return 0;
}     