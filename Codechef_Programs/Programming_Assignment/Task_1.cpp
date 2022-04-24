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

    if(Array_1[0] >= Array_2[0] && Array_1[1] >= Array_2[1] && Array_1[2] >= Array_2[2])
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
            int check_1 = 0, check_2 = 0, check_3 = 0;

            for(int i = 0; i < T; i++)
            {
                cin >> terms_1;
                cin >> terms_2;
                cin >> terms_3;
            }
            string list_1 = to_string(terms_1);
            string list_2 = to_string(terms_2);
            string list_3 = to_string(terms_3);

            int n;

            char array_1[3], array_2[3], array_3[3];

            strcpy(array_1, list_1.c_str());
            strcpy(array_2, list_2.c_str());
            strcpy(array_3, list_3.c_str());

            int Array_1[n], Array_2[n], Array_3[n];
            for(int i = 0; i < 3; i++)
            {
                Array_1[i] = int(array_1[i]);
            }
            for(int i = 0; i < 3; i++)
            {
                Array_2[i] = int(array_2[i]);
            }
            for(int i = 0; i < 3; i++)
            {
                Array_3[i] = int(array_3[i]);
            }

            check_1 = Check(Array_1, Array_2);
            check_2 = Check(Array_2, Array_3);
            check_3 = Check(Array_3, Array_1);

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