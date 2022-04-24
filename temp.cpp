#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cout << "Enter the Total Number of Test Cases : \n";
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        int N, sum = 0;
	  cout << "Enter the Total Number of Array Elements : \n";
        cin >> N;
        int A[N], Top[N], Sort[N], Diff[N];
        int  backlog_c = 0;
        double avg;
	  cout << "Enter the Array Elements : \n";
        for(int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        int Max = A[0];
        

        for (int i = 0; i < N; i++)
        {
            if(A[i] < 31)
            {
                backlog_c++;
            }
        }
        cout << backlog_c << " ";
        for (int i = 0; i < N; i++)
        {
            
            if(A[i] >= 31)
            {
                sum += A[i];
            }
        }
        avg = float(sum)/ float(N);
        cout << setprecision(4) << avg << endl;

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