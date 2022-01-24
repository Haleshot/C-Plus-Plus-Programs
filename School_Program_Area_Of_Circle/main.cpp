// Program that calculates Area of Shapres using Switch Case.
#include <iostream>
#define pi 3.14
using namespace std;

int main()
{
    char ch;

    cout << "Menu\n 1. Area of Circle, \n 2.  Area of Rectangle, \n 3.  Area of Triangle, \n 4.  Area of Square \n" ;
    cout << "Enter Choice\n" ;
    cin >> ch;

    switch(ch)
    {
    case 1:
        int rad, area;
        area = pi * rad * rad;
        cout << "Area of Circle is = " << area << endl;
        break;

    case 2:
        int l, b, area;
        area = l * b;
        cout << "Area of Rectangle is = " << area << endl;
        break;

    case 3:
        int base, height, area;
        area = 0.5 * base * height;
        cout << "Area of Triangle is = " << area << endl;
        break;

    case 4:
        int side, area;
        area = side * side;
        cout << "Area of Square is = " << area << endl;
        break;
    default :

        cout << "Invalid Number" << endl;

    }



    return 0;



}
