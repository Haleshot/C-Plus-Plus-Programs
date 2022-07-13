#include <iostream>
using namespace std;

void Insertion_Sort(int* , int);
void Selection_Sort(int*, int);
int Binary_Search(int*, int, int, int);
int* Array_Formation(int);


int main()
{
    bool run = true;
    do
    {
        int ch;
        cout << "\nMenu\n1.Insertion Sort\n2.Selection Sort\n3.Binary Search\n4.Exit\n";
        cin >> ch;

        switch (ch)
        {

            int limit;
            int *ptr;

            case 1:
            {
                
                cout << "Enter the limit for Array Elements\n";
                cin >> limit;
                ptr = Array_Formation(limit);
                Insertion_Sort(ptr, limit);
                break;
            }

            case 2:
            {
                
                cout << "Enter the limit for Array Elements\n";
                cin >> limit;
                ptr = Array_Formation(limit);

                Selection_Sort(ptr, limit);
                break;
            }
            
            case 3:
            {
                
                int value;
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


                break;
            }

            case 4:
            {
                cout << "Thank You!" << endl;
                exit(0);
            }
            
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
