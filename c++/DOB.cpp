#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main ()
{
    char dd[10];
    char mm[10];
    char yy[10];
    char dob[10];

    int d;
    int m;
    int y;
    
    cout<<"enter the day of your birth \n enter the mouth of your birth \n enter the year of your birth ";
    cin>>d>>m>>y;
    
    itoa( d, dd, 10);
    itoa(m, mm, 10);
    itoa(y, yy, 10);

    strcpy(dob, dd);
    
    strcat(dob, "-");
    strcat(dob, mm);
    strcat(dob, "-");
    strcat(dob, yy);

    cout<<"Your date of birth is \n" <<dob;
    return 0;

}