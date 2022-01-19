#include<iostream>
#include <math.h>>
using namespace std;
int main()
{
    int r, c, n, k, l;
    cout << "Enter Limit \n";
    cin >> n;

    for (r = 1; r <= n; r++)
    {
        for (c = 1; c <= n - r; c++)

        {
            cout << "  ";

        }
        for (k = 1; k <= r; k++)
        {
            cout << char(k + 64) << " " ;
        }
        for (l = r- 1; l >= 1; l--)
        {
            cout << char(l + 64) << " " ;
        }

        cout << endl;
    }

    return 0;
}
