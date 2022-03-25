#include <iostream>
using namespace std;
int counter = 0;

void Sum_Avg(int A[], int N)
{
    float avg;
    int sum = 0;

    for(int i = 0; i < N; i++)
    {
        sum += A[i];
    }
    avg = sum/ N;

    cout << sum << endl;
    cout << avg << endl;
}

void Max_Min(int A[], int N)
{
    int max = A[0], min = A[0];
    for(int i = 0; i < N; i++)
    {
        if(max < A[i])
        {
            max = A[i];
        }

        if(min > A[i])
        {
            min = A[i];
        }

    }
    cout << max << endl;
    cout << min << endl;
}

void Insert(int A[], int N, int index, int value)
{
    for(int i = 0; i < N; i++)
    {
        cout << A[i] << endl;
    }

    for(int i = N; i > index - 1; i--)
    {
        A[i + 1] = A[i];
    }
    A[index] = value;

}

void Delete(int A[], int N, int index)
{
    for(int i = 0; i < N; i++)
    {
        cout << A[i] << endl;
    }
    for(int i = index; i < N - 1; i++)
    {
        A[i] = A[i + 1];
    }
    for(int i = 0; i < N - 1; i++)
    {
        cout << A[i] << endl;
    }

}

int main()
{
    return 0;
}