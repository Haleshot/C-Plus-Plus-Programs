// Program that checks for Prime Number using function.
#include <iostream>
using namespace std;

int prime_check(int n)
{
    int c = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            c++;
        }
    }
    if(c == 2)
    {
        cout << "Prime Number!";
    }
    else
    {
        cout << "Not a Prime Number!";
    }
}

int main()
{
    cout << "Enter Number" << endl;
    int n;
    cin >> n;

    prime_check(n);

    return 0;
}
