// DSA Project.
// Restaurant Billing system.
#include <iostream>
#include<iomanip> // For setw function
#include <stdlib.h>
#include <string>
using namespace std;


struct Order
{
    int order_id;
    char order_name[100];
    int quantity;
    float price, disc;
};


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
    void Place_Order();
};


void Restaurants::Show_nearby_restaurants()
{
    cout << "\t\t\t\t\t\t1.Veg Restaurants\n\n\n\n\n\n";
    cout << "\t\t\t\t\t\t2.Non-Veg Restaurants\n\n\n\n\n\n";
}

void Restaurants::Place_Order()
{
    Order order[20];
    float total = 0, atotal = 0, net_total = 0;

}

class Veg : public Restaurants
{
private:
    string menu_1[25], menu_2[25], menu_3[25], menu_4[25], menu_5[25], menu_6[25];
    float price_1[25], price_2[25], price_3[25], price_4[25], price_5[25], price_6[25];

    string menu_1[25] =
    {
        "Margherita",
        "Pizza Verdura",
        "Pizza Arabiata",
        "Chorizo",
        "Feta e Peparone",
        "Tagliatelle ai Pomodori",
        "Tagliatelle ai tusch",
        "Penne Arabiata",
        "Chorizo Pomodori",
        "Spaghetti Aglio Olio", 
        "Chocolate Cake", 
        "Affogato", 
        "Panacotta", 
        "Brownie Sundae", 
        "Blueberry Crumble", 
        "Pepsi", 
        "Sprite", 
        "Slice", 
        "Chocolate Shake", 
        "Hot Chocolate"

    };

    float price_1[25] = 
    {

        245.0,
        256.0,
        230.0,
        400.0,
        350.0,
        200.0,
        450.0,
        300.0,
        280.0,
        310.0,
        120.0,
        150.0,
        180.0,
        170.0,
        200.0,
        80.0,
        80.0,
        80.0,
        100.0,
        120.0,

    };

    
    string menu_2[25] =
    {
        "Hara Bhara Kebab",
        "Chatpatta Channa",
        "Mexican Patty",
        "Veggie Delite",
        "Veg Seekh",
        "Veg Shammi",
        "Chatpatta Shammi",
        "Cookie",
        "Chocolate Truffle Cake",
        "French Fries", 
        "Lipton Ice Tea", 
        "Tropicanna Juice", 
        "Slice", 
        "Chocolate Shake", 
        "Hot Chocolate"

    };

    float price_2[25] = 
    {

        235.0,
        260.0,
        230.0,
        250.0,
        250.0,
        120.0,
        120.0,
        45.0,
        75.0,
        90.0,
        80.0,
        80.0,
        80.0,
        100.0,
        120.0,

    };

    
    string menu_3[25] =
    {
        "Paneer Tikka Roll",
        "Tiara Vegetable Club Special",
        "Mexican gardern sanwich",
        "Tagliatelle ai Pomodori",
        "Conchiglioni Al Funghi Porcini",
        "Cookies",
        "Chocolate Truffle Cake",
        "French Fries",
        "Crisps", 
        "Lipton Ice Tea", 
        "Tropicanna Juice", 
        "Slice", 
        "Chocolate Shake", 
        "Hot Chocolate"

    };

    float price_3[25] = 
    {

        235.0,
        260.0,
        230.0,
        320.0,
        220.0,
        85.0,
        75.0,
        90.0,
        65.0,
        80.0,
        80.0,
        80.0,
        100.0,
        120.0,

    };

        string menu_4[25] =
    {
        "Maharajan Mac",
        "Triple Layer Veg Patty",
        "Mexican Burger",
        "Tagliatelle ai Pomodori",
        "Conchiglioni Al Funghi Porcini",
        "Cookies",
        "Chocolate Truffle Cake",
        "French Fries",
        "Crisps", 
        "Lipton Ice Tea", 
        "Tropicanna Juice", 
        "Slice", 
        "Chocolate Shake", 
        "Hot Chocolate"

    };

    float price_4[25] = 
    {

        235.0,
        260.0,
        230.0,
        320.0,
        220.0,
        85.0,
        75.0,
        90.0,
        65.0,
        80.0,
        80.0,
        80.0,
        100.0,
        120.0,

    };

    
    string menu_5[25] =
    {
        "Picoolo Classic Margherita",
        "Picoolo Classic Mushroom",
        "Piccolo Classic American",
        "Kids Verdure",
        "Polla Verde",
        "Baked Mac And Cheese",
        "Penna Forestier",
        "Dough Balls With Cheese Dip",
        "Baked Smileys"

    };

    float price_5[25] = 
    {

        245.0,
        245.0,
        295.0,
        245.0,
        295.0,
        225.0,
        225.0,
        135.0,
        135.0

    };

    
    string menu_6[25] =
    {
        "Watermelo Cilantro Crush",
        "Fresh Lime Soda",
        "Basil Flavoured Vegetable Dumplings",
        "Corn and Cheese Dumpling",
        "Sichuan Chilli Babycorn",
        "Jiang's Chilli Cottage Cheese"

    };

    float price_6[25] = 
    {

        200.0,
        110.0,
        310.0,
        310.0,
        435.0,
        475.0

    };


public:
    void Mia_Cucina();
    void Subway();
    void Tiara();
    void McDonalds();
    void Pizza_Express();
    void Mainland_China();
    void Show_Veg_Restaurants();
};

void Veg::Mia_Cucina()
{
    cout << "\t\t\t\t\t\tThe Menu is: " << endl;
    cout << "\t\t\t\t\t\tI.Pizzas\n\t1.Margherita (Mozzarella + tomato + basil) [Rs 245]\n\t2.Pizza Verdura (Roasted Veggies + black olives + jalepenos + parmesan + Mozzarella) [Rs 256]\n\t3.Pizza Arabiata (Spicy Paneer + cherry tomatoes + Mozzarella) [Rs 230]\n\t4.Chorizo (Spanish hotdog + Mozzarella) [Rs 400]\n\t5.Feta e Peparone (Feta + Mozzarella + roasted bell peppers)[Rs 350]\n\n";
    cout << "\t\t\t\t\t\tII.Pastas\n\t6.Tagliatelle ai Pomodori (Homemade pasta + tomato + basil sauce) [Rs 200]\n\t7.Tagliatelle ai tusch (Homemade pasta in creamy basil sauce) [Rs 450]\n\t8.Penne Arabiata (Penne pasta + spicy tomato sauce + bell peppers + green olives) [Rs 300]\n\t9.Chorizo Pomodori(Spanish hotdog + Mozzarella + Garlic Bread) [Rs 280]\n\t10.Spaghetti Aglio Olio (Spaghetti pasta + garlic + olive oil) [Rs 310]\n\n";
    cout << "\t\t\t\t\t\tIII.Sides\n\t11.Chocolate Cake [Rs 120]\n\t12.Affogato [Rs 150]\n\t13.Panacotta [Rs 180]\n\t14.Brownie Sundae [Rs 170]\n\t15.Blueberry Crumble [Rs 200]\n\n";
    cout << "\t\t\t\t\t\tIV.Beverages\n\t16.Pepsi [Rs 80]\n\t17.Sprite [Rs 80]\n\t18.Slice [Rs 80]\n\t19.Chocolate Shake [Rs 100]\n\t20.Hot Chocolate [Rs 120]\n\n";


}

void Veg::Subway()
{
    
    cout << "The Menu is: " << endl;
    cout << "\t\t\t\t\t\tI.Subs\n\t1.Hara Bhara Kebab (Patty + tomato + jalepenos) [Rs 235]\n\t2.Chatpatta Channa (Patty + black olives + jalepenos + parmesan + Mozzarella) [Rs 260]\n\t3.Mexican Patty (Patty + Paneer + tomatoes + jalepenos + Mozzarella) [Rs 230]\n\t4.Veggie Delite (Patty + jalepenos + capsicum + Mozzarella) [Rs 250]\n\t5.Veg Seekh (Patty + jalepenos + cucumber)[Rs 250]\n";
    cout << "\t\t\t\t\t\tII.Wraps\n\t6.Veg Shammi (Roll + cucumber + capsicum + jalepeno) [Rs 120]\n\t7.Chatpatta Shammi (Roll + capsicum + jalepeno) [Rs 120]\n";
    cout << "\t\t\t\t\t\tIII.Sides\n\t8.Cookie [Rs 45]\n\t9.Chocolate Truffle Cake [Rs 75]\n\t10.French Fries [Rs 90]\n";
    cout << "\t\t\t\t\t\tIV.Beverages\n\t11.Lipton Ice Tea [Rs 80]\n\t12.Tropicanna Juice [Rs 80]\n\t13.Slice [Rs 80]\n\t14.Chocolate Shake [Rs 100]\n\t15.Hot Chocolate [Rs 120]\n";



}
void Veg::Tiara()
{
    cout << "\t\t\t\t\t\tThe Menu is: " << endl;
    cout << "\t\t\t\t\t\tI.Sandwiches\n\t1.Paneer Tikka Roll (Frankie + cottage cheese) [Rs 235]\n\t2.Tiara Vegetable Club Special (Triple Layered Sandwich + lettuce + tomato + cheese) [Rs 260]\n\t3.Mexican gardern sanwich (Guacomole + tomatoes + jalepenos + Mozzarella) [Rs 230]\n";
    cout << "\t\t\t\t\t\tII.Pastas\n\t4.Tagliatelle ai Pomodori (Garlic + chilli + parmesan cheese + jalepeno) [Rs 320]\n\t5.Conchiglioni Al Funghi Porcini (Pasta with creamy Porcini mushroom + scallion sauce) [Rs 220]\n";
    cout << "\t\t\t\t\t\tIII.Sides\n\t6.Cookies [Rs 85]\n\t7.Chocolate Truffle Cake [Rs 75]\n\t8.French Fries [Rs 90]\n\t9.Crisps [Rs 65]\n";
    cout << "\t\t\t\t\t\tIV.Beverages\n\t10.Lipton Ice Tea [Rs 80]\n\t11.Tropicanna Juice [Rs 80]\n\t12.Slice [Rs 80]\n\t13.Chocolate Shake [Rs 100]\n\t14.Hot Chocolate [Rs 120]\n";


}
void Veg::McDonalds()
{
    cout << "The Menu is: " << endl;
    cout << "\t\t\t\t\t\tI.Burgers\n\t1.Maharajan Mac (Frankie + cottage cheese) [Rs 235]\n\t2.Triple Layer Veg Patty (Triple Layered Sandwich + lettuce + tomato + cheese) [Rs 260]\n\t3.Mexican Burger (Guacomole + tomatoes + jalepenos + Mozzarella) [Rs 230]\n";
    cout << "\t\t\t\t\t\tII.Pastas\n\t4.Tagliatelle ai Pomodori (Garlic + chilli + parmesan cheese + jalepeno) [Rs 320]\n\t5.Conchiglioni Al Funghi Porcini (Pasta with creamy Porcini mushroom + scallion sauce) [Rs 220]\n";
    cout << "\t\t\t\t\t\tIII.Sides\n\t6.Cookies [Rs 85]\n\t7.Chocolate Truffle Cake [Rs 75]\n\t8.French Fries [Rs 90]\n\t9.Cripss [Rs 65]\n";
    cout << "\t\t\t\t\t\tIV.Beverages\n\t10.Lipton Ice Tea [Rs 80]\n\t11.Tropicanna Juice [Rs 80]\n\t12.Slice [Rs 80]\n\t13.Chocolate Shake [Rs 100]\n\t14.Hot Chocolate [Rs 120]\n";



}
void Veg::Pizza_Express()
{
    cout << "PIZZAS\n1.Picoolo Classic Margherita (RS 245)\n2. Picoolo Classic Mushroom (RS 245)\n3.Piccolo Classic American (RS 295)\n4. Kids Verdure (RS 245)\n5. Polla Verde (RS 295) \n" << endl;
    cout << "PASTAS\n6.Baked Mac And Cheese (RS 225)\n7. Penna Forestier (RS 225)\n\n" << endl;
    cout << "SIDES\n8.Dough Balls With Cheese Dip (RS 135)\n9. Baked Smileys (RS 135)" << endl;



}
void Veg::Mainland_China()
{

    cout << "BEVERAGES\n 1. Watermelo Cilantro Crush (RS 200)\n 2. Fresh Lime Soda (RS 110)" << endl;
    cout << "DIMSUMS\n 3. Basil Flavoured Vegetable Dumplings (RS 310)\n 4. Corn and Cheese Dumplings (RS 310)" << endl;
    cout << "APPETIZERS\n 5. Sichuan Chilli Babycorn (RS 435)\n 6. Jiang's Chilli Cottage Cheese (RS 475)" << endl;


}



void Veg::Show_Veg_Restaurants()
{
    cout << "The List of Veg Restaurants is:\n1.Mia Cucina\n2.Subway\n3.Tiara\n4.Parabola\n5.Pizza Express\n6.Mainland China\n";
}


class Non_Veg : public Restaurants
{
private:
    string menu_1[25], menu_2[25], menu_3[25], menu_4[25], menu_5[25], menu_6[25];
    float price_1[25], price_2[25], price_3[25], price_4[25], price_5[25], price_6[25];

    
    string menu_1[25] =
    {
        "Dhuandhar Murgh Tikka",
        "Kasoori Mirch Fish Tikka",
        "Tandoori Chicken",
        "Butter Chicken",
        "Bhuna Murgh Kali Mirch",
        "Penne chicken",
        "Spaghetti Chicken"

    };

    float price_1[25] = 
    {

        325.0,
        325.0,
        575.0,
        345.0,
        355.0,
        375.0,
        375.0

    };


    
    string menu_2[25] =
    {
        "Pork And Chineese Cabbage",
        "Smoked Chicken And Spinach",
        "Tuna Tartare Roll",
        "Prawn Tempura Roll",
        "Non Veg Spider Roll",
        "Pennang Curry With Chicken",
        "Japanese Chicken Kabocha Curry"

    };

    float price_2[25] = 
    {

        400.0,
        425.0,
        400.0,
        375.0,
        400.0,
        450.0,
        450.0

    };

    
    string menu_3[25] =
    {
        "Classic Chicken Tikka",
        "Basil Chicken Tikka",
        "Malai Chicken Tikka",
        "Chicken Tikka wrap",
        "Chicken Malai Wrap",
        "Mutton Seekh Wrap",
        "Chicken Seekh Kebab",
        "Chicken Chapli Kebab",
        "Tawa Chicken"

    };

    float price_3[25] = 
    {

        425.0,
        395.0,
        425.0,
        280.0,
        280.0,
        300.0,
        365.0,
        385.0,
        365.0

    };

    
    string menu_4[25] =
    {
        "Mutton Seekh kebab",
        "Fish Tikka",
        "Chicken Tikka",
        "Pepper Chicken",
        "Prawns Tepanyakki",
        "Dory Fish",
        "One Chicken Gravy And One Mutton Gravy"
    };

    float price_4[25] = 
    {

        400.0,
        450.0,
        400.0,
        350.0,
        400.0,
        350.0,
        550.0

    };

    
    string menu_5[25] =
    {
        "Popcorn Chicken Large",
        "Boneless Strips 6 pcs",
        "Classic Zinger",
        "Spicy Zinger"
    };

    float price_5[25] = 
    {

        180.0,
        205.0,
        150.0,
        160.0

    };

        string menu_6[25] =
    {
        "Crunchy Tuna Rol",
        "Hamachi New York Drago",
        "Chicken Gyoza",
        "Chilli Coriander Chicken",
        "Poached Chicken Dumpling",
        "Hakka Basil Chicken",
        "Hot Garlic Chick",
        
    };

    float price_6[25] = 
    {

        450.0,
        550.0,
        395.0,
        695.0,
        995.0,
        350.0,
        350.0

    };


public:
    void Sigree_Global_Grill();
    void The_Fatty_Bao();
    void Ticca_Tikka();
    void Global_Fusion();
    void KFC();
    void Shizusan();
    void Show_NonVeg_Restaurants();

};

void Non_Veg::Sigree_Global_Grill()
{
    cout << "STARTERS\n 1. Dhuandhar Murgh Tikka(RS 325)\n 2. Kasoori Mirch Fish Tikka(RS 325)\n 3. Tandoori Chicken(Rs 575)" << endl;
    cout << "MAIN COURSE\n 4. Butter Chicken (RS 345)\n 5. Bhuna Murgh Kali Mirch (RS 355)" << endl;
    cout << "PASTAS\n 6. Penne chicken (RS  375) \n 7. Spaghetti Chicken (RS 375) "<< endl;




}

void Non_Veg::The_Fatty_Bao()
{
    cout << "GYOZA \n 1. Pork And Chineese Cabbage (RS 400) \n 2. Smoked Chicken And Spinach (RS 425)" << endl;
    cout << "SUSHI ROLL\n 3. Tuna Tartare Roll (RS 400)\n 4. Prawn Tempura Roll (RS 375)\n 5. Non Veg Spider Roll (RS 400)" << endl;
    cout << "MAIN COURSE\n 6. Pennang Curry With Chicken (RS 450)\n 7. Japanese Chicken Kabocha Curry (RS 450)" << endl;


}

void Non_Veg::Ticca_Tikka()
{
    cout << "APPETIZER \n 1. Classic Chicken Tikka (RS 425)\n 2. Basil Chicken Tikka (RS 395)\n 3. Malai Chicken Tikka (Rs 425)" << endl;
    cout << "ROLLS AND WRAPS\n 4.Chicken Tikka wrap (RS 280) \n 5. Chicken Malai Wrap (Rs 280)\n 6. Mutton Seekh Wrap (RS 300)" << endl;
    cout << "KEBABS\n 7. Chicken Seekh Kebab (RS 365)\n 8. Chicken Chapli Kebab (RS 385)\n 9. Tawa Chicken (RS 385)" << endl; 



}

void Non_Veg::Global_Fusion()
{
    cout << "INDIAN STARTERS \n 1. Mutton Seekh kebab (Rs 400) \n 2. Fish Tikka (Rs 450) \n 3. Chicken Tikka (RS 400) "<< endl;
    cout << "CHINESE STARTERS \n 4. Pepper Chicken (RS 350) \n 5. Prawns Tepanyakki (RS 400)\n 6. Dory Fish (RS 350)" << endl;
    cout << "MAIN COURSE \n 7. One Chicken Gravy And One Mutton Gravy (RS 550)" << endl;


}


void Non_Veg::KFC()
{
    cout << "SNACKS \n 1. Popcorn Chicken Large (Rs 180) \n 2. Boneless Strips 6 pcs (RS 205) " << endl;
    cout << "BURGERS \n 3. Classic Zinger (Rs 150) \n 4. Spicy Zinger (Rs 160)" << endl;


}

void Non_Veg::Shizusan()
{
    cout <<"SUSHI \n 1. Crunchy Tuna Roll (Rs 450) \n 2. Hamachi New York Dragon (RS 550)" << endl;
    cout <<"DIMSUM \n 3. Chicken Gyoza (Rs 395) \n 4. Chilli Coriander Chicken (RS 695) \n 5. Poached Chicken Dumpling (RS 995)" << endl;
    cout <<"ASIAN TAPAS \n 6. Hakka Basil Chicken (RS 350) \n 7. Hot Garlic Chicken (RS 350)" << endl;


}

void Non_Veg::Show_NonVeg_Restaurants()
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
            int type_choice_restaurant;
            int order_number;

            customer.Input_Customer_Details();


            cout << "\t\t\t\t\t\tThe Restuarants near you (Veg & Non Veg) are: \n";
            restaurant.Show_nearby_restaurants();
            cout << "\t\t\t\t\t\tWhich type of restaurant would you like to place an order in?\n";
            cin >> type_restaurant;
            if (type_restaurant == 1)
            {
                veg.Show_Veg_Restaurants();
                cout << "Which restaurant do you pick?\n";
                cin >> type_choice_restaurant;

                switch (type_choice_restaurant)
                {
                case 1:

                    veg.Mia_Cucina();
                    cout << "\nSelect the food you want to order (Enter the Number displayed before the food you want to order) : ";
                    cout << "\nYou have selected " << endl;



                    break;
                
                default:
                    break;
                }
            }
            else if (type_restaurant == 2)
            {
                non_Veg.Show_NonVeg_Restaurants();
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