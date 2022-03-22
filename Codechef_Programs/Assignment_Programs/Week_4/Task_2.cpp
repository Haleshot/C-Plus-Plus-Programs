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

    for(int i = 0; i < length; i++)
    {
        if(c[i] != sentence[i])
        {
            return false;
        }
    }
    return true;
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

        for(int i = 0; i < N; i++)
        {
            if(s[i] > s[i + 1])
            {
                swap(s[i], s[i + 1]);
                break;
            }
        }
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
