#include <iostream>
using namespace std;

int Check(int Array_1[], int Array_2[])
{
    if(Array_1[0] <= Array_2[0] && Array_1[1] <= Array_2[1] && Array_1[2] <= Array_2[2])
    {
        if(Array_1[0] < Array_2[0] || Array_1[1] < Array_2[1] || Array_1[2] < Array_2[2])
        {
            return 1;
        }
    }

    else if(Array_1[0] >= Array_2[0] && Array_1[1] >= Array_2[1] && Array_1[2] >= Array_2[2])
    {
        if(Array_1[0] > Array_2[0] || Array_1[1] > Array_2[1] || Array_1[2] > Array_2[2])
        {
            return 1;
        }
    }

    else
    {
        return 0;
    }
}

int main()
{
    int T;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
            int a1[3], a2[3], a3[3], c_1 = 0, c_2 = 0, c_3 = 0;
            cout << "Enter the Numbers 1 : " << endl;
            for(int i = 0; i < 3; i++)
            {
                cin >> a1[i];
            }
            cout << "Enter the Numbers 2 : " << endl;
            for(int i = 0; i < 3; i++)
            {
                cin >> a2[i];
            }
            cout << "Enter the Numbers 3 : " << endl;
            for(int i = 0; i < 3; i++)
            {
                cin >> a3[i];
            }

            c_1 = Check(a1, a2);
            c_2 = Check(a2, a3);
            c_3 = Check(a3, a1);

            if((c_1 + c_2 + c_3) == 3)
            {
                cout << "yes\n";
            }
            else
            {
                cout << "no\n";
            }
    }
    return 0;
}