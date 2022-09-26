#include<iostream>
using namespace std;
int main(){

    int n, dig, rev=0, num;
    cout<<"Enter the number to fing the palindrome : ";
    cin>>num;

    n=num;

   do{
       dig=num%10;
       rev=(rev*10)+dig;
       num=num/10;
   }  while(num!=0);
    cout << "the reverse of the number is "<<rev <<"\n";

    if(n==rev)
    {
        cout<<"plaindrome";
    }
    else
    {
        cout<<"not a palindrome";
    }
    return 0;
}