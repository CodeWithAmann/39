#include <iostream>
using namespace std;
int main()
{
    int a, b, choice;
    cout << "ENTER YOUR CHOICE WHAT YOU WANT !!!!!" << endl;
    cout<<" 1. ADDITION \n"<<" 2. SUBTRACTION \n"<<" 3. MULTIPLICATION \n"<<" 4. DIVISION "<<endl;
   // cout << " 1. ADDITION \n"
   //    << " 2. SUBTRACTION \n"
   //      << " 3. MULTIPLICATION \n"
   //     << " 4. DIVISION " << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        cout << "Enter two number for Addition " << endl;
        cout << "Enter 1st number :- " << endl;
        cin >> a;
        cout << "Enter 2nd number :- " << endl;
        cin >> b;
        int sum = a + b;
        cout << "The sum of " << a << " and " << b << " is " << sum << endl;
        break;
    }

    case 2:
    {
        cout << "Enter two number for Subtraction " << endl;
        cout << "Enter 1st number :- " << endl;
        cin >> a;
        cout << "Enter 2nd number :- " << endl;
        cin >> b;
        int subtract = a - b;
        cout << "The subtract of " << a << " and " << b << " is " << subtract << endl;
        break;
    }
    case 3:
    {
        cout << "Enter two number for Multiplication " << endl;
        cout << "Enter 1st number :- " << endl;
        cin >> a;
        cout << "Enter 2nd number :- " << endl;
        cin >> b;
        int multiply = a * b;
        cout << "The multiply of " << a << " and " << b << " is " << multiply << endl;
        break;
    }

    case 4:
    {
        cout << "Enter two number for Division " << endl;
        cout << "Enter 1st number :- " << endl;
        cin >> a;
        cout << "Enter 2nd number :- " << endl;
        cin >> b;
        int divide = a / b;
        cout << "The divide of " << a << " and " << b << " is " << divide << endl;
        break;
    }
    default:
        cout << "SORRY !!!!!!!!!!!! YOU HAVE ENTER INVALID INPUT " << endl;
        break;
    }
    return 0;
}
