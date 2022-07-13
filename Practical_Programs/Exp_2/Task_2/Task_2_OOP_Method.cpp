// Program to evaluate Postfix Expression (done with Classes and Member functions)
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100

class Postfix_Expression_Evaluation
{
    public:
    int Stack[MAX], top = -1;

    int Push(int value);
    int Pop();
};

// Push Function
int Postfix_Expression_Evaluation::Push(int value)
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
int Postfix_Expression_Evaluation::Pop()
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
    string expression;
    class Postfix_Expression_Evaluation stk;
    for(int i = 0; i < MAX; i++)
    {
        stk.Stack[i] = 0;
    }
    do
    {
        stk.top = -1;
        cout << "Enter the postfix expression to be evaluated : ";
        cin >> expression;
        int length = expression.length();


        for(int i = 0; i < length; i++)
        {
            stk.Stack[i] = expression[i];
        }

        for(int i = 0; i < length; i++)
        {
            int A, B, C;
            switch (stk.Stack[i])
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
    
    cout << "The Value of the expression " << expression << " is = " << stk.Stack[0] << endl;
        
    cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
    cin >> run;



    return 0;
}
