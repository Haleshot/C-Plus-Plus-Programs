#include <iostream>
using namespace std;


int counter = 0;

void Sum_Average(int A[], int n)
{
    int sum;
    float avg;
    for(int i = 0; i < n; i++)
    {
        sum += A[i];
    }
    avg = sum/ n;
    cout << "The Sum of Array Elemets is : " << sum << endl;
    cout << "The Average of Array Elemets is : " << avg << endl;
}

void Max_Main(int A[], int n)
{
    int max = A[0], min = A[0];
    for(int i = 0; i < n; i++)
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
    cout << "The Maximum element present in the Array Elements is : " << max << endl;
    cout << "The Minimum element present in the Array Elements is : " << min << endl;

}

void Insert_element(int A[], int n, int value, int index)
{
    cout << "The Array Elements before Sorting : " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }

    for(int i = n - 1; i > index - 1; i--)
    {
        A[i + 1] = A[i];
    }
}


int main()
{
    int ch;
    bool run = true;
    do
    {
    
        cout << "Menu:\n1.Find the Sum and Average of Array Elements\n2.Find the Maximum and Minimum of Array Elements\n3.Insert Array Element\n4.Delete Array Element\nEnter your choice\n";
        cin >> ch;
        if(ch == 1)
        {
            IncrementCounter();
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        else if(ch == 2)
        {
            ResetCounter();
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        else if (ch == 3)
        {
            DisplayCounter();
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        else
        {
            return 0;
        }
    }while (run == true);
    
    return 0;
}