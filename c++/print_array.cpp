#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter the size of the array \n"; 
     cin>>n;
     int a[n];
     int i;
     cout<<"enter the element in the array \n";
     for(i=0;i<n;i++)
     {
         cin>>a[i];
     }
     cout<<"the elements in the array are \n";

     for ( i = 0; i < n; i++)
     {
         cout<<a[i];
     }
     
     return 0;

}