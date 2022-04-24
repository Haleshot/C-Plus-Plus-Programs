#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N, sum = 0;
        cin >> N;
        int A[N];
        int  backlog_counter = 0;
        float avg;
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
        for (int i = 0; i < N; i++)
        {
            
            if(A[i] >= 31)
            {
                sum += A[i];
            }
        }
        avg = sum/ N;

        for (int i = 0; i < N; i++)
        {
            
            if(A[i] >= 31)
            {
                sum += A[i];
            }
        }
        

    }
    return 0;
}