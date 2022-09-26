#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"pograme to print the days in the week \n";
    cout<<"Enter the number to print the day of the week";
    cin>>day;
    switch(day)
    {
        case 1 : cout<<"Sunday";
                 break;
        case 2 : cout<<"monday";
                 break;
        case 3 : cout<<"Tuesday";
                 break;
        case 4 : cout<<"Wednesday";
                 break;
        case 5 : cout<<"Thursday";
                 break;
        case 6 : cout<<"Friday";
                 break;
        case 7 : cout<<"Saturday";
                 break;
                           
    }
}