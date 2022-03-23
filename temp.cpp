#include <iostream>
using namespace std;
#define MAX 100
int Stack[MAX], top = -1;

void Push(char x)
{
    if(top > MAX - 1)
    {
        cout << "Overflow!" << endl;
    }
    else
    {
        top += 1;
        Stack[top] = x;
    }
}

int Pop()
{
    if(top < 0)
    {
        cout << "Underflow!" << endl;
    }
    else
    {
        int last = Stack[top];
        top -= 1;
        return last;
    }
}




int main()
{

    return 0;
}