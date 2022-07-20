// Program which helps in finding an element in a sorted array, Binary Search Technique, Complexity = O(log(n))
#include <iostream>
using namespace std;
int Binary_Search(int*, int, int, int);
int* Array_Formation(int);

int main()
{
    int value, limit, *ptr;

    cout << "Enter the limit for Array Elements\n";
    cin >> limit;
    ptr = Array_Formation(limit);

    cout << "Enter the Value to be searched in the Array Elements\n";
    cin >> value;

    int search_exists = Binary_Search(ptr, 0, (limit - 1), value);
    if (search_exists == -1)
    {
        cout << "Value doesn't exist!" << endl;
    }
    else
    {
        cout << "Value Exists at index : " << search_exists << endl;
    }


    return 0;
}

int Binary_Search(int array[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = (low + high)/ 2;
        if(array[mid] < key)
        {
            low = mid + 1;
        }
        else if(array[mid] == key)
        {
            return mid;
        }
        else if(array[mid] > key)
        {
            high = mid - 1;
        }
    }
    return -1;
    
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
