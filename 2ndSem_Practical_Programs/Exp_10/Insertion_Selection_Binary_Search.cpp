#include <iostream>
using namespace std;

void Insertion_Sort(int* , int);
void Selection_Sort(int*, int, int);
int Binary_Search(int*, int, int, int);
int Smallest(int, int, int);
int* Array_Formation(int);


int main()
{
    bool run = true;
    do
    {
        int ch;
        cout << "Menu\n1.Insertion Sort\n2.Selection Sort\n3.Binary Search\n4.Exit\n";
        cin >> ch;

        switch (ch)
        {

            int limit;
            int *ptr;
            case 1:
                
                cout << "Enter the limit for Array Elements\n";
                cin >> limit;
                
                ptr = Array_Formation(limit);

                Insertion_Sort(ptr, limit);
                break;

            case 2:
                
                cout << "Enter the limit for Array Elements\n";
                cin >> limit;
                ptr = Array_Formation(limit);

                Selection_Sort(ptr, ptr[0], limit);
                break;
            
            case 3:
                
                int value;
                cout << "Enter the limit for Array Elements\n";
                cin >> limit;
                ptr = Array_Formation(limit);

                cout << "Enter the Value to be searched in the Array Elements\n";
                cin >> value;

                int search_exists = (Binary_Search(ptr, ptr[0], ptr[0], value));
                if (search_exists == -1)
                {
                    cout << "Value doesn't exist!" << endl;
                }
                else
                {
                    cout << "Value Exists!" << endl;
                }


                break;
            
            default:
                cout << "Invalid Choice!" << endl;
                break;
        }

    } while(run == true);
    
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

int Smallest(int array[], int k, int n)
{
    int Small = array[k];
    int position = k;
    for(int j = k + 1; j <= n; j++)
    {
        if(Small > array[j])
        {
            Small = array[j];
            position = j;
        }
    }
    return position;
}

void Selection_Sort(int array[], int k ,int n)
{
    for(int k = 0; k < n; k++)
    {
        int position = Smallest(array, k, n);
        int temp;
        temp = array[k];
        array[k] = array[position];
        array[position] = array[k];

    }

    for(int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
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
    int Array[n];
    cout << "Enter the Array Elements\n";
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        Array[i] = a;
    }
    return Array;
}
