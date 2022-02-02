//Stores Car Records and checks for Car Number(exists or not).
#include <iostream>
using namespace std;

struct Car
{
    char Model[50], Make[50], Service_Status[50];
    int Car_Number;
};

int main()
{
    int i, c = 0, limit;
    int Car_Number;
    cout << "Enter Limit for Car Records:\n";
    cin >> limit;
    Car car[limit];
    cout << "Enter Car Details:\n Model, Make, Car_Number, Service_Status respectively:\n";
    for(i = 0;i < limit; i++)
    {
        cin >> car[i].Model >> car[i].Make >> car[i].Car_Number >> car[i].Service_Status;
    }

    for(i = 0;i < limit; i++)
    {
        cout << "Car Model : " << car[i].Model << endl;
        cout << "Car Make : " << car[i].Make << endl;
        cout << "Car Number : "<< car[i].Car_Number << endl;
        cout << "Car Service Status : " << car[i].Service_Status << endl;
    }
    cout << "Enter Car Number : " << endl;
    cin >> Car_Number;

    for(i = 0;i < limit; i++)
    {
        if (car[i].Car_Number == Car_Number)
        {
            c++;
            cout << "Car found!" << endl;
            break;
        }
    }
    if (c == 0)
    {
        cout << "Car not found!" << endl;
    }


    return 0;
}
