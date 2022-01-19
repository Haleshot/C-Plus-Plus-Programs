#include<iostream>
using namespace std;
int main()
{
    int limit;
    cout << "Enter Limit\n";
    cin >> limit;
    int A[limit][limit];
    int B[limit][limit];
    int product[limit][limit];

    cout << "Enter Element of List A\n";
    cout << "Enter Element of List B\n";

    for (int i = 0; i < limit; i++)
    {
        for (int j = 0; j < limit; j++)
        {
            cin >> A[i][j];
            cin >> B[i][j];
        }
    }


    cout << "Array A = \n";

    for (int i = 0; i < limit; i++)
    {
        for (int j = 0; j < limit; j++)
        {
            cout << "\t";
            cout << A[i][j];
            cout << "\t";
        }
        cout << endl;
    }

    cout << "Array B = \n";

    for (int i = 0;i < limit;i++)
    {
        for (int j = 0; j < limit; j++)
        {
            cout << "\t";
            cout << B[i][j];
            cout << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < limit; i++)
    {
        for (int j = 0; j < limit; j++)
        {
            product[i][j] = {0};
            for (int k = 0; k < limit; k++)
            {
                product[i][j] += A[i][k] * B[k][j];
            }
        }
    }


    cout << "Multiplication of Matrices A and B \n";

    for (int i = 0; i < limit; i++)
    {
        for (int j = 0; j < limit; j++)
        {
            cout << "\t";
            cout << product[i][j];
            cout << "\t";
        }
        cout << endl;
    }

    return 0;
}
