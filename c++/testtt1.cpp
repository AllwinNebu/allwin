#include<iostream>
using namespace std;
int main()
{
    int a,b,c; 
    cout<<"Enter three numbers to find the greatest";
    cin>>a>>b>>c;

    if (a>b&&a>c)
    {
        cout <<a<<"Is the greatest";
    }
    else if(b>c)
    {
        cout<<b<<"Is the greatest";
    }
    else
    {
        cout<<c<<"Is the greatest";
    }
    return 0;
}