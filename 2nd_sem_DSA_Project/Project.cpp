// DSA Project.
// Restaurant Billing system.
#include <iostream>
#include <stdlib.h>
using namespace std;

class Customer
{
private:
    string Name, premium_pass_number;
    int premium_pass_number_range = rand() % 1000 + 1000; // Generates a random number from 1000 to 1999 which helps in detecting the authenticity of the premium pass number.
    bool premium_pass_number_exists = true;

public:
    void Input_Details()
    {
        cout << "Customer Details:\nEnter your Name : ";
        cin >> Name;
        cout << "Do you have a Premium pass number? If you do, then Input 1, otherwise Input 0" << endl;
        cin >> premium_pass_number_exists;


        
    }
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