#include <iostream>
using namespace std;

int main() 
{
    long t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        long n;
        cin >> n;

        long max = 0, terms;
        bool duplicate = false;
        for(long i = 0; i < n; i++)
        {
            cin >> terms;
            if(terms == max)
            {
               duplicate = true; 
            }
            if(terms > max)
            {
                max = terms;
                duplicate = false;
            }
        }
        if(duplicate)
        {
            cout<<"fight:(\n" << endl;;
        }
        else
        {
            cout<<"peace:)\n" << endl;
        }
    }
    return 0;
}
