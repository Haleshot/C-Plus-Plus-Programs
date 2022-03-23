#include <iostream>
using namespace std;
#define MAX 100
int Stack[MAX], top = -1;

void Push(int x)
{
    if (top == MAX - 1)
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
    if(top == -1)
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
    for(int i = 0; i < MAX; i++)
    {
        Stack[i] = 0;
    }
    do
    {
        top = -1;
        string exp = "";
        cout << "Enter the Postfix Expression\n";
        cin >> exp;
        int length = exp.length();
        Stack[length];

        for(int i = 0; i < MAX; i++)
         {
            Stack[i] = exp[i];
        }
        for(int i = 0; i < length; i++)
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
                    C = B ^ A;
                    Push(C);
                    break;
                
                default:
                    Push(Stack[i] - '0');
            }
        }

        cout << "The Value of the Postfix expression is = " << Stack[0];

        cout << "\nWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
        cin >> run;

    } while (run ==  true);
    
}
