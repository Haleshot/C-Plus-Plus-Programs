#include <iostream>
#define pi 3.14
using namespace std;

void AreaC(int rad)
{

    int area = pi * rad * rad;
    cout << "Area of Circle is = " << area << endl;
}

void AreaR(int l, b)
{

    int area = l * b;
    cout << "Area of Rectangle is = " << area << endl;
}

void AreaT(int base, height)
{

    int area = 0.5 * base * height;
    cout << "Area of Triangle is = " << area << endl;
}



int main()
{
    char ch;

    cout << "Menu\n 1. Area of Circle, \n 2.  Area of Rectangle, \n 3.  Area of Triangle, \n 4.  Area of Square \n" ;
    cout << "Enter Choice\n" ;
    cin >> ch;

    switch(ch)
    {
    case 1:
        int radius;
        cout << "Enter Radius for Circle " << endl;
        cin >> radius;

        AreaC(radius);

    case 2:
        int length, breadth;
        cout << "Enter Length and Breadth for Rectangle " << endl;
        cin >> length >> breadth;

        AreaR(length, breadth);

    case 3:
        int base, heigt;
        cout << "Enter Base and Height for Traingle " << endl;
        cin >> base >> height;

        AreaT(base, height);

    default :

        cout << "Invalid Choice" << endl;

    }



    return 0;



}
