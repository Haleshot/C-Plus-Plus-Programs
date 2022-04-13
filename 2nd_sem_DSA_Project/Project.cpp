// DSA Project.
// Restaurant Billing system.
#include <iostream>
#include<iomanip> // For setw function
#include <stdlib.h>
#include <string>
using namespace std;

class Customer
{
private:
    int cust_id;
    char Name[100], address[100], phonenumber[11];
    string premium_pass_number;
    bool premium_pass_number_exists = true;

public:
    void Input_Customer_Details();
    void Display_Customer_Details();

     int getcustid()
      {
            return cust_id;
      }
      char *getcustnm()
      {
            return Name;
      }
      char *getcustadd()
      {
            return address;
      }
      char *getphno()
      {
            return phonenumber;
      }

};

void Customer::Input_Customer_Details()
{
        cout << "*************************************************************************" << endl;
        cout << "Customer Details:\nEnter your Name : ";
        cin >> Name;

        
        cout << "Enter your Address : ";
        cin >> address;

        
        cout << "Enter your Phone Number : ";
        cin >> phonenumber;



        cout << "Do you have a Premium pass number? If you do, then Input 1, otherwise Input 0" << endl;
        cin >> premium_pass_number_exists;
        if(premium_pass_number_exists == 1)
        {
            cout << "Enter the Premium pass number : ";
            cin >> premium_pass_number;
            if(stoi(premium_pass_number) >= 1000 && stoi(premium_pass_number) <= 1999)
            {
                cout << endl;
                cout << "Valid Premium Pass Number!\n(Priority given while ordering)...\n" << endl;
                cout << endl;
            }
            else
            {
                cout << "Invalid Premium Pass Number!" << endl;
            }
        }

        cout << "*************************************************************************" << endl;



}

void Customer::Display_Customer_Details()
{
    cout << "*************************************************************************" << endl;
        cout << "Customer Details: \n";
        cout<<"   "<< cust_id << setw(15) << Name<< setw(23) << address << setw(27) << phonenumber <<endl;
        cout << "Name : " << Name << endl; 
        cout << "Premium pass number : " << premium_pass_number << endl;
        cout << "*************************************************************************" << endl;
        
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
    cout << "\t\t\t\t\t\t1.Veg Restaurants\n\n\n\n\n\n";
    cout << "\t\t\t\t\t\t2.Non-Veg Restaurants\n\n\n\n\n\n";
        
}
void Restaurants::Mia_Cucina()
{
    cout << "\t\t\t\t\t\tThe Menu is: " << endl;
    cout << "\t\t\t\t\t\tI.Pizzas\n\t1.Margherita (Mozzarella + tomato + basil) [Rs 245]\n\t2.Pizza Verdura (Roasted Veggies + black olives + jalepenos + parmesan + Mozzarella) [Rs 256]\n\t3.Pizza Arabiata (Spicy Paneer + cherry tomatoes + Mozzarella) [Rs 230]\n\t4.Chorizo (Spanish hotdog + Mozzarella) [Rs 400]\n\t5.Feta e Peparone (Feta + Mozzarella + roasted bell peppers)[Rs 350]\n";
    cout << "\t\t\t\t\t\tII.Pastas\n\t1.Tagliatelle ai Pomodori (Homemade pasta + tomato + basil sauce) [Rs 200]\n\t2.Tagliatelle ai Pomodori (Homemade pasta in creamy basil sauce) [Rs 450]\n\t3.Penne Arabiata (Penne pasta + spicy tomato sauce + bell peppers + green olives) [Rs 300]\n\t4.Chorizo (Spanish hotdog + Mozzarella) [Rs 280]\n\t5.Spaghetti Aglio Olio (Spaghetti pasta + garlic + olive oil) [Rs 310]\n";
    cout << "\t\t\t\t\t\tIII.Sides\n\t1.Chocolate Cake [Rs 120]\n\t2.Affogato [Rs 150]\n\t3.Panacotta [Rs 180]\n\t4.Brownie Sundae [Rs 170]\n\t5.Blueberry Crumble [Rs 200]\n";
    cout << "\t\t\t\t\t\tIV.Beverages\n\t1.Pepsi [Rs 80]\n\t2.Sprite [Rs 80]\n\t3.Slice [Rs 80]\n\t4.Chocolate Shake [Rs 100]\n\t5.Hot Chocolate [Rs 1200]\n";


}
void Restaurants::Subway()
{
    cout << "The Menu is: " << endl;
    cout << "\t\t\t\t\t\tI.Subs\n\t1.Hara Bhara Kebab (Patty + tomato + jalepenos) [Rs 235]\n\t2.Chatpatta Channa (Patty + black olives + jalepenos + parmesan + Mozzarella) [Rs 260]\n\t3.Mexican Patty (Patty + Paneer + tomatoes + jalepenos + Mozzarella) [Rs 230]\n\t4.Veggie Delite (Patty + jalepenos + capsicum + Mozzarella) [Rs 250]\n\t5.Veg Seekh (Patty + jalepenos + cucumber)[Rs 250]\n";
    cout << "\t\t\t\t\t\tII.Wraps\n\t1.Veg Shammi (Roll + cucumber + capsicum + jalepeno) [Rs 120]\n\t2.Chatpatta Shammi (Roll + capsicum + jalepeno) [Rs 120]\n";
    cout << "\t\t\t\t\t\tIII.Sides\n\t1.Cookie [Rs 45]\n\t2.Chocolate Truffle Cake [Rs 75]\n\t3.French Fries [Rs 90]\n";
    cout << "\t\t\t\t\t\tIV.Beverages\n\t1.Lipton Ice Tea [Rs 80]\n\t2.Tropicanna Juice [Rs 80]\n\t3.Slice [Rs 80]\n\t4.Chocolate Shake [Rs 100]\n\t5.Hot Chocolate [Rs 1200]\n";


}
void Restaurants::Tiara()
{
    cout << "\t\t\t\t\t\tThe Menu is: " << endl;
    cout << "\t\t\t\t\t\tI.Sandwiches\n\t1.Paneer Tikka Roll (Frankie + cottage cheese) [Rs 235]\n\t2.Tiara Vegetable Club Special (Triple Layered Sandwich + lettuce + tomato + cheese) [Rs 260]\n\t3.Mexican gardern sanwich (Guacomole + tomatoes + jalepenos + Mozzarella) [Rs 230]\n";
    cout << "\t\t\t\t\t\tII.Pastas\n\t1.Tagliatelle ai Pomodori (Garlic + chilli + parmesan cheese + jalepeno) [Rs 320]\n\t2.Conchiglioni Al Funghi Porcini (Pasta with creamy Porcini mushroom + scallion sauce) [Rs 220]\n";
    cout << "\t\t\t\t\t\tIII.Sides\n\t1.Cookies [Rs 85]\n\t2.Chocolate Truffle Cake [Rs 75]\n\t3.French Fries [Rs 90]\n\t4.Cripss [Rs 65]\n";
    cout << "\t\t\t\t\t\tIV.Beverages\n\t1.Lipton Ice Tea [Rs 80]\n\t2.Tropicanna Juice [Rs 80]\n\t3.Slice [Rs 80]\n\t4.Chocolate Shake [Rs 100]\n\t5.Hot Chocolate [Rs 1200]\n";

    
}
void Restaurants::McDonalds()
{ // To be completed
    cout << "The Menu is: " << endl;
    cout << "\t\t\t\t\t\tI.Burgers\n\t1.Maharajan Mac (Frankie + cottage cheese) [Rs 235]\n\t2.Tiara Vegetable Club Special (Triple Layered Sandwich + lettuce + tomato + cheese) [Rs 260]\n\t3.Mexican gardern sanwich (Guacomole + tomatoes + jalepenos + Mozzarella) [Rs 230]\n";
    cout << "\t\t\t\t\t\tII.Pastas\n\t1.Tagliatelle ai Pomodori (Garlic + chilli + parmesan cheese + jalepeno) [Rs 320]\n\t2.Conchiglioni Al Funghi Porcini (Pasta with creamy Porcini mushroom + scallion sauce) [Rs 220]\n";
    cout << "\t\t\t\t\t\tIII.Sides\n\t1.Cookies [Rs 85]\n\t2.Chocolate Truffle Cake [Rs 75]\n\t3.French Fries [Rs 90]\n\t4.Cripss [Rs 65]\n";
    cout << "\t\t\t\t\t\tIV.Beverages\n\t1.Lipton Ice Tea [Rs 80]\n\t2.Tropicanna Juice [Rs 80]\n\t3.Slice [Rs 80]\n\t4.Chocolate Shake [Rs 100]\n\t5.Hot Chocolate [Rs 1200]\n";

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
    void Show_Restaurants();
};

void Veg::Show_Restaurants()
{
    cout << "The List of Veg Restaurants is:\n1.Mia Cucina\n2.Subway\n3.Tiara\n4.Parabola\n5.Pizza Express\n6.Mainland China\n";
}


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
    void Show_Restaurants();

};

void Non_Veg::Show_Restaurants()
{
    cout << "The List of Non-Veg Restaurants is:\n1.Sigree Global Grill\n2.The Fatty Bao\n3.Ticca Tikka\n4.Global Fusion\n5.Kofuku\n6.Shizusan\n";
}



int main()
{

    class Customer customer;
    class Restaurants restaurant;
    class Veg veg;
    class Non_Veg non_Veg;
    
    bool run = true;
    do
    {
        int ch;
        cout << "\t\t\t\t\t\tWelcome to the <insertname> Food Delivery System!\n\n";
        cout << "\t\t\t\t\t\tWhat would you like to do?\n1.Order Food to your house\n2.Takeaway (Pick up food from a restaurant)\n3.Exit\n";
        cin >> ch;

        if(ch == 1)
        {
            int type_restaurant;

            customer.Input_Customer_Details();


            cout << "\t\t\t\t\t\tThe Restuarants near you (Veg & Non Veg) are: \n";
            restaurant.Show_nearby_restaurants();
            cout << "\t\t\t\t\t\tWhich type of restaurant would you like to place an order in?\n";
            cin >> type_restaurant;
            if (type_restaurant == 1)
            {
                veg.Show_nearby_restaurants();
            }
            else if (type_restaurant == 2)
            {
                non_Veg.Show_Restaurants();
            }
            cout << "\nWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
            
        }
        if(ch == 3)
        {
            return 0;
        }
        else
        {
            cout << "Invalid Choice!\n";
        }
        

    } while (run == true);
    

    

    return 0;
}