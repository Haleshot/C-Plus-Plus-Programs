#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter number for Special friends" << endl;
    cin >> n;
    int list[n];

    cout << "Enter the total number of posts" << endl;
    cin >> m;

    int id[m], pop[m], pop_sort[m], pop_sp_sort[n];
    string s[m];

    cout << "Enter the identifiers of Special friends" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> list[i];
    }
    
    cout << "Enter the identifiers of friends, the popularity of the posts and the contents of the posts:" << endl;
    for(int i = 0; i < m; i++)
    {
        cin >> id[i] >> pop[i] >> s[i];
    }

    for (int i = 0; i < m; i++)
    {
        for(int j = 0; i < n; j++)
            {
                if(id[i] != list[j])
                {
                    pop_sort[i] = pop[i];
                }
            }
    }

    for(int i = 0; i < m; i++)
    {
        sort(pop_sort, pop_sort + m, greater<int>());
    }

    for (int i = 0; i < m; i++)
    {
        for(int j = 0; i < n; j++)
            {
                if(id[i] == list[j])
                {
                    pop_sp_sort[j] = pop[i];
                }
            }
    }

    for(int i = 0; i < n; i++)
    {
        sort(pop_sp_sort, pop_sp_sort + n, greater<int>());
    }
                
    for(int i = 0; i < n; i++)
    {
        cout << pop_sp_sort[i] << endl;
    }
    for(int j = 0; j < m; j++)
    {
        cout << pop_sp_sort[j] << endl;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int t = j;
            int max = pop_sp_sort[i];
            if(id[j] == list[i])
            {
                int t = 0;
                if(max == pop[j])
                {
                    cout << s[j] << endl;
                }
                else
                {
                    t += 1;
                }
            }
        }
    }


    return 0;
}