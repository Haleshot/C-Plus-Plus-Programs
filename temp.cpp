#include <iostream>
using namespace std;


int counter = 0;

void Sum_Average(int A[], int n)
{
    int sum = 0;
    float avg;
    for(int i = 0; i < n; i++)
    {
        sum += A[i];
    }
    avg = sum/ n;
    cout << "The Sum of Array Elements is : " << sum << endl;
    cout << "The Average of Array Elemets is : " << avg << endl;
}

void Max_Min(int A[], int n)
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

    if(index  > n)
    {
        cout << "Index is greater than array limit" << endl;
    }
    else if(index < n)
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
        A[index] = value;

        cout << "The Array Elements after Sorting : " << endl;
        for(int i = 0; i < n; i++)
        {
            cout << A[i] << endl;
        }
    }

}

void Delete(int A[], int n, int index)
{
    if(index  > n)
    {
        cout << "Index is greater than array limit" << endl;
    }
    else if(index < n)
    {
        cout << "The Array Elements before Deletion : " << endl;
        for(int i = 0; i < n; i++)
        {
            cout << A[i] << endl;
        }

        for(int i = index; i < n -1; i++)
        {
            A[i] = A[i + 1];
        }


        cout << "The Array Elements after Deletion : " << endl;
        for(int i = 0; i < n - 1; i++)
        {
            cout << A[i] << endl;
        }


    }
}


int main()
{
    int i, limit, ch;
    bool run = true;
    

    do while(run == true)
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
                Sum_Average(A, limit);
                cout << "\nWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                cin >> run;
                break;
            case 2:
                Max_Min(A, limit);
                cout << "\nWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                cin >> run;
                break;
            case 3:
                int value, index_1;
                cout << "Enter the Index Position : ";
                cin >> index_1;
                cout << "Enter the Value : ";
                cin >> value;
                Insert_element(A, limit, value, index_1);
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
