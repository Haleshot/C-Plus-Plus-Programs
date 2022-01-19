#include <iostream>
using namespace std;


void swap(int *x, int *y);

int main()
{
    int a, b;
    cout << "Enter the two values\n" << endl;
    cin >> a >> b;

    cout<<"\nBefore Swapping Two Numbers: \t" << a << ", " << b;
    swap(&a, &b);
    cout<<"\nAfter Swapping Two Numbers: \t" << a << ", " << b;

    return 0;
}
void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
