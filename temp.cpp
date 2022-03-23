#include <iostream>
using namespace std;
#define MAX 100

int Stack[100], top = -1;

void Push(int value)
{
    if(top == MAX - 1)
    {
        cout << "Overflow" << endl;
    }
    else
    {
        top += 1;
        Stack[top] = value;
    }
}

void Pop()
{
    if(top == -1)
    {
        cout << "Underflow!" << endl;
    }
    else
    {
        int x = Stack[top];
        cout << "The Popped out element is = " << x << endl;
        top -= 1;
    }
}

void Display()
{
    for(int i = top; i >= 0; i--)
    {
        cout << Stack[i] << endl;
    }
}
void Peek()
{
    int x = Stack[top];
    cout << "The Element present at the Stack's Top is = " << x << endl;
}

int main()
{
    bool run = true;
    do
    {
        int ch;
        cout << "Menu\n1.Push an Element into the Stack\n2.Pop an Element from the Stack3.Peek\n4.Display the Elements of the Stack\nEnter your choice" << endl;
        cin >> ch;

        if(ch == 1)
        {
            int value_user;
            cout << "Enter value to be pushed into the Stack" << endl;
            cin >> value_user;
            Push(value_user);
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        if(ch == 1)
        {
            Pop();
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        if(ch == 3)
        {
            Peek();
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        if(ch == 1)
        {
            Display();
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
    } while (run == true);
    
    return 0;
}