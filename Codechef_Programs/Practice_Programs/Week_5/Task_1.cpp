#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter number for Special friends" << endl;
    cin >> n;
    int list[n], list_sort[n];


    cout << "Enter the total number of posts" << endl;
    cin >> m;

    int id[m], pop[m], pop_sort[m];
    string s[m];

    cout << "Enter the identifiers of Special friends" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> list[i];
    }
    for(int i = 0; i < n; i++)
    {
        list_sort[i] = list[i];
    }
    
    cout << "Enter the identifiers of friends, the popularity of the posts and the contents of the posts:" << endl;
    for(int i = 0; i < m; i++)
    {
        cin >> id[i] >> pop[i] >> s[i];
    }

    for(int i = 0; i < n; i++)
    {
        pop_sort[i] = pop[i];
    }

    for(int i = 0; i < m; i++)
    {
        sort(pop_sort, pop_sort + m, greater<int>());
    }

    
    for(int i = 0; i < n; i++)
    {
        sort(list_sort, list_sort + n, greater<int>());
    }

    int l = 0;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(id[i] == list[j])
            {
                int t = 0;
                while(pop[t] < pop_sort[l])
                {
                    t += 1;
                }
                cout << s[t] << endl;
                l += 1;
            }
        }
    }

    int q = 0;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(id[i] != list[j])
            {
                int t = 0;
                while(pop[t] < pop_sort[q])
                {
                    t += 1;
                }
                cout << s[t] << endl;
                q += 1;
            }
        }
    }


    return 0;
}