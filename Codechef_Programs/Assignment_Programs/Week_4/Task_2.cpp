#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


bool IsAlphabeticalOrder(string sentence, int length)
{
    char c[length];
    for(int i = 0; i < length; i++)
    {
        c[i] = sentence[i];
    }

    sort(c, c + length);
    int counter = 0;

    for(int i = 0; i < length; i++)
    {
        if(c[i] != sentence[i])
        {
            counter++;
        }
    }
    if(counter == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int N;
        cin >> N;
        string s;
        cin >> s;

        if(IsAlphabeticalOrder(s, N))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
