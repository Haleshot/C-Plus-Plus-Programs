// DSA Project.
// Restaurant Billing system.
#include <iostream>
#include<iomanip> // For setw function
#include <stdlib.h>
#include <string>
#include <stack>
using namespace std;

// Structure containing the respective data members to store the detials of the food items ordered by customer.
struct Order
{
    string order_name;
    int quantity;
    float price, amount;

    Order *next;
};

Order *Head = NULL;

// Linked List Data Structure Class
class Food
{
    public:

        // Insert Beginning Function acts as a Stack since each item gets added to the beginning of the Linked List.
        void Insert_Beg(string, int, float, float);

        // Delete a Node which contains the Customer Order.
        void Delete_Pos(int);

        // Function to calculate the total amount to be paid.
        void Calculate_Amount();

        // Function to display the whole bill in tabulated manner.
        void Bill_Generation();

        // Function to apply discount on Total Amount.
        void Discount();
};

void Food::Insert_Beg(string ordername_, int quantity_, float price_, float amount_)
{
        Order *item;
        item = new Order();
        item->order_name = ordername_;
        item->quantity = quantity_;
        item->price = price_;
        item->amount = item->price * item->quantity;

        item->next = Head;
        Head = item;
}

void Food::Delete_Pos(int index)
{
    Order *temp = Head;
    int counter = 1;

        if(index == 0)
        {
            Head = temp->next;
        }
        while(temp != NULL && counter < index - 1)
        {
            temp = temp->next;
            counter++;
        }
        if(temp != NULL)
        {
            Order *a = temp->next;
            Order *b = a->next;
            temp->next = b;
            delete a;
        }
}

void Food::Bill_Generation()
{
    Order *current = Head;
    if (Head == NULL)
    {
        cout << "\t\t\t\t\t\tCart is Empty! Please order food items from the restaurants provided." << endl;
    }
    else
    {
        cout <<"\t\t\t\t\t\t*************************************************************************\n" << endl;
        cout <<"\t\t\t\t\t\t*****************************   BILL   **********************************" << endl;
        cout <<"\t\t\t\t\t\t*************************************************************************\n\n\n" << endl;
        cout << left << setw(25) << "Index No" << left << setw(30) << "NAME" << left << setw(15) << "Qty" << left << setw(10) << "Price" << left << setw(10) << "Amount" << endl;

        int i = 1;
        while (current != NULL)
        {
            cout << left << setw(25) << i << left << setw(30) << current->order_name << left << setw(15) << current->quantity << left << setw(10) << current->price << left << setw(10) << current->amount<< endl;
            current = current->next;
            i += 1;
        }
        
    }
}

void Food::Calculate_Amount()
{
    Order *current = Head;
    if (Head == NULL)
    {
        cout << "Amount = 0.0" << endl;
    }
    else
    {
        float sum = 0;
        while (current != NULL)
        {
            sum += current->amount;
            current = current->next;
        }
        cout << left << setw(25) << "" << left << setw(30) << "" << left << setw(15) << "" << left << setw(10) << "" << left << setw(10) << "Total Amount = " << sum << endl;
        
    }
}

void Food::Discount()
{
    Order *current = Head;
    if (Head == NULL)
    {
        cout << "Amount = 0.0" << endl;
    }
    else
    {
        float sum = 0;
        float discount;
        
        while (current != NULL)
        {
            sum += current->amount;
            current = current->next;
        }
        discount = 0.2 * sum;
        sum = sum - discount;
        cout << "\t\t\t\t\t\tTotal Amount (After applying Discount) = " << sum << endl;
        
    }
}

class Customer
{
public:
    int cust_id;
    string Name, address, phonenumber;
    string premium_pass_number;
    bool premium_pass_number_exists = true;

    void Input_Customer_Details();
    void Display_Customer_Details();

};

void Customer::Input_Customer_Details()
{
        cout << "\t\t\t\t\t\t*************************************************************************" << endl;
        cout << "\t\t\t\t\t\tCustomer Details:\n\t\t\t\t\t\tEnter your Name and Address : " << endl;
        cout << "\t\t\t\t\t\t";
        getline(cin, Name);

        getline(cin, Name);

        cout << "\t\t\t\t\t\t";
        getline(cin, address);

        
        cout << "\t\t\t\t\t\tEnter your Phone Number : " << endl;
        cout << "\t\t\t\t\t\t";
        getline(cin, phonenumber);



        cout << "\t\t\t\t\t\tDo you have a Premium pass number? If you do, then Input 1, otherwise Input 0" << endl;
        cout << "\t\t\t\t\t\t";
        cin >> premium_pass_number_exists;
        if(premium_pass_number_exists == 1)
        {
            cout << "\t\t\t\t\t\tEnter the Premium pass number : ";
            cin >> premium_pass_number;
            if(stoi(premium_pass_number) >= 1000 && stoi(premium_pass_number) <= 1999)
            {
                cout << endl;
                cout << "\t\t\t\t\t\tValid Premium Pass Number!\n\t\t\t\t\t\t(Priority given while ordering)...\n" << endl;
                cout << endl;
            }
            else
            {
                cout << "\t\t\t\t\t\tInvalid Premium Pass Number!" << endl;
            }
        }

        cout << "\t\t\t\t\t\t*************************************************************************" << endl;



}

void Customer::Display_Customer_Details()
{ 
        cout << "\n\n\n\n\n\n\t\t\t\t\t\t*************************************************************************" << endl << endl;
        cout <<"\t\t\t\t\t\t*****************************  Customer Details  ***********************" << endl;
        cout <<"\t\t\t\t\t\t*************************************************************************\n\n\n" << endl;
        
        cout << left << setw(25) << "Customer ID" << left << setw(30) << "NAME" << left << setw(15) << "Address" << left << setw(20) << "Phone Number" << left << setw(15) << "Premium pass number" << endl;
        cout << left << setw(25) << rand() % 200 + 39764 << left << setw(30) << Name << left << setw(15) << address << left << setw(20) << phonenumber << left << setw(15) << premium_pass_number << endl;
        cout << "\t\t\t\t\t\t*************************************************************************" << endl;
        
}


class Restaurants
{
public:

    void Show_nearby_restaurants();
    bool Validity_Of_Coupon(string, int);
};


void Restaurants::Show_nearby_restaurants()
{
    cout << "\t\t\t\t\t\t1.Veg Restaurants\n\n\n";
    cout << "\t\t\t\t\t\t2.Non-Veg Restaurants\n\n\n";
}

bool Restaurants::Validity_Of_Coupon(string str, int n)
{
    // Checking for Invalid Coupons
    if (!((str[0] >= 'a' && str[0] <= 'z')
          || (str[0] >= 'A' && str[0] <= 'Z')
          || str[0] == '_'))
        return false;
 
    for (int i = 1; i < str.length(); i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z')
              || (str[i] >= 'A' && str[i] <= 'Z')
              || (str[i] >= '0' && str[i] <= '9')
              || str[i] == '_'))
            return false;
    }
 
    // String is a coupon
    return true;
}


class Veg : public Restaurants
{
public:

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
    cout << "\t\t\t\t\t\tIII.Sides\n\t6.Cookies [Rs 85]\n\t7.Chocolate Truffle Cake [Rs 75]\n\t8.French Fries [Rs 90]\n\t9.Crisps [Rs 65]\n";
    cout << "\t\t\t\t\t\tIV.Beverages\n\t10.Lipton Ice Tea [Rs 80]\n\t11.Tropicanna Juice [Rs 80]\n\t12.Slice [Rs 80]\n\t13.Chocolate Shake [Rs 100]\n\t14.Hot Chocolate [Rs 120]\n";



}
void Veg::Pizza_Express()
{
    cout << "\t\t\t\t\t\tI.PIZZAS\n\t1.Picoolo Classic Margherita (RS 245)\n\t2. Picoolo Classic Mushroom (RS 245)\n3\t.Piccolo Classic American (RS 295)\n4. Kids Verdure (RS 245)\n5. Polla Verde (RS 295) \n" << endl;
    cout << "\t\t\t\t\t\tII.PASTAS\n\t6.Baked Mac And Cheese (RS 225)\n\t7. Penna Forestier (RS 225)\n\n" << endl;
    cout << "\t\t\t\t\t\tIII.SIDES\n\t8.Dough Balls With Cheese Dip (RS 135)\n\t9. Baked Smileys (RS 135)" << endl;



}
void Veg::Mainland_China()
{

    cout << "\t\t\t\t\t\tI.BEVERAGES\n\t 1. Watermelo Cilantro Crush (RS 200)\n\t 2. Fresh Lime Soda (RS 110)" << endl;
    cout << "\t\t\t\t\t\tII.DIMSUMS\n\t 3. Basil Flavoured Vegetable Dumplings (RS 310)\n\t 4. Corn and Cheese Dumplings (RS 310)" << endl;
    cout << "\t\t\t\t\t\tIII.APPETIZERS\n\t 5. Sichuan Chilli Babycorn (RS 435)\n\t 6. Jiang's Chilli Cottage Cheese (RS 475)" << endl;


}


void Veg::Show_Veg_Restaurants()
{
    cout << "\t\t\t\t\t\tThe List of Veg Restaurants is:\n\t\t\t\t\t\t1.Mia Cucina\n\t\t\t\t\t\t2.Subway\n\t\t\t\t\t\t3.Tiara\n\t\t\t\t\t\t4.McDonalds\n\t\t\t\t\t\t5.Pizza Express\n\t\t\t\t\t\t6.Mainland China\n";
}


class Non_Veg : public Restaurants
{
public:

    
    string menu_7[25] =
    {
        "Dhuandhar Murgh Tikka",
        "Kasoori Mirch Fish Tikka",
        "Tandoori Chicken",
        "Butter Chicken",
        "Bhuna Murgh Kali Mirch",
        "Penne chicken",
        "Spaghetti Chicken"

    };

    float price_7[25] = 
    {

        325.0,
        325.0,
        575.0,
        345.0,
        355.0,
        375.0,
        375.0

    };


    
    string menu_8[25] =
    {
        "Pork And Chineese Cabbage",
        "Smoked Chicken And Spinach",
        "Tuna Tartare Roll",
        "Prawn Tempura Roll",
        "Non Veg Spider Roll",
        "Pennang Curry With Chicken",
        "Japanese Chicken Kabocha Curry"

    };

    float price_8[25] = 
    {

        400.0,
        425.0,
        400.0,
        375.0,
        400.0,
        450.0,
        450.0

    };

    
    string menu_9[25] =
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

    float price_9[25] = 
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

    
    string menu_10[25] =
    {
        "Mutton Seekh kebab",
        "Fish Tikka",
        "Chicken Tikka",
        "Pepper Chicken",
        "Prawns Tepanyakki",
        "Dory Fish",
        "One Chicken Gravy And One Mutton Gravy"
    };

    float price_10[25] = 
    {

        400.0,
        450.0,
        400.0,
        350.0,
        400.0,
        350.0,
        550.0

    };

    
    string menu_11[25] =
    {
        "Popcorn Chicken Large",
        "Boneless Strips 6 pcs",
        "Classic Zinger",
        "Spicy Zinger"
    };

    float price_11[25] = 
    {

        180.0,
        205.0,
        150.0,
        160.0

    };

        string menu_12[25] =
    {
        "Crunchy Tuna Rol",
        "Hamachi New York Drago",
        "Chicken Gyoza",
        "Chilli Coriander Chicken",
        "Poached Chicken Dumpling",
        "Hakka Basil Chicken",
        "Hot Garlic Chick",
        
    };

    float price_12[25] = 
    {

        450.0,
        550.0,
        395.0,
        695.0,
        995.0,
        350.0,
        350.0

    };



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
    cout << "\t\t\t\t\t\tzI.STARTERS\n\t 1. Dhuandhar Murgh Tikka(RS 325)\n\t 2. Kasoori Mirch Fish Tikka(RS 325)\n\t 3. Tandoori Chicken(Rs 575)" << endl;
    cout << "\t\t\t\t\t\tII.MAIN COURSE\n\t 4. Butter Chicken (RS 345)\n\t 5. Bhuna Murgh Kali Mirch (RS 355)" << endl;
    cout << "\t\t\t\t\t\tIII.PASTAS\n\t 6. Penne chicken (RS  375) \n\t 7. Spaghetti Chicken (RS 375) "<< endl;




}

void Non_Veg::The_Fatty_Bao()
{
    cout << "\t\t\t\t\t\tI.GYOZA \n\t 1. Pork And Chineese Cabbage (RS 400) \n\t 2. Smoked Chicken And Spinach (RS 425)" << endl;
    cout << "\t\t\t\t\t\tII.SUSHI ROLL\n\t 3. Tuna Tartare Roll (RS 400)\n\t 4. Prawn Tempura Roll (RS 375)\n\t 5. Non Veg Spider Roll (RS 400)" << endl;
    cout << "\t\t\t\t\t\tIII.MAIN COURSE\n\t 6. Pennang Curry With Chicken (RS 450)\n\t 7. Japanese Chicken Kabocha Curry (RS 450)" << endl;


}

void Non_Veg::Ticca_Tikka()
{
    cout << "\t\t\t\t\t\tI.APPETIZER \n\t 1. Classic Chicken Tikka (RS 425)\n\t 2. Basil Chicken Tikka (RS 395)\n\t 3. Malai Chicken Tikka (Rs 425)" << endl;
    cout << "\t\t\t\t\t\tII.ROLLS AND WRAPS\n\t 4.Chicken Tikka wrap (RS 280) \n\t 5. Chicken Malai Wrap (Rs 280)\n\t 6. Mutton Seekh Wrap (RS 300)" << endl;
    cout << "\t\t\t\t\t\tIII.KEBABS\n\t 7. Chicken Seekh Kebab (RS 365)\n\t 8. Chicken Chapli Kebab (RS 385)\n\t 9. Tawa Chicken (RS 385)" << endl; 



}

void Non_Veg::Global_Fusion()
{
    cout << "\t\t\t\t\t\tI.INDIAN STARTERS \n\t 1. Mutton Seekh kebab (Rs 400) \n\t 2. Fish Tikka (Rs 450) \n\t 3. Chicken Tikka (RS 400) "<< endl;
    cout << "\t\t\t\t\t\tII.CHINESE STARTERS \n\t 4. Pepper Chicken (RS 350) \n\t 5. Prawns Tepanyakki (RS 400)\n\t 6. Dory Fish (RS 350)" << endl;
    cout << "\t\t\t\t\t\tIII.MAIN COURSE \n\t 7. One Chicken Gravy And One Mutton Gravy (RS 550)" << endl;


}


void Non_Veg::KFC()
{
    cout << "\t\t\t\t\t\tI.SNACKS \n\t 1. Popcorn Chicken Large (Rs 180) \n\t 2. Boneless Strips 6 pcs (RS 205) " << endl;
    cout << "\t\t\t\t\t\tII.BURGERS \n\t 3. Classic Zinger (Rs 150) \n\t 4. Spicy Zinger (Rs 160)" << endl;


}

void Non_Veg::Shizusan()
{
    cout <<"\t\t\t\t\t\tI.SUSHI \n\t 1. Crunchy Tuna Roll (Rs 450) \n\t 2. Hamachi New York Dragon (RS 550)" << endl;
    cout <<"\t\t\t\t\t\tII.DIMSUM \n\t 3. Chicken Gyoza (Rs 395) \n\t 4. Chilli Coriander Chicken (RS 695) \n\t 5. Poached Chicken Dumpling (RS 995)" << endl;
    cout <<"\t\t\t\t\t\tIII.ASIAN TAPAS \n\t 6. Hakka Basil Chicken (RS 350) \n\t 7. Hot Garlic Chicken (RS 350)" << endl;


}

void Non_Veg::Show_NonVeg_Restaurants()
{
    cout << "\t\t\t\t\t\tThe List of Non-Veg Restaurants is:\n\t\t\t\t\t\t1.Sigree Global Grill\n\t\t\t\t\t\t2.The Fatty Bao\n\t\t\t\t\t\t3.Ticca Tikka\n\t\t\t\t\t\t4.Global Fusion\n\t\t\t\t\t\t5.Kofuku\n\t\t\t\t\t\t6.Shizusan\n";
}

// Main Function of the Program
int main()
{

        class Customer customer;
        class Restaurants restaurant;
        class Veg veg;
        class Non_Veg non_Veg;
        class Food food;
        Order order[50];
    
        bool run = true;
        int ch;
        int k = 0;
        cout << "\t\t\t\t\t\tWelcome to the Food Delivery System!\n\n";
        cout << "\t\t\t\t\t\tWhat would you like to do?\n\t\t\t\t\t\t1.Order Food to your house\n\t\t\t\t\t\t2.Takeaway (Pick up food from a restaurant)\n\t\t\t\t\t\t3.Exit\n";
        cin >> ch;

        if(ch == 1)
        {
            int type_restaurant;
            int type_choice_restaurant;
            int order_number;
            int quantity;

            customer.Input_Customer_Details();


            cout << "\t\t\t\t\t\tThe Restuarants near you (Veg & Non Veg) are: \n";
            restaurant.Show_nearby_restaurants();
            cout << "\t\t\t\t\t\tWhich type of restaurant would you like to place an order in?\n";
            cin >> type_restaurant;
            if (type_restaurant == 1)
            {
                veg.Show_Veg_Restaurants();
                cout << "\t\t\t\t\t\tWhich restaurant do you pick?\n";
                cin >> type_choice_restaurant;

                switch (type_choice_restaurant)
                {
                case 1:


                    do
                    {
                        veg.Mia_Cucina();
                        cout << "\n\t\t\t\t\t\tSelect the food you want to order (Enter the Number displayed before the food you want to order) : ";
                        cin >> order_number;
                        k++;
                        cout << "\n\t\t\t\t\t\tYou have selected " << veg.menu_1[order_number - 1];

                        cout << "\n\t\t\t\t\t\tEnter Quantity : ";
                        cin >> quantity;
                        cout << endl;

                        
                        food.Insert_Beg(veg.menu_1[order_number - 1], quantity, veg.price_1[order_number - 1], (quantity * veg.price_1[order_number - 1]));

                        cout << "\t\t\t\t\t\tWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                        cin >> run;

                    } while (run == true);
                    
                
                    break;
                
                case 2:
                    do
                    {
                        veg.Subway();
                        cout << "\n\t\t\t\t\t\tSelect the food you want to order (Enter the Number displayed before the food you want to order) : ";
                        cin >> order_number;
                        k++;
                        cout << "\n\t\t\t\t\t\tYou have selected " << veg.menu_2[order_number - 1];

                        cout << "\n\t\t\t\t\t\tEnter Quantity : ";
                        cin >> quantity;
                        cout << endl;

                        food.Insert_Beg(veg.menu_2[order_number - 1], quantity, veg.price_2[order_number - 1], (quantity * veg.price_2[order_number - 1]));

                        cout << "\t\t\t\t\t\tWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                        cin >> run;

                    } while (run == true);
                    
                    break;
                
                case 3:
                    do
                    {
                        veg.Tiara();
                        cout << "\n\t\t\t\t\t\tSelect the food you want to order (Enter the Number displayed before the food you want to order) : ";
                        cin >> order_number;
                        k++;
                        cout << "\n\t\t\t\t\t\tYou have selected " << veg.menu_3[order_number - 1];

                        cout << "\n\t\t\t\t\t\tEnter Quantity : ";
                        cin >> quantity;
                        cout << endl;

                        food.Insert_Beg(veg.menu_3[order_number - 1], quantity, veg.price_3[order_number - 1], (quantity * veg.price_3[order_number - 1]));


                        cout << "\t\t\t\t\t\tWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                        cin >> run;

                    } while (run == true);
                    
                    break;
                
                case 4:
                    do
                    {
                        veg.McDonalds();
                        cout << "\n\t\t\t\t\t\tSelect the food you want to order (Enter the Number displayed before the food you want to order) : ";
                        cin >> order_number;
                        k++;
                        cout << "\n\t\t\t\t\t\tYou have selected " << veg.menu_4[order_number - 1];

                        cout << "\n\t\t\t\t\t\tEnter Quantity : ";
                        cin >> quantity;
                        cout << endl;

                        
                        food.Insert_Beg(veg.menu_4[order_number - 1], quantity, veg.price_4[order_number - 1], (quantity * veg.price_4[order_number - 1]));

                        cout << "\t\t\t\t\t\tWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                        cin >> run;

                    } while (run == true);

                    break;
                
                case 5:
                    do
                    {
                        veg.Pizza_Express();
                        cout << "\n\t\t\t\t\t\tSelect the food you want to order (Enter the Number displayed before the food you want to order) : ";
                        cin >> order_number;
                        k++;
                        cout << "\n\t\t\t\t\t\tYou have selected " << veg.menu_5[order_number - 1];

                        cout << "\n\t\t\t\t\t\tEnter Quantity : ";
                        cin >> quantity;
                        cout << endl;

                        food.Insert_Beg(veg.menu_5[order_number - 1], quantity, veg.price_5[order_number - 1], (quantity * veg.price_5[order_number - 1]));

                        cout << "\t\t\t\t\t\tWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                        cin >> run;

                    } while (run == true);
                    
                    break;
                
                case 6:

                    do
                    {
                        veg.Mainland_China();
                        cout << "\n\t\t\t\t\t\tSelect the food you want to order (Enter the Number displayed before the food you want to order) : ";
                        cin >> order_number;
                        k++;
                        cout << "\n\t\t\t\t\t\tYou have selected " << veg.menu_6[order_number - 1];

                        cout << "\n\t\t\t\t\t\tEnter Quantity : ";
                        cin >> quantity;
                        cout << endl;

                        
                        food.Insert_Beg(veg.menu_6[order_number - 1], quantity, veg.price_6[order_number - 1], (quantity * veg.price_6[order_number - 1]));

                        cout << "\t\t\t\t\t\tWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                        cin >> run;


                    } while (run == true);
                    
                    
                    break;
                
                default:
                    break;
                }
            }
            else if (type_restaurant == 2)
            {
                non_Veg.Show_NonVeg_Restaurants();

                cout << "\t\t\t\t\t\tWhich restaurant do you pick?\n";
                cin >> type_choice_restaurant;

                switch (type_choice_restaurant)
                {
                case 1:

                    do
                    {
                        non_Veg.Sigree_Global_Grill();
                        cout << "\n\t\t\t\t\t\tSelect the food you want to order (Enter the Number displayed before the food you want to order) : ";
                        cin >> order_number;
                        k++;
                        cout << "\n\t\t\t\t\t\tYou have selected " << non_Veg.menu_7[order_number - 1];

                        cout << "\n\t\t\t\t\t\tEnter Quantity : ";
                        cin >> quantity;
                        cout << endl;

                        
                        food.Insert_Beg(non_Veg.menu_7[order_number - 1], quantity, non_Veg.price_7[order_number - 1], (quantity * non_Veg.price_7[order_number - 1]));

                        cout << "\t\t\t\t\t\tWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                        cin >> run;

                    } while (run == true);
                    
                
                    break;
                
                case 2:
                    do
                    {
                        non_Veg.The_Fatty_Bao();
                        cout << "\n\t\t\t\t\t\tSelect the food you want to order (Enter the Number displayed before the food you want to order) : ";
                        cin >> order_number;
                        k++;
                        cout << "\n\t\t\t\t\t\tYou have selected " << non_Veg.menu_8[order_number - 1];

                        cout << "\n\t\t\t\t\t\tEnter Quantity : ";
                        cin >> quantity;
                        cout << endl;

                        food.Insert_Beg(non_Veg.menu_8[order_number - 1], quantity, non_Veg.price_8[order_number - 1], (quantity * non_Veg.price_8[order_number - 1]));

                        cout << "\t\t\t\t\t\tWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                        cin >> run;

                    } while (run == true);
                    
                    break;
                
                case 3:
                    do
                    {
                        non_Veg.Ticca_Tikka();
                        cout << "\n\t\t\t\t\t\tSelect the food you want to order (Enter the Number displayed before the food you want to order) : ";
                        cin >> order_number;
                        k++;
                        cout << "\n\t\t\t\t\t\tYou have selected " << non_Veg.menu_9[order_number - 1];

                        cout << "\n\t\t\t\t\t\tEnter Quantity : ";
                        cin >> quantity;
                        cout << endl;

                        food.Insert_Beg(non_Veg.menu_9[order_number - 1], quantity, non_Veg.price_9[order_number - 1], (quantity * non_Veg.price_9[order_number - 1]));


                        cout << "\t\t\t\t\t\tWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                        cin >> run;

                    } while (run == true);
                    
                    break;
                
                case 4:
                    do
                    {
                        non_Veg.Global_Fusion();
                        cout << "\n\t\t\t\t\t\tSelect the food you want to order (Enter the Number displayed before the food you want to order) : ";
                        cin >> order_number;
                        k++;
                        cout << "\n\t\t\t\t\t\tYou have selected " << non_Veg.menu_10[order_number - 1];

                        cout << "\n\t\t\t\t\t\tEnter Quantity : ";
                        cin >> quantity;
                        cout << endl;

                        
                        food.Insert_Beg(non_Veg.menu_10[order_number - 1], quantity, non_Veg.price_10[order_number - 1], (quantity * non_Veg.price_10[order_number - 1]));

                        cout << "\t\t\t\t\t\tWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                        cin >> run;

                    } while (run == true);

                    break;
                
                case 5:
                    do
                    {
                        non_Veg.KFC();
                        cout << "\n\t\t\t\t\t\tSelect the food you want to order (Enter the Number displayed before the food you want to order) : ";
                        cin >> order_number;
                        k++;
                        cout << "\n\t\t\t\t\t\tYou have selected " << non_Veg.menu_11[order_number - 1];

                        cout << "\n\t\t\t\t\t\tEnter Quantity : ";
                        cin >> quantity;
                        cout << endl;

                        food.Insert_Beg(non_Veg.menu_11[order_number - 1], quantity, non_Veg.price_11[order_number - 1], (quantity * non_Veg.price_11[order_number - 1]));

                        cout << "\t\t\t\t\t\tWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                        cin >> run;

                    } while (run == true);
                    
                    break;
                
                case 6:

                    do
                    {
                        non_Veg.Shizusan();
                        cout << "\n\t\t\t\t\t\tSelect the food you want to order (Enter the Number displayed before the food you want to order) : ";
                        cin >> order_number;
                        k++;
                        cout << "\n\t\t\t\t\t\tYou have selected " << non_Veg.menu_12[order_number - 1];

                        cout << "\n\t\t\t\t\t\tEnter Quantity : ";
                        cin >> quantity;
                        cout << endl;

                        
                        food.Insert_Beg(non_Veg.menu_12[order_number - 1], quantity, non_Veg.price_12[order_number - 1], (quantity * non_Veg.price_12[order_number - 1]));

                        cout << "\t\t\t\t\t\tWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                        cin >> run;


                    } while (run == true);
                    
                    
                    break;
                
                default:
                    break;
                }



            }
            
            
        }
        else if (ch == 2)
        {
            int type_restaurant;
            int type_choice_restaurant;
            int order_number;
            int quantity;

            customer.Input_Customer_Details();


            cout << "\t\t\t\t\t\tThe Restuarants near you (Veg & Non Veg) are: \n";
            restaurant.Show_nearby_restaurants();
            cout << "\t\t\t\t\t\tWhich type of restaurant would you like to place an order in?\n";
            cin >> type_restaurant;
            if (type_restaurant == 1)
            {
                veg.Show_Veg_Restaurants();
                cout << "\t\t\t\t\t\tWhich restaurant do you pick?\n";
                cin >> type_choice_restaurant;

                switch (type_choice_restaurant)
                {
                case 1:


                    do
                    {
                        veg.Mia_Cucina();
                        cout << "\n\t\t\t\t\t\tSelect the food you want to order (Enter the Number displayed before the food you want to order) : ";
                        cin >> order_number;
                        k++;
                        cout << "\n\t\t\t\t\t\tYou have selected " << veg.menu_1[order_number - 1];

                        cout << "\n\t\t\t\t\t\tEnter Quantity : ";
                        cin >> quantity;
                        cout << endl;

                        
                        food.Insert_Beg(veg.menu_1[order_number - 1], quantity, veg.price_1[order_number - 1], (quantity * veg.price_1[order_number - 1]));

                        cout << "\t\t\t\t\t\tWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                        cin >> run;

                    } while (run == true);
                    
                
                    break;
                
                case 2:
                    do
                    {
                        veg.Subway();
                        cout << "\n\t\t\t\t\t\tSelect the food you want to order (Enter the Number displayed before the food you want to order) : ";
                        cin >> order_number;
                        k++;
                        cout << "\n\t\t\t\t\t\tYou have selected " << veg.menu_2[order_number - 1];

                        cout << "\n\t\t\t\t\t\tEnter Quantity : ";
                        cin >> quantity;
                        cout << endl;

                        food.Insert_Beg(veg.menu_2[order_number - 1], quantity, veg.price_2[order_number - 1], (quantity * veg.price_2[order_number - 1]));

                        cout << "\t\t\t\t\t\tWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                        cin >> run;

                    } while (run == true);
                    
                    break;
                
                case 3:
                    do
                    {
                        veg.Tiara();
                        cout << "\n\t\t\t\t\t\tSelect the food you want to order (Enter the Number displayed before the food you want to order) : ";
                        cin >> order_number;
                        k++;
                        cout << "\n\t\t\t\t\t\tYou have selected " << veg.menu_3[order_number - 1];

                        cout << "\n\t\t\t\t\t\tEnter Quantity : ";
                        cin >> quantity;
                        cout << endl;

                        food.Insert_Beg(veg.menu_3[order_number - 1], quantity, veg.price_3[order_number - 1], (quantity * veg.price_3[order_number - 1]));


                        cout << "\t\t\t\t\t\tWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                        cin >> run;

                    } while (run == true);
                    
                    break;
                
                case 4:
                    do
                    {
                        veg.McDonalds();
                        cout << "\n\t\t\t\t\t\tSelect the food you want to order (Enter the Number displayed before the food you want to order) : ";
                        cin >> order_number;
                        k++;
                        cout << "\n\t\t\t\t\t\tYou have selected " << veg.menu_4[order_number - 1];

                        cout << "\n\t\t\t\t\t\tEnter Quantity : ";
                        cin >> quantity;
                        cout << endl;

                        
                        food.Insert_Beg(veg.menu_4[order_number - 1], quantity, veg.price_4[order_number - 1], (quantity * veg.price_4[order_number - 1]));

                        cout << "\t\t\t\t\t\tWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                        cin >> run;

                    } while (run == true);

                    break;
                
                case 5:
                    do
                    {
                        veg.Pizza_Express();
                        cout << "\n\t\t\t\t\t\tSelect the food you want to order (Enter the Number displayed before the food you want to order) : ";
                        cin >> order_number;
                        k++;
                        cout << "\n\t\t\t\t\t\tYou have selected " << veg.menu_5[order_number - 1];

                        cout << "\n\t\t\t\t\t\tEnter Quantity : ";
                        cin >> quantity;
                        cout << endl;

                        food.Insert_Beg(veg.menu_5[order_number - 1], quantity, veg.price_5[order_number - 1], (quantity * veg.price_5[order_number - 1]));

                        cout << "\t\t\t\t\t\tWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                        cin >> run;

                    } while (run == true);
                    
                    break;
                
                case 6:

                    do
                    {
                        veg.Mainland_China();
                        cout << "\n\t\t\t\t\t\tSelect the food you want to order (Enter the Number displayed before the food you want to order) : ";
                        cin >> order_number;
                        k++;
                        cout << "\n\t\t\t\t\t\tYou have selected " << veg.menu_6[order_number - 1];

                        cout << "\n\t\t\t\t\t\tEnter Quantity : ";
                        cin >> quantity;
                        cout << endl;

                        
                        food.Insert_Beg(veg.menu_6[order_number - 1], quantity, veg.price_6[order_number - 1], (quantity * veg.price_6[order_number - 1]));

                        cout << "\t\t\t\t\t\tWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                        cin >> run;


                    } while (run == true);
                    
                    
                    break;
                
                default:
                    break;
                }
            }
            else if (type_restaurant == 2)
            {
                non_Veg.Show_NonVeg_Restaurants();

                cout << "\t\t\t\t\t\tWhich restaurant do you pick?\n";
                cin >> type_choice_restaurant;

                switch (type_choice_restaurant)
                {
                case 1:

                    do
                    {
                        non_Veg.Sigree_Global_Grill();
                        cout << "\n\t\t\t\t\t\tSelect the food you want to order (Enter the Number displayed before the food you want to order) : ";
                        cin >> order_number;
                        k++;
                        cout << "\n\t\t\t\t\t\tYou have selected " << non_Veg.menu_7[order_number - 1];

                        cout << "\n\t\t\t\t\t\tEnter Quantity : ";
                        cin >> quantity;
                        cout << endl;

                        
                        food.Insert_Beg(non_Veg.menu_7[order_number - 1], quantity, non_Veg.price_7[order_number - 1], (quantity * non_Veg.price_7[order_number - 1]));

                        cout << "\t\t\t\t\t\tWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                        cin >> run;

                    } while (run == true);
                    
                
                    break;
                
                case 2:
                    do
                    {
                        non_Veg.The_Fatty_Bao();
                        cout << "\n\t\t\t\t\t\tSelect the food you want to order (Enter the Number displayed before the food you want to order) : ";
                        cin >> order_number;
                        k++;
                        cout << "\n\t\t\t\t\t\tYou have selected " << non_Veg.menu_8[order_number - 1];

                        cout << "\n\t\t\t\t\t\tEnter Quantity : ";
                        cin >> quantity;
                        cout << endl;

                        food.Insert_Beg(non_Veg.menu_8[order_number - 1], quantity, non_Veg.price_8[order_number - 1], (quantity * non_Veg.price_8[order_number - 1]));

                        cout << "\t\t\t\t\t\tWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                        cin >> run;

                    } while (run == true);
                    
                    break;
                
                case 3:
                    do
                    {
                        non_Veg.Ticca_Tikka();
                        cout << "\n\t\t\t\t\t\tSelect the food you want to order (Enter the Number displayed before the food you want to order) : ";
                        cin >> order_number;
                        k++;
                        cout << "\n\t\t\t\t\t\tYou have selected " << non_Veg.menu_9[order_number - 1];

                        cout << "\n\t\t\t\t\t\tEnter Quantity : ";
                        cin >> quantity;
                        cout << endl;

                        food.Insert_Beg(non_Veg.menu_9[order_number - 1], quantity, non_Veg.price_9[order_number - 1], (quantity * non_Veg.price_9[order_number - 1]));


                        cout << "\t\t\t\t\t\tWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                        cin >> run;

                    } while (run == true);
                    
                    break;
                
                case 4:
                    do
                    {
                        non_Veg.Global_Fusion();
                        cout << "\n\t\t\t\t\t\tSelect the food you want to order (Enter the Number displayed before the food you want to order) : ";
                        cin >> order_number;
                        k++;
                        cout << "\n\t\t\t\t\t\tYou have selected " << non_Veg.menu_10[order_number - 1];

                        cout << "\n\t\t\t\t\t\tEnter Quantity : ";
                        cin >> quantity;
                        cout << endl;

                        
                        food.Insert_Beg(non_Veg.menu_10[order_number - 1], quantity, non_Veg.price_10[order_number - 1], (quantity * non_Veg.price_10[order_number - 1]));

                        cout << "\t\t\t\t\t\tWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                        cin >> run;

                    } while (run == true);

                    break;
                
                case 5:
                    do
                    {
                        non_Veg.KFC();
                        cout << "\n\t\t\t\t\t\tSelect the food you want to order (Enter the Number displayed before the food you want to order) : ";
                        cin >> order_number;
                        k++;
                        cout << "\n\t\t\t\t\t\tYou have selected " << non_Veg.menu_11[order_number - 1];

                        cout << "\n\t\t\t\t\t\tEnter Quantity : ";
                        cin >> quantity;
                        cout << endl;

                        food.Insert_Beg(non_Veg.menu_11[order_number - 1], quantity, non_Veg.price_11[order_number - 1], (quantity * non_Veg.price_11[order_number - 1]));

                        cout << "\t\t\t\t\t\tWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                        cin >> run;

                    } while (run == true);
                    
                    break;
                
                case 6:

                    do
                    {
                        non_Veg.Shizusan();
                        cout << "\n\t\t\t\t\t\tSelect the food you want to order (Enter the Number displayed before the food you want to order) : ";
                        cin >> order_number;
                        k++;
                        cout << "\n\t\t\t\t\t\tYou have selected " << non_Veg.menu_12[order_number - 1];

                        cout << "\n\t\t\t\t\t\tEnter Quantity : ";
                        cin >> quantity;
                        cout << endl;

                        
                        food.Insert_Beg(non_Veg.menu_12[order_number - 1], quantity, non_Veg.price_12[order_number - 1], (quantity * non_Veg.price_12[order_number - 1]));

                        cout << "\t\t\t\t\t\tWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
                        cin >> run;


                    } while (run == true);
                    
                    
                    break;
                
                default:
                    break;
                }



            }


            cout << "\t\t\t\t\t\tOrder Received, Food is getting prepared!\n\t\t\t\t\t\tWait for a while before driving to the restaurant to collect your order!" << endl;

        }
        if(ch == 3)
        {
            exit(0);
        }




        int choice;
        bool run_choice = true;
        string coupon;
        do
        {
            cout << "\n\t\t\t\t\t\tWhat would you like to do now?\n\t\t\t\t\t\t1.Update Customer Information\n\t\t\t\t\t\t2.Delete an Item from the Cart\n\t\t\t\t\t\t3.Apply Coupons\n\t\t\t\t\t\t4.Generate Bill\n\t\t\t\t\t\t5.Exit\n";
            cin >> choice;
            switch (choice)
            {
                case 1:
                    customer.Input_Customer_Details();
                    break;

                case 2:

                    int index_value;
                    food.Bill_Generation();
                    food.Calculate_Amount();
                    cout << "\t\t\t\t\t\tPlease enter the Index Number of the Item to be deleted" << endl;
                    cin >> index_value;

                    food.Delete_Pos(index_value);

                    food.Bill_Generation();
                    food.Calculate_Amount();


                    break;

                case 3:
                    cout << "\t\t\t\t\t\tEnter the Coupon Code : ";
                    cin >> coupon;
                    if(restaurant.Validity_Of_Coupon(coupon, sizeof(coupon)))
                    {
                        cout << "\t\t\t\t\t\tCoupon is Valid! Further Discount applied to Bill!\n";
                        food.Discount();

                    }
                    else if(!(restaurant.Validity_Of_Coupon(coupon, sizeof(coupon))))
                    {
                        cout << "\t\t\t\t\t\tInvalid Coupon!\n";
                        cout << "\t\t\t\t\t\tNo discount applied! Total Amount remains same!" << endl;
                    }
                    break;

                case 4:
                    food.Bill_Generation();
                    food.Calculate_Amount();
                    customer.Display_Customer_Details();
                    break;
                

                case 5:
                    exit(0);



                
                default:
                    break;
            }

            cout << "\t\t\t\t\t\tWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run_choice;

        } while (run_choice == true);
       
    

    return 0;
}