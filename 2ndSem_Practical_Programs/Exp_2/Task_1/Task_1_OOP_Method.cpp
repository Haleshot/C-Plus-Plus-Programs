#include <iostream>
using namespace std;
#define MAX 100

class Stack
{
    public:
    int Stack[100], top = -1;

    void Push(int value);
    void Pop();
    void Peek();
    void Display();

};

void Stack::Push(int value)
{
    if (top == MAX - 1)
    {
        cout << "Overflow!" << endl;
    }
    else
    {
        top += 1;
        Stack[top] = value;
    }
}

void Stack::Pop()
{
    if (top < 0)
    {
        cout << "Underflow!" << endl;
    }
    else
    {
        int x = Stack[top];
        top -= 1;
        cout << "Popped out Element is = " << x << endl;
    }
}

void Stack::Peek()
{
    if (top < 0)
    {
        cout << "Stack is Empty!" << endl;
    }
    else
    {
        cout << "Element at the Stack's Top is = " << Stack[top] << endl;
    }
}

void Stack::Display()
{
    if (top < 0)
    {
        cout << "Stack is Empty!" << endl;
    }
    else
    {
        cout << "The Stack's Elements are : \n";
        for(int i  = top; i >= 0; i--)
        {
            cout << Stack[i] << endl;
        }
    }
}

int main()
{
    int ch;
    class Stack stk;
    bool run = true;
    do
    {
        cout << "Menu\n 1.Push Value \n 2.Pop Value \n 3.Peek Value \n 4.Display Stack \n 5. Exit \n" ;
        cout << "Enter Choice\n" ;
        cin >> ch;
        if (ch == 1)
        {
            int value_push;
            cout << "Enter Value to be pushed into the Stack \n";
            cin >> value_push;
            stk.Push(value_push);
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        if (ch == 2)
        {
            stk.Pop();
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        if (ch == 3)
        {
            stk.Peek();
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        if (ch == 4)
        {
            stk.Display();
            cout << "\nWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        if (ch == 5)
        {
            return 0;
        }

    } while (run == true);
    
    return 0;
}