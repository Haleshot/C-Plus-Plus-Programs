#include <iostream>
using namespace std;

void Insertion_Sort();
void Selection_Sort();
int Binary_Search(int, int, int);
int Smallest(int, int, int);

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
        case 1:
            /* code */
            break;

        case 2:
            
            break;
        
        case 3:
            break;
        
        default:
            break;
        }
    } while(run == true);
    
    return 0;
}

void Insertion_Sort()
{

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