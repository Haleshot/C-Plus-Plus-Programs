#include <iostream>
using namespace std;
void Selection_Sort(int*, int);
int* Array_Formation(int);


int main()
{
    int limit;
    int *ptr;
                
    cout << "Enter the limit for Array Elements\n";
    cin >> limit;

    ptr = Array_Formation(limit);
    Selection_Sort(ptr, limit);



    return 0;
}


void Selection_Sort(int array[], int n)
{
    
    for(int i = 0; i < n - 1; i++)
    {
        int smallest = i;
        for(int j = i + 1; j < n; j++)
        {
            if(array[j] < array[smallest])
            {
                smallest = j;
            }
        }
        int temp = array[smallest];
        array[smallest] = array[i];
        array[i] = temp;

    }

    for(int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}

int* Array_Formation(int n)
{
    int a;
    static int Array[100];
    cout << "Enter the Array Elements\n";
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        Array[i] = a;
    }
    return Array;
}
