
#include <iostream>
#include<cmath>
using namespace std;

int num = 0;
int counter = 1;
int sum = 1;
int d = 0; // for difference
int prev_num = 0;


int main()
{
 

    cout << "Enter number for your Fibonacci sequence:  ";
    cin >> num;
    d = num;
  
    for (sum = 1; sum <= d; prev_num = sum)
    {
        sum = counter + prev_num;
        counter = prev_num;
        d = num - counter;
        
        cout << sum << " ";
    }
}