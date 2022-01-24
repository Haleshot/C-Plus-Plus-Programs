// Program that calculates Factorial of a number entered with function.
#include <iostream>
using namespace std;


int factorial(int n)
{
    if(n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter Number" << endl;
    cin >> n;
    cout << "Factorial of " << n << " is = " << factorial(n);
    return 0;
}
