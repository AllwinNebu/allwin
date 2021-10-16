#include <iostream>
using namespace std;
int main()
{
    int n,i,a[i];
    int s=0;
    cout<<"enter the limit";
    cin>>n;
    cout <<"enter the number in the array";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    cout<<"sum is "<<s;
    return 0;
}    