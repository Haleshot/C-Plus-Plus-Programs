#include <iostream>
using namespace std;
#define MAX 100
int Stack[MAX], top = -1;

void Push(int value)
{
    if(top > MAX - 1)
    {
        cout << "Overflow!" << endl;
    }
    else
    {
        top += 1;
        Stack[top] = value;
    }
}

void Pop()
{
    if(top < 0)
    {
        cout << "Underflow!" << endl;
    }
    else
    {
        int x = Stack[top];
        cout << x;
        top -= 1;
    }
}

void Peek()
{
    if(top < 0)
    {
        cout << "Stack iS Empty!" << endl;
    }
    else
    {
        cout << "Element at Stack's Top = " << Stack[top] << endl;
    }
}

void Display()
{
    if(top < 0)
    {
        cout << "Stack iS Empty!" << endl;
    }
    else
    {
        for(int i = top; i >= 0; i--)
        {
            cout << Stack[i] << endl;
        }
    }
}


int main()
{

    return 0;
}