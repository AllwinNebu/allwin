#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Program to find the gretest number\n";
    cout<<"enter three numbers";
    cin>>a>>b>>c;
    if(a>b&&a>c)
        cout<<a<<"i bigger";
    else if(b>c)
        cout<<b<<"is bigger";
    else
        cout<<c<<"is bigger";
return 0;
}