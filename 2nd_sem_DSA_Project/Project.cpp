// DSA Project.
// Restaurant Billing system.
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Customer
{
private:
    string Name;
    char premium_pass_number;
    int premium_pass_number_range = rand() % 1000 + 1000; // Generates a random number from 1000 to 1999 which helps in detecting the authenticity of the premium pass number.
    bool premium_pass_number_exists = true;

public:
    void Input_Details()
    {
        cout << "Customer Details:\nEnter your Name : ";
        cin >> Name;


        cout << "Do you have a Premium pass number? If you do, then Input 1, otherwise Input 0" << endl;
        cin >> premium_pass_number_exists;
        if(premium_pass_number_exists == 1)
        {
            cout << "Enter the Premium pass number : ";
            cin >> premium_pass_number;
            if(!(isdigit(premium_pass_number)))
            {
                throw "Enter a number please";
            }
            else if(isdigit(premium_pass_number))
            {
                if(premium_pass_number >= 1000 && premium_pass_number <= 1999)
                {
                    cout << "Valid Premium Pass Number!\n(Priority given while ordering)\n" << endl;
                }
            }
        }

    }

    void Nearby_Restaurant_Details();

};

Customer::Customer(/* args */)
{
}

Customer::~Customer()
{
}


int main()
{
    return 0;
}