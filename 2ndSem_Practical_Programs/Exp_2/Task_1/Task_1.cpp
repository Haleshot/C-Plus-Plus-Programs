//Stack STL program (done with functions)
#include <iostream>
using namespace std;
#define Max 100
int Stack[Max], top = -1;

void Push(int top_value)
{
    if (top_value == Max - 1)
    {
        cout << "Overflow!" << endl;
    }
    else
    {
        top += 1;
        Stack[top] = top_value;
    }
}
void Peek()
{
    if (top < 0)
    {
        cout << "Emtpy" << endl;
    }
    else
    {
        cout << "Element at Stack's Top = " << Stack[top] << endl;
    }
}
void Pop()
{
    if (top < 0)
    {
        cout << "Underflow!" << endl;
    }
    else
    {
        int x = Stack[top];
        top -= 1;
        cout << "Popped out element is = " << x;
    }
}
void Display()
{
    if(top >= 0)
    {
        cout << "Stacks Elements are : " << endl;
        for(int i = top; i >= 0; i--)
            {
                cout <<  Stack[i] << endl;
            }
    }
}
int main()
{
    int ch;
    bool run = true;
    do while (run == true)
    {
        cout << "Menu\n 1.Push Value \n 2.Pop Value \n 3.Peek Value \n 4.Display Stack \n 5. Exit \n" ;
        cout << "Enter Choice\n" ;
        cin >> ch;

        if (ch == 1)
        {
            int value_push;
            cout << "Enter Value to be pushed into the Stack \n";
            cin >> value_push;
            Push(value_push);
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        if (ch == 2)
        {
            Pop();
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        if (ch == 3)
        {
            Peek();
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        if (ch == 4)
        {
            Display();
            cout << "\nWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
    }while (run == true);
    return 0;
}
