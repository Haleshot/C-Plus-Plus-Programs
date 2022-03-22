#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        char terms, c1[n], c2[n];
        int counter = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> terms;
            c1[i] = terms;
            c2[i] = terms;
        }
        sort(c1, c1 + n);
        for(int i = 0; i < n; i++)
        {
            if(c1[i] != c2[i])
            {
                counter++;
            }
        }
        if(counter == 0 || counter == 2)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }

    }
    return 0;
}