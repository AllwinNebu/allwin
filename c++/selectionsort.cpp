#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    int size = 0;
    cout << "Enter size of array \n";
     cin >> size; 
    int n[size];
    cout << "Enter array elements \n";
    for(int i=0; i<size; i++)
    {
        cin >> n[i];
    }
    cout << "Unsorted Array :";
    for(int i = 0; i<size; i++)
    {
        cout << n[i]<<'\t';
    }
    cout << endl;
    int swap;
   for(int i= 0; i<9; i++)
   {
       int hold = n[i];
       bool check = false;
       for(int j =i+1; j<size; j++)
       {
           if( n[j] < hold )
           {
               check = true;
               swap = j;
               hold = n[j];
           }
       }
        if (check)
        {
            n[i]= n[swap] + n[i];
            n[swap]= n[i]-n[swap];
            n[i]=n[i]-n[swap];
        }
   }
    cout << "Sorted Array :";
    for(int i = 0 ; i < size ; i++){cout << n[i] << "\t";}
    return 0;
}