// Program that performs addition, subtraction and multiplication of 2 complex numbers with class Encapsulation method.
#include <iostream>
#define pi 3.14
using namespace std;

class Complex
{
    public:
        int real, imaginary;
    Complex(int tempReal = 0, int tempImaginary = 0)
    {
        real = tempReal;
        imaginary = tempImaginary;
    }
    Complex addComp(Complex C1, Complex C2)
    {
        Complex temp;
        temp.real = C1.real + C2.real;
        temp.imaginary = C1.imaginary + C2.imaginary;
        return temp;
    }

    Complex SubComp(Complex C1, Complex C2)
    {
        Complex temp;
        temp.real = C1.real - C2.real;
        temp.imaginary = C1.imaginary - C2.imaginary;
        return temp;
    }

    Complex MultComp(Complex C1, Complex C2)
    {
        Complex temp;
        temp.real = C1.real * C2.real;
        temp.imaginary = C1.imaginary * C2.imaginary;
        return temp;
    }

};



int main()
{
    int ch;
    Complex comp;
    Complex C3;

    cout << "Menu\n 1.  Addition of Complex Numbers, \n 2.  Subtraction of Complex Numbers, \n 3.  Multiplication of Complex Numbers \n" ;
    cout << "Enter Choice\n" ;
    cin >> ch;

    switch(ch)
    {
        case 1:
            {
            int n1, n2, n3, n4;
            cout << "Enter the Complex number 1\n " << endl;
            cin >> n1 >> n2;
            cout << "Enter the Complex number 2\n " << endl;
            cin >> n3 >> n4;
            Complex C1(n1, n2);
            Complex C2(n3, n4);

            cout << "Complex Number 1 is = \n " << C1.real << "  + " << " i" << C1.imaginary << endl;
            cout << "Complex Number 2 is = \n " << C2.real << "  + " << " i" << C2.imaginary << endl;
            C3 = comp.addComp(C1, C2);
            cout << "Sum of Complex Numbers 1 and 2 is = \n " << C3.real << " + " << " i" << C3.imaginary << endl;


            break;
            }

        case 2:{
            int n5, n6, n7, n8;
            cout << "Enter the Complex number 1\n " << endl;
            cin >> n5 >> n6;
            cout << "Enter the Complex number 2\n " << endl;
            cin >> n7 >> n8;
            Complex C4(n5, n6);
            Complex C5(n7, n8);
            Complex C6;

            cout << "Complex Number 1 is = \n " << C4.real << "  + " << " i" << C4.imaginary << endl;
            cout << "Complex Number 2 is = \n " << C5.real << "  + " << " i" << C5.imaginary << endl;
            C6 = comp.SubComp(C4, C5);
            cout << "Sum of Complex Numbers 1 and 2 is = \n " << C6.real << " + " << " i" << C3.imaginary << endl;


            break;
        }

        case 3:{
            int n7, n8, n9, n10;
            cout << "Enter the Complex number 1\n " << endl;
            cin >> n7 >> n8;
            cout << "Enter the Complex number 2\n " << endl;
            cin >> n9 >> n10;
            Complex C7(n7, n8);
            Complex C8(n9, n10);
            Complex C9;

            cout << "Complex Number 1 is = \n " << C7.real << "  + " << " i" << C7.imaginary << endl;
            cout << "Complex Number 2 is = \n " << C8.real << "  + " << " i" << C8.imaginary << endl;
            C9 = comp.MultComp(C7, C8);
            cout << "Sum of Complex Numbers 1 and 2 is = \n " << C9.real << " + " << " i" << C9.imaginary << endl;


            break;
        }


        default :
            cout << "Invalid Choice" << endl;

    }


    return 0;



}
