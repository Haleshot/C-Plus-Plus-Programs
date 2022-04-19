#include <iostream>
using namespace std;
void Insertion_Sort(int*, int);
int* Array_Formation(int);



int main()
{
    int limit;
    int *ptr;
                
    cout << "Enter the limit for Array Elements\n";
    cin >> limit;

    ptr = Array_Formation(limit);
    Insertion_Sort(ptr, limit);



    return 0;
}

void Insertion_Sort(int array[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int temp = array[i];
        int j = i - 1;
        while(j >= 0 && temp < array[j])
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = temp;
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


