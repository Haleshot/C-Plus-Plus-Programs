#include <iostream>
using namespace std;


int factorial(int n)
{
    if(n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int fib(int n)
{
    if(n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }

}

int main()
{
    int ch;
    bool run = true;
    do
    {
    
        cout << "Menu \n 1. Factorial of a Number \n 2. Fibonacci series \n Enter your choice \n"  << endl;
        cin >> ch;

        if (ch == 1)
        {
            int n;
            cout << "Enter Number" << endl;
            cin >> n;
            cout << "Factorial of " << n << " is = " << factorial(n);
            cout << "\nWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        else if(ch == 2)
        {
            int n;
            cout << "Enter Fibonacci Number" << endl;
            cin >> n;
            int i = 0;

            while (i < n)
            {
                cout << fib(i) << " ";
                i += 1;
            }
            cout << "\nWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
            
            
        }
        else
        {
            cout << "Invalid Choice!" << endl;
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
    } while(run == true);
    return 0;
}
