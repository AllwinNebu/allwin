#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int c;
    int n;
    int i;

    cout<<"Enter the numner of terms in series :  ";
    cin>>n;
    cout<<"Fibinocci Series : \n";

    for(i=0; i<n; i++)
    {
        cout<<"\t"<<a;
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}