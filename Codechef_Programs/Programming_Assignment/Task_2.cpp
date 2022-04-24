#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N, sum = 0;
        cin >> N;
        int A[N], Topper[N], Sort[N], Diff[N];
        int  backlog_counter = 0;
        double avg;
        for(int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        int Max = A[0], Min = A[0];
        

        for (int i = 0; i < N; i++)
        {
            if(A[i] < 31)
            {
                backlog_counter++;
            }
        }
        cout << backlog_counter << " ";
        for (int i = 0; i < N; i++)
        {
            
            if(A[i] >= 31)
            {
                sum += A[i];
            }
        }
        avg = sum/ N;
        cout << setprecision(2) << avg << endl;

        for (int i = 0; i < N; i++)
        {
            
            if(A[i] > Max)
            {
                Max = A[i];
            }
        }

        for (int i = 0; i < N; i++)
        {
            Sort[i] = A[i];
        }

        sort(Sort, Sort + N);
        for (int i = 0; i < N; i++)
        {
            if(Max == A[i])
            {
                cout << i << endl;
            }
        }
        for (int i = 0; i < N; i++)
        {
            Diff[i] = Max - A[i];
        }

        for (int i = 0; i < N; i++)
        {
            cout << Diff[i] << endl;
        }

        

        

    }
    return 0;
}