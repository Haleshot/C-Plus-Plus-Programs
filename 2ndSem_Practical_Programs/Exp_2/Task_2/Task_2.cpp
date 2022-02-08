//Program to evaluate Postfix Expression (done with functions)
#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
#define Max 100
int Stack[Max], top = -1;

void Push(int x)
{
    if (top == Max - 1)
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
    int i;
    bool run = true;
    for(int i = 0; i < 100; i++)
    {
        Stack[i] = 0;
    }

    do while (run == true)
    {
        string expression;
        cout << "Enter the postfix expression to be evaluated : ";
        cin >> expression;
        int length = expression.length();
        Stack[length];
        for(int i = 0; i < length; i++)
        {
            Stack[i] = expression[i];
        }

        for(i = 0; i < length; i++)
        {
            int A, B, C;
            switch(Stack[i])
            {
                    case '+':
                        A = Pop();
                        B = Pop();
                        C = B + A;
                        Push(C);
                        break;

                    case '-':
                        A = Pop();
                        B = Pop();
                        C = B - A;
                        Push(C);
                        break;

                    case '*':
                        A = Pop();
                        B = Pop();
                        C = B * A;
                        Push(C);
                        break;

                    case '/':
                        A = Pop();
                        B = Pop();
                        C = B / A;
                        Push(C);
                        break;

                    case '^':
                        A = Pop();
                        B = Pop();
                        C = pow(B, A);
                        Push(C);
                        break;
                        
                    default:
                        Push(Stack[i] - '0');
            }
        }

        cout << "The Value of the expression " << expression << " is = " << Stack[0] << endl;
        
        cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
        cin >> run;

    }while (run == true);
    
    
    return 0;

}
