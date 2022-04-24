#include <iostream>
#include <math.h>
#include <cstring>
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
    int terms = pow(T, 2);
    while(T--)
    {
            long terms_1, terms_2, terms_3;
            int a1[3], a2[3], a3[3], check_1 = 0, check_2 = 0, check_3 = 0;
            for(int i = 0; i < 3; i++)
            {
                a1[i] = a1[i];
            }
            for(int i = 0; i < 3; i++)
            {
                a2[i] = a2[i];
            }
            for(int i = 0; i < 3; i++)
            {
                a3[i] = a3[i];
            }

            check_1 = Check(a1, a2);
            check_2 = Check(a2, a3);
            check_3 = Check(a3, a1);

            if((check_1 + check_2 + check_3) == 3)
            {
                cout << "yes";
            }
            else
            {
                cout << "no";
            }
    }
    return 0;
}