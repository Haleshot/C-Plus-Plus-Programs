#include <iostream>
using namespace std;
#define MAX 100
int Character_Stack[MAX], top = -1;
char x;

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

int IsEmpty()
{
    if(top < 0)
    {
        return 1;
    }
    else
    {
        return 0;
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
        int x = Character_Stack[top];
        top -= 1;
        return x;
    }
}

void Push(char value)
{
    if(top > MAX - 1)
    {
        cout << "Overflow!" << endl;
    }
    else
    {
        top += 1;
        Character_Stack[top] = value;
    }
}


bool Check_Balance_Parantheses(string expression)
{
    for(int i = 0; i < expression.length(); i++)
    {
        if(expression[i] == '(' || expression[i] == '{' || expression[i] == '[')
        {
            Push(expression[i]);
        }
        else if(expression[i] == ')' || expression[i] == '}' || expression[i] == ']')
        {
                char top_value = Character_Stack[top];
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
    string sentence;
    cin >> sentence;
    if(Check_Balance_Parantheses(sentence) == 1)
    {
        cout << "Balanced!" << endl;
    }
    else if(Check_Balance_Parantheses(sentence) == 0)
    {
        cout << "Not Balanced!" << endl;
    }
    return 0;
}


