#include<iostream>
using namespace std;
int main()
{
    int limit;
    cout << "Enter Limit\n";
    cin >> limit;
    int A[limit][limit];
    int B[limit][limit];

    cout << "Enter Element of List A\n";
    cout << "Enter Element of List B\n";

    for (int i = 0;i < limit;i++)
    {
        for (int j = 0;j < limit;j++)
        {
            cin >> A[i][j];
            cin >> B[i][j];
        }
    }

    cout << "Matrices A and B \n";

    cout << "Array A = \n";
    for (int i = 0;i < limit;i++)
    {
        for (int j = 0;j < limit;j++)
        {
            cout << "\t";
            cout << A[i][j];
            cout << "\t";
        }
        cout << endl;
    }

    cout << "Array B is = \n";
    for (int i = 0;i < limit;i++)
    {
        for (int j = 0;j < limit;j++)
        {
            cout << "\t";
            cout << B[i][j];
            cout << "\t";
        }
        cout << endl;
    }

    cout << "\n\nMatrices A' and B'\n";
    for (int i = 0;i < limit;i++)
    {
        for (int j = 0;j < limit;j++)
        {
            int temp = 0;

            if ((i + j) % 2 == 1)
            {
                if (i > j)
                {
                    temp = A[i][j];
                    A[i][j] = A[i - 1][j + 1];
                    A[i - 1][j + 1] = temp;
                }
            }
        }
    }

    for (int i = 0;i < limit;i++)
    {
        for (int j = 0;j < limit;j++)
        {
            int temp = 0;

            if ((i + j) % 2 == 1)
            {
                if (i > j)
                {
                    temp = B[i][j];
                    B[i][j] = B[i - 1][j + 1];
                    B[i - 1][j + 1] = temp;
                }
            }
        }
    }

    cout << "Array A' is = \n";
    for (int i = 0;i < limit;i++)
    {
        for (int j = 0;j < limit;j++)
        {
            cout << "\t";
            cout << A[i][j];
            cout << "\t";
        }
        cout << endl;
    }

    cout << "Array B' is = \n";
    for (int i = 0;i < limit;i++)
    {
        for (int j = 0;j < limit;j++)
        {
            cout << "\t";
            cout << B[i][j];
            cout << "\t";
        }
        cout << endl;
    }


    return 0;
}

