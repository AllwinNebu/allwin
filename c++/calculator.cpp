# include <iostream>
using namespace std;
int main()
 {
    char op;
    double num1=0, num2;
    cout << "Enter operator your option \n";
    cout<< " + for addition \n - for substraction \n * for mutiplication \n / for division \n";
    cin >> op;
    cout << "Enter two enter numbrer:  \n";
    cin >> num1 >> num2;

    switch(op) 
    {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;

        default:
            cout << "please enter the given option";
            break;
    }

    return 0;
}