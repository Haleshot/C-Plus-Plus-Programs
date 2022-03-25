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


int main()
{
    bool run = true;
    for(int i = 0; i < MAX; i++)
        {
            Stack[i] = 0;
        }
    do
    {
        top = -1;
        string exp;
        cout << "Enter the expression" << endl;
        cin >> exp;
        int length = exp.length();
        Stack[length];

        for(int i = 0; i < length; i++)
        {
            Stack[i] = exp[i];
        }
        
    } while (run == true);
    
    return 0;
}