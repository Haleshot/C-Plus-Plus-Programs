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

    for(int i = N - 1; i > index - 1; i--)
    {
        A[i + 1] = A[i];
    }
    A[index] = value;

    for(int i = 0; i <= N; i++)
    {
        cout << A[i] << endl;
    }

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
    int limit, index_value_1, index_value_2, value;
    cin >> limit;
    int array[limit];

    for(int i = 0; i < limit; i++)
    {
        cin >> array[i];
    }

    Sum_Avg(array, limit);
    Max_Min(array, limit);

    cin >> index_value_1;
    cin >> value;
    Insert(array, limit, index_value_1, value);

    cin >> index_value_2;
    Delete(array, limit, index_value_2);


    return 0;
}