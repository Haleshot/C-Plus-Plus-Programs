#include <iostream>
using namespace std;

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

            case 1:
            {
                cout << "Enter the limit for Array Elements\n";
                

                int limit_1;
                cin >> limit_1;
				int array_1[limit_1];
                for(int i = 0; i < limit_1; i++)
                {
                    cin >> array_1[i];
                }
                Insertion_Sort(array_1, limit_1);
                break;
            }

            case 2:
            {
                int limit_2;
                cout << "Enter the limit for Array Elements\n";
                cin >> limit_2;
                int array_2[limit_2];
                for(int i = 0; i < limit_2; i++)
                {
                    cin >> array_2[i];
                }

                Selection_Sort(array_2, limit_2);
                break;
            }
            
            case 3:
            {
                
                int value;
                int limit_3;
                cout << "Enter the limit for Array Elements\n";
                cin >> limit_3;
                int array_3[limit_3];
                for(int i = 0; i < limit_3; i++)
                {
                    cin >> array_3[i];
                }

                cout << "Enter the Value to be searched in the Array Elements\n";
                cin >> value;

                int search_exists = Binary_Search(array_3, 0, (limit_3 - 1), value);
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