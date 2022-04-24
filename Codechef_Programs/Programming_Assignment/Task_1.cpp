#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int terms = pow(T, 2);
    while(T--)
    {
        long terms_1, terms_2, terms_3;
        int c = 0;

        for(int i = 0; i < T; i++)
        {
            cin >> terms_1;
            cin >> terms_2;
            cin >> terms_3;
        }
        if(terms_1 == terms_2 || terms_1 == terms_3 || terms_2 == terms_3)
        {
            cout << "no";
        }
        else
        {
            string list_1 = to_string(terms_1);
            string list_2 = to_string(terms_2);
            string list_3 = to_string(terms_3);

            int n;
            n = list_1.length();

            char array_1[n + 1], array_2[n], array_3[n];

            strcpy(array_1, list_1.c_str());
            strcpy(array_2, list_2.c_str());
            strcpy(array_3, list_3.c_str());

            int Array_1[n], Array_2[n], Array_3[n];
            for(int i = 0; i < n; i++)
            {
                Array_1[i] = int(array_1[i]);
            }
            for(int i = 0; i < n; i++)
            {
                Array_2[i] = int(array_2[i]);
            }
            for(int i = 0; i < n; i++)
            {
                Array_3[i] = int(array_3[i]);
            }

        }
    }
    return 0;
}