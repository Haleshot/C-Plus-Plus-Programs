//Program to evaluate Postfix Expression (done with functions)
#include <iostream>
#include <cstring>
#include <math.h>
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
        top_value += 1;
        Stack[top] = top_value;
    }
}

int Pop()
{
    if (top < -1)
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
    int ch, i;
    bool run = true;
    char expression_array[100];
    for(int i = 0; i < 100; i++)
    {
        expression_array[i] = 0;
    }

    do while (run == true)
    {
        string expression;
        cout << "Enter the postfix expression to be evaluated : ";
        int length = sizeof(expression);
        char expression_array[length];
        for(int i = 0; i < length; i++)
        {
            expression_array[i] = expression[i];
        }

        for(i = 0; i < length; i++)
        {
            int A, B, C;
            switch (expression_array[i])
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
                        Push(expression_array[i] - '0');
            }
        }

        cout << "The Value of the expression " << expression << " is = " << expression_array[0] << endl;
        
        cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
        cin >> run;

    }while (run == true);
    
    
    return 0;

}
