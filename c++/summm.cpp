#include<iostream>
using namespace std;
int main(){
    int sum=0, num,r;
    cout <<"Enter the number to give the sum";
    cin>>num;
    int num2 =  num;
    do{
        r=num%10;
        sum=sum+ r;
        num = num/10;
    } while (num>0);

    cout<<sum;
    return 0;
}