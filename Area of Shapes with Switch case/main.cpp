// Program that calculates area of different shapes using Switch Case method.
#include <iostream>
#define pi 3.14
using namespace std;

inline AreaC(int r)
{

    int area = pi * r * r;
    cout << "Area of Circle is = " << area << endl;
}

inline AreaR(int l, int b)
{

    int area = l * b;
    cout << "Area of Rectangle is = " << area << endl;
}

inline AreaT(int b, int h)
{

    int area = 0.5 * b * h;
    cout << "Area of Triangle is = " << area << endl;
}



int main()
{
    int ch;
    bool flag = true;

    cout << "Menu\n 1.  Area of Circle, \n 2.  Area of Rectangle, \n 3.  Area of Triangle, \n 4.  Area of Square \n" ;
    cout << "Enter Choice\n" ;
    cin >> ch;

    switch(ch)
    {
        case 1:
            int radius;
            cout << "Enter Radius for Circle " << endl;
            cin >> radius;

            AreaC(radius);
            break;

        case 2:
            int length, breadth;
            cout << "Enter Length and Breadth for Rectangle " << endl;
            cin >> length >> breadth;

            AreaR(length, breadth);
            break;

        case 3:
            int base, height;
            cout << "Enter Base and Height for Traingle " << endl;
            cin >> base >> height;

            AreaT(base, height);
            break;

        default :
            cout << "Invalid Choice" << endl;

    }

    do
    {
        char c;
        cout << "Thank you!\n";
        cout << "Do you wish to continue?\n";
        cin >> c;
        tolower(c);
        if (c == 'n')
        {
            flag = false;
            break;
        }
        else if (c == 'y')
        {
            main();
        }


    }while(flag == true);


    return 0;



}
