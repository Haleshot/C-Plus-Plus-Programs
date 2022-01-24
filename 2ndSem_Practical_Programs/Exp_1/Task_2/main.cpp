#include <iostream>
using namespace std;

void Sum_Avg(int A[], int n)
{

    int i, sum = 0;
    float avg;
    for(i = 0;i < n; i++)
    {
        sum += A[i];
    }
    avg = sum/n;
    cout << "Sum of Array Elements is = " << sum << endl;
    cout << "Average of Array Elements is = " << avg << endl;
}

void High_Low(int A[], int n)
{

    int i, max = A[0], min = A[0];
    for(i = 0;i < n; i++)
    {
        if(A[i] > max)
        {
            max = A[i];
        }
        if(A[i] < min)
        {
            min = A[i];
        }
    }
    cout << "Max of Array Elements is = " << max << endl;
    cout << "Min of Array Elements is = " << min << endl;
}

int main()
{
    int i, limit, ch;
    bool run = true;
    

    do while(run == true)
    {
        cout << "Enter Limit for Array Elements\n";
        cin >> limit;
        int A[limit];

        cout << "Enter Array Elements\n";
        for(i = 0; i < limit; i++)
        {
            cin >> A[i];
        }

        cout << "Menu\n 1. Sum and Average of Array Elements, \n 2. Maximum and Minimum of Array Elements\n" ;
        cout << "Enter Choice\n" ;
        cin >> ch;
        switch(ch)
        {
            case 1:
                Sum_Avg(A, limit);
                cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
                cin >> run;
                break;
            case 2:
                High_Low(A, limit);
                cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
                cin >> run;
                break;

            default :

                cout << "Invalid Choice" << endl;

        }
    }while (run == true);

    return 0;
}
