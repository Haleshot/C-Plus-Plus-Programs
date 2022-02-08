// Program that records Service Centre Records with class Encapsulation method.
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class Car
{
    char Make[50], Model[50], Service_Status[50], Car_Number[50];
public:
    void Readdata()
    {
        cout << "Enter Make: ";
        cin >> Make;
        cout << "Enter Model: ";
        cin >> Model;
        cout << "Enter Service Status: ";
        cin >> Service_Status;
        cout << "Enter Car Number: ";
        cin >> Car_Number;
        cout << endl;
    }
    void AssignStatus(Car c[], Car EC[], Car EW[], Car EIP[], Car ED[], int limit)
    {
        int i;
        string choice;
        for(i = 0; i < limit; i++)
        {
            if(strcmp(c[i].Service_Status, "Waiting") == 0)
                {

                    cout << "Can we close Ticket " << i << " (Y/N)? - ";
                    cin >> choice;
                    if (choice == "Y" || choice == "y")
                    {
                        strcpy(c[i].Service_Status, "Completed");
                        cout << "Thank you for your time!" << endl;
                        EC[i] = c[i];
                    }
                    else if(choice == "N" || choice == "n")
                    {
                        EW[i] = c[i];
                    }
                }

                if(strcmp(c[i].Service_Status, "In_Process") == 0)
                {

                    cout << "Can we close Ticket " << i << " (Y/N)? - ";
                    cin >> choice;
                    if (choice == "Y" || choice == "y")
                    {
                        strcpy(c[i].Service_Status, "Completed");
                        cout << "Thank you for your time!" << endl;
                        EC[i] = c[i];
                    }
                    else if(choice == "N" || choice == "n")
                    {
                        EIP[i] = c[i];
                    }
                }


                if(strcmp(c[i].Service_Status, "Delivered") == 0)
                {

                    cout << "Can we close Ticket " << i << " (Y/N)? - ";
                    cin >> choice;
                    if (choice == "Y" || choice == "y")
                    {
                        strcpy(c[i].Service_Status, "Completed");
                        cout << "Thank you for your time!" << endl;
                        EC[i] = c[i];
                    }
                    else if(choice == "N" || choice == "n")
                    {
                        ED[i] = c[i];
                    }
                }
                if(strcmp(c[i].Service_Status, "Completed") == 0)
                {
                    EC[i] = c[i];
                }


        }

    }

    void DisplayStatus(Car c[], Car EC[], Car EW[], Car EIP[], Car ED[], int limit)
    {
        for(int i = 0; i < limit; i++)
        {
            if(EC[i].Car_Number != "")
            {
                cout << "\n\nCompleted Section\n" <<  "Make = " << EC[i].Make << "\n" << "Model = " << EC[i].Model << "\n" << "Service Status = " << EC[i].Service_Status << "\n" << "Car Number = " << EC[i].Car_Number << endl;
            }
        }
        for(int i = 0; i < limit; i++)
        {
            cout << "\n\nWaiting Section\n" <<"Make = " << EW[i].Make << "\n" << "Model = " << EW[i].Model << "\n" << "Service Status = " << EW[i].Service_Status << "\n" << "Car Number = " << EW[i].Car_Number << endl;
        }
        for(int i = 0; i < limit; i++)
        {
            cout << "\n\nIn_Process Section\n" <<"Make = " << EIP[i].Make << "\n" << "Model = " << EIP[i].Model << "\n" << "Service Status = " << EIP[i].Service_Status << "\n" << "Car Number = " << EIP[i].Car_Number << endl;
        }
        for(int i = 0; i < limit; i++)
        {
            cout << "\n\nDelivered Section\n" <<"Make = " << ED[i].Make << "\n" << "Model = " << ED[i].Model << "\n" << "Service Status = " << ED[i].Service_Status << "\n" << "Car Number = " << ED[i].Car_Number << endl;
        }
    }

};

int main()
{
    int limit;
    cout << "Enter Limit\n";
    cin >> limit;
    Car car[limit];
    Car EC[limit], EW[limit], EIP[limit], ED[limit];
    for(int i = 0; i < limit; i++)
    {
        car[i].Readdata();
    }
    car[0].AssignStatus(car, EC, EW, EIP, ED, limit);
    car[0].DisplayStatus(car, EC, EW, EIP, ED, limit);

    return 0;
}
