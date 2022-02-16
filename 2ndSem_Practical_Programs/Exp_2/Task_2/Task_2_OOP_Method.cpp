//Program to evaluate Postfix Expression (done with Classes and Member functions)
#include <iostream>
#include <math.h>
using namespace  std;
#define MAX 100

class Stack
{
    public:
    int Stack[MAX], top = -1;

    int Push(int value);
    int Pop();
};

// Push Function
int Stack::Push(int value)
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

// Pop Function
int Stack::Pop()
{
    if (top < 0)
    {
        cout << "Underflow!" << endl;
    }
    else
    {
        int x = Stack[top];
        top -= 1;
        return x;
    }
}

int main()
{
    bool run = true;
    class Stack stk;
    for(int i = 0; i < MAX; i++)
    {
        stk.Stack[i] = 0;
    }
    do
    {
        stk.top = -1;
        string expression;
        cout << "Enter the postfix expression to be evaluated : ";
        cin >> expression;

        for(int i = 0; i < expression.length(); i++)
        {
            int A, B, C;
            switch (expression[i])
            {
                case '+' :
                A = stk.Pop();
                B = stk.Pop();
                C = A + B;
                stk.Push(C);
                break;

                case '-' :
                A = stk.Pop();
                B = stk.Pop();
                C = A - B;
                stk.Push(C);
                break;

                case '*' :
                A = stk.Pop();
                B = stk.Pop();
                C = A * B;
                stk.Push(C);
                break;

                case '/' :
                A = stk.Pop();
                B = stk.Pop();
                C = A / B;
                stk.Push(C);
                break;

                case '^' :
                A = stk.Pop();
                B = stk.Pop();
                C = pow(A, B);
                stk.Push(C);
                break;

            
            default:
            stk.Push(stk.Stack[i] - '0');
            }
        }


    } while (run == true);
    



    return 0;
}
