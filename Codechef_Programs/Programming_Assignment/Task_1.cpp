#include <iostream>
#include <math.h>
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
        /*if(terms_1 > terms_2)
        {
            if(terms_1 > terms_3)
            {
                return terms_1;
            }
            else
            {
                return terms_3;
            }
        }
        else if(terms_2 > terms_1)
        {
            if(terms_2 > terms_3)
            {
                return terms_2;
            }
            else
            {
                return terms_3;
            }
        }
        else if(terms_3 > terms_1)
        {
            if(terms_3 > terms_2)
            {
                return terms_3;
            }
            else
            {
                return terms_2;
            }
        }*/
    }
    return 0;
}