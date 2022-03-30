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
    void Input_Customer_Details();
    void Display_Customer_Details();

};

void Customer::Input_Customer_Details()
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

void Customer::Display_Customer_Details()
{
        cout << "Customer Details: \n";

        cout << "Name : " << Name << endl; 
        cout << "Premium pass number : " << premium_pass_number << endl;
        
}


class Restaurants
{
private:
    /* data */
public:
    void Show_nearby_restaurants();
    void Mia_Cucina();
    void Bayroute();
    void Tiara();
    void Parabola();
    void Pizza_Express();
    void Mainland_China();
    void Sigree_Global_Grill();
    void The_Fatty_Bao();
    void Ticca_Tikka();
    void Global_Fusion();
    void Kofuku();
    void Shizusan();
};


void Restaurants::Show_nearby_restaurants()
{
    cout << "The List of Veg Restaurants is:\n1.Mia Cucina\n2.Bayroute\n3.Tiara\n4.Parabola\n5.Pizza Express\n6.Mainland China\n";
    cout << "The List of Non-Veg Restaurants is:\n1.Sigree Global Grill\n2.The Fatty Bao\n3.Ticca Tikka\n4.Global Fusion\n5.Kofuku\n6.Shizusan\n";
        
}
void Restaurants::Mia_Cucina()
{
    cout << "The List of Veg Restaurants is: " << endl;
}
void Restaurants::Bayroute()
{

}
void Restaurants::Tiara()
{
    
}
void Restaurants::Parabola()
{
    
}
void Restaurants::Pizza_Express()
{
    
}
void Restaurants::Mainland_China()
{
    
}
void Restaurants::Sigree_Global_Grill()
{
    
}
void Restaurants::The_Fatty_Bao()
{
    
}
void Restaurants::Ticca_Tikka()
{
    
}
void Restaurants::Global_Fusion()
{
    
}
void Restaurants::Kofuku()
{
    
}
void Restaurants::Shizusan()
{
    
}






int main()
{
    return 0;
}