// Program that checks for Leap Year.
#include <iostream>

using namespace std;
int main()
{
    int year;
    cout << "Enter the year between 1 and 3000 \n" ;
    cin >> year;

    if(year >= 1 && year <= 3000)
    {
        if (( year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0)
        {
            cout << "The year " << year << " is a leap year" << endl;
        }

        else
        {
        cout << "The year " << year << " is a not leap year" << endl;
        }

    }
    else
    {
        cout << "Invalid year" << endl;
    }
    return 0;
}
