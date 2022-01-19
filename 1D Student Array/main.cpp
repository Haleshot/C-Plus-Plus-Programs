#include <iostream>
using namespace std;
int main()
{
    int limit;
    cout << "Enter Limit\n";
    cin >> limit;
    int sum = 0, x1 = 0, x2 = 0;
    float Marks[limit], l1[limit], l2[limit], avg;

    cout << "Enter Marks of Students\n";
    for (int i = 0;i < limit;i++)
    {
        cin >> Marks[i];
        sum += Marks[i];
    }
    avg = sum/ limit;

    for (int i = 0;i < limit;i++)
    {
        if (Marks[i] > avg)
        {
            l1[x1] = Marks[i];
            x1++;
        }

        if (Marks[i] < avg)
        {
            l2[x2] = Marks[i];
            x2++;
        }
    }

    cout << "\nThe Marks of Students greater than average marks respectively is given below: \n";

    for (int i = 0;i < x1;i++)
    {
        cout << l1[i] << endl;
    }
    cout << endl;
    cout << endl;
    cout << "The Marks of Students less than average marks respectively is given below: \n";
    for (int i = 0;i < x2;i++)
    {
        cout << l2[i] << endl;
    }

    return 0;
}
