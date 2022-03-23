#include <iostream>
using namespace std;
#define MAX 100
int Stack[MAX], top = -1;
char x;

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

int IsEmpty()
{
    if (top < 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int check_match(char x_, char y_)
{
    if(x_ == '(' && y_ == ')')
    {
        return 1;
    }
    if(x_ == '{' && y_ == '}')
    {
        return 1;
    }
    if(x_ == '[' && y_ == ']')
    {
        return 1;
    }
    return 0;
}
int balance_parantheses(string expression)
{
    for(int i = 0;  i < expression.length(); i++)
    {
        if(expression[i] == '(' || expression[i] == '{' || expression[i] == '[' )
        {
            Push(expression[i]);
        }
        else if(expression[i] == ')' || expression[i] == '}' || expression[i] == ']' )
        {
            char top_value = Stack[top];
            if(IsEmpty() || check_match(top_value, expression[i]) == 0)
            {
                return 0;
            }
            else
            {
                x = Pop();
            }
        }
    }
    return(IsEmpty());
}



int main()
{
    string input_expression;
    cout << "Enter the string" << endl;
    cin >> input_expression;

    if(balance_parantheses(input_expression) == 1)
    {
        cout << "Balanced!" << endl;
    }
    else if(balance_parantheses(input_expression) == 0)
    {
        cout << "Not Balanced!" << endl;
    }

    return 0;
}