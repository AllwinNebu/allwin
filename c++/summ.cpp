#include<iostream>
using namespace std;
int main()
{
    int i,sum=0,n;
    cout<<"Enter the stuff : ";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        sum=sum+i*i;
    }
    cout<<"the sum is \n"<<sum;
    return 0;

}