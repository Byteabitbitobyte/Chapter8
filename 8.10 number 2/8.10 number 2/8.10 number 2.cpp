#include <iostream>
using namespace std;

int main()
{
    int number;
    unsigned long long factorial = 1;

    cout << "Enter a positive number between 2 and 25: ";
    cin >> number;

    for (int i = 1; i <= number; ++i)
    {
        factorial *= i;
    }

 
    if (number >= 2 && number <= 25)
    {
        cout << "Factorial of " << number << " = " << factorial;
    }
    else
    {
        cout << "Error please enter one number between 2 and 25 ";
    }




    return 0;
}