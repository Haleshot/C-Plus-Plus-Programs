// Contains functions to calculate Sum, Average, Max, Min of array elements entered by user as well as inserting and deleting array elements in accordance to the user.
#include <iostream>
using namespace std;

void Sum_Avg(int A[], int n)
{

    int i, sum = 0;
    float avg;
    for(i = 0;i < n; i++)
    {
        sum += A[i];
    }
    avg = sum/n;
    cout << "Sum of Array Elements is = " << sum << endl;
    cout << "Average of Array Elements is = " << avg << endl;
}

void High_Low(int A[], int n)
{

    int i, max = A[0], min = A[0];
    for(i = 0;i < n; i++)
    {
        if(A[i] > max)
        {
            max = A[i];
        }
        if(A[i] < min)
        {
            min = A[i];
        }
    }
    cout << "Max of Array Elements is = " << max << endl;
    cout << "Min of Array Elements is = " << min << endl;
}
void Insert(int A[], int n, int values, int indices)
{
    int i;
    
    if(indices > n)
    {
        cout << "Index value greater than array limit" << endl;
    }
    else if(indices < n)
    {

        cout << "Elements of Array before Insertion :" << endl;
        for(i = 0; i < n; i++)
        {
            cout << A[i] << " ";
        }

        for(i = n - 1; i > indices - 1; i--)
        {
            A[i + 1] = A[i];
        }
         A[indices] = values;

        cout << "\nElements of Array after Insertion :" << endl;
        for(i = 0; i <= n; i++)
        {
            cout << A[i] << " ";
        }
    }

}

void Delete(int A[], int n, int indices)
{
    int i = 0;
    
    if(indices > n)
    {
        cout << "Index value greater than array limit" << endl;
    }
    else if(indices < n)
    {
        cout << "Elements of Array before Deletion :" << endl;
        for(i = 0; i < n; i++)
        {
            cout << A[i] << " ";
        }

        for(i = indices; i < n - 1; i++)
        {
            A[i] = A[i + 1];
        }

        cout << "\nElements of Array after Deletion :" << endl;
        for(i = 0; i < n - 1; i++)
        {
            cout << A[i] << " ";
        }
    }


}

int main()
{
    int i, limit, ch;
    bool run = true;
    

    do
    {
        cout << "Enter Limit for Array Elements\n";
        cin >> limit;
        int A[limit];

        cout << "Enter Array Elements\n";
        for(i = 0; i < limit; i++)
        {
            cin >> A[i];
        }

        cout << "Menu\n 1. Sum and Average of Array Elements\n 2. Maximum and Minimum of Array Elements\n 3. Insert Element\n 4. Delete element\n" ;
        cout << "Enter Choice\n" ;
        cin >> ch;
        switch(ch)
        {
            case 1:
                Sum_Avg(A, limit);
                cout << "\nWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                cin >> run;
                break;
            case 2:
                High_Low(A, limit);
                cout << "\nWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                cin >> run;
                break;
            case 3:
                int value, index_1;
                cout << "Enter the Index Position : ";
                cin >> index_1;
                cout << "Enter the Value : ";
                cin >> value;
                Insert(A, limit, value, index_1);
                cout << "\nWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                cin >> run;
                break;
            case 4:
                int index_2;
                cout << "Enter the Index Position : ";
                cin >> index_2;
                Delete(A, limit, index_2);
                cout << "\nWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                cin >> run;
                break;


            default :

                cout << "Invalid Choice" << endl;

        }
    }while (run == true);

    return 0;
}
