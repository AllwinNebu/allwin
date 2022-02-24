#include<iostream>
using namespace std;
int main()
{
    int a ;
    int b;
    int c;
    int n;
    int i;
    cout<<"Enter the number of terms in the fibinocci series";
    cin>>n;
    cout<<"Fibinoicci series : \n";
    for (i=0;i<n;i++)
    {
        cout<<"\t"<<a;
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}