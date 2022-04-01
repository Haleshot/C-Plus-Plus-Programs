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
    void Subway();
    void Tiara();
    void McDonalds();
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
    cout << "The List of Veg Restaurants is:\n1.Mia Cucina\n2.Subway\n3.Tiara\n4.Parabola\n5.Pizza Express\n6.Mainland China\n";
    cout << "The List of Non-Veg Restaurants is:\n1.Sigree Global Grill\n2.The Fatty Bao\n3.Ticca Tikka\n4.Global Fusion\n5.Kofuku\n6.Shizusan\n";
        
}
void Restaurants::Mia_Cucina()
{
    cout << "The Menu is: " << endl;
    cout << "I.Pizzas\n\t1.Margherita (Mozzarella + tomato + basil) [Rs 245]\n\t2.Pizza Verdura (Roasted Veggies + black olives + jalepenos + parmesan + Mozzarella) [Rs 256]\n\t3.Pizza Arabiata (Spicy Paneer + cherry tomatoes + Mozzarella) [Rs 230]\n\t4.Chorizo (Spanish hotdog + Mozzarella) [Rs 400]\n\t5.Feta e Peparone (Feta + Mozzarella + roasted bell peppers)[Rs 350]\n";
    cout << "II.Pastas\n\t1.Tagliatelle ai Pomodori (Homemade pasta + tomato + basil sauce) [Rs 200]\n\t2.Tagliatelle ai Pomodori (Homemade pasta in creamy basil sauce) [Rs 450]\n\t3.Penne Arabiata (Penne pasta + spicy tomato sauce + bell peppers + green olives) [Rs 300]\n\t4.Chorizo (Spanish hotdog + Mozzarella) [Rs 280]\n\t5.Spaghetti Aglio Olio (Spaghetti pasta + garlic + olive oil) [Rs 310]\n";
    cout << "III.Sides\n\t1.Chocolate Cake [Rs 120]\n\t2.Affogato [Rs 150]\n\t3.Panacotta [Rs 180]\n\t4.Brownie Sundae [Rs 170]\n\t5.Blueberry Crumble [Rs 200]\n";
    cout << "IV.Beverages\n\t1.Pepsi [Rs 80]\n\t2.Sprite [Rs 80]\n\t3.Slice [Rs 80]\n\t4.Chocolate Shake [Rs 100]\n\t5.Hot Chocolate [Rs 1200]\n";


}
void Restaurants::Subway()
{
    cout << "The Menu is: " << endl;
    cout << "I.Subs\n\t1.Hara Bhara Kebab (Patty + tomato + jalepenos) [Rs 235]\n\t2.Chatpatta Channa (Patty + black olives + jalepenos + parmesan + Mozzarella) [Rs 260]\n\t3.Mexican Patty (Patty + Paneer + tomatoes + jalepenos + Mozzarella) [Rs 230]\n\t4.Veggie Delite (Patty + jalepenos + capsicum + Mozzarella) [Rs 250]\n\t5.Veg Seekh (Patty + jalepenos + cucumber)[Rs 250]\n";
    cout << "II.Wraps\n\t1.Veg Shammi (Roll + cucumber + capsicum + jalepeno) [Rs 120]\n\t2.Chatpatta Shammi (Roll + capsicum + jalepeno) [Rs 120]\n";
    cout << "III.Sides\n\t1.Cookie [Rs 45]\n\t2.Chocolate Truffle Cake [Rs 75]\n\t3.French Fries [Rs 90]\n";
    cout << "IV.Beverages\n\t1.Lipton Ice Tea [Rs 80]\n\t2.Tropicanna Juice [Rs 80]\n\t3.Slice [Rs 80]\n\t4.Chocolate Shake [Rs 100]\n\t5.Hot Chocolate [Rs 1200]\n";


}
void Restaurants::Tiara()
{
    cout << "The Menu is: " << endl;
    cout << "I.Sandwiches\n\t1.Paneer Tikka Roll (Frankie + cottage cheese) [Rs 235]\n\t2.Tiara Vegetable Club Special (Triple Layered Sandwich + lettuce + tomato + cheese) [Rs 260]\n\t3.Mexican gardern sanwich (Guacomole + tomatoes + jalepenos + Mozzarella) [Rs 230]\n";
    cout << "II.Pastas\n\t1.Tagliatelle ai Pomodori (Garlic + chilli + parmesan cheese + jalepeno) [Rs 320]\n\t2.Conchiglioni Al Funghi Porcini (Pasta with creamy Porcini mushroom + scallion sauce) [Rs 220]\n";
    cout << "III.Sides\n\t1.Cookies [Rs 85]\n\t2.Chocolate Truffle Cake [Rs 75]\n\t3.French Fries [Rs 90]\n\t4.Cripss [Rs 65]\n";
    cout << "IV.Beverages\n\t1.Lipton Ice Tea [Rs 80]\n\t2.Tropicanna Juice [Rs 80]\n\t3.Slice [Rs 80]\n\t4.Chocolate Shake [Rs 100]\n\t5.Hot Chocolate [Rs 1200]\n";

    
}
void Restaurants::McDonalds()
{ // To be completed
    cout << "The Menu is: " << endl;
    cout << "I.Burgers\n\t1.Maharajan Mac (Frankie + cottage cheese) [Rs 235]\n\t2.Tiara Vegetable Club Special (Triple Layered Sandwich + lettuce + tomato + cheese) [Rs 260]\n\t3.Mexican gardern sanwich (Guacomole + tomatoes + jalepenos + Mozzarella) [Rs 230]\n";
    cout << "II.Pastas\n\t1.Tagliatelle ai Pomodori (Garlic + chilli + parmesan cheese + jalepeno) [Rs 320]\n\t2.Conchiglioni Al Funghi Porcini (Pasta with creamy Porcini mushroom + scallion sauce) [Rs 220]\n";
    cout << "III.Sides\n\t1.Cookies [Rs 85]\n\t2.Chocolate Truffle Cake [Rs 75]\n\t3.French Fries [Rs 90]\n\t4.Cripss [Rs 65]\n";
    cout << "IV.Beverages\n\t1.Lipton Ice Tea [Rs 80]\n\t2.Tropicanna Juice [Rs 80]\n\t3.Slice [Rs 80]\n\t4.Chocolate Shake [Rs 100]\n\t5.Hot Chocolate [Rs 1200]\n";

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


class Veg : public Restaurants
{
private:
    int items;
public:
    void Mia_Cucina();
    void Subway();
    void Tiara();
    void McDonalds();
    void Pizza_Express();
    void Mainland_China();
};

class Non_Veg : public Restaurants
{
private:
    int items;
public:
    void Sigree_Global_Grill();
    void The_Fatty_Bao();
    void Ticca_Tikka();
    void Global_Fusion();
    void Kofuku();
    void Shizusan();
};




int main()
{

    class Customer customer;
    class Restaurants restaurant;
    bool run = true;
    do
    {
        int ch;
        cout << "Welcome to the <insertname> Food Delivery System!\n\n";
        cout << "What would you like to do?\n1.Order Food to your house\n2.Takeaway (Pick up food from a restaurant)\n3.Exit\n";
        cin >> ch;

        if(ch == 1)
        {
            cout << "The Restuarants near you (Veg & Non Veg) are: \n";
            restaurant.Show_nearby_restaurants();
            cout << "Which type of restaurant would you like to place an order in?\n";
        }

    } while (run == true);
    

    

    return 0;
}