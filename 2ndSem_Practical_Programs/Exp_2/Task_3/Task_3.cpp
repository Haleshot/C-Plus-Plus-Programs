// Program to check for Balanced Parantheses.
// Done using Stack.

#include <iostream>
using namespace std;
#define MAX 100
char Character_stack[MAX], top = -1;
char x;

// Function to check for matching parantheses
int check_match(char x_, char y_)
{
        // Check for matching brackets
        if(x_ == '(' && y_ == ')')
        {
            return 1;
        }
        else if(x_ == '{' && y_ == '}')
        {
            return 1;
        }
        else if(x_ == '[' && y_ == ']')
        {
            return 1;
        }
        return 0;
}

// Checks for Empty Stack
int isEmpty()
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

// Push Function
int push(char alp)
{
    if(top == MAX - 1)
    {
        cout << "Overflow!" << endl;
    }
    else
    {
        top += 1;
        Character_stack[top] = alp;
    }
}

// Pop Function
int pop()
{
    if(top < 0)
    {
        cout << "Underflow!" << endl;
    }
    else
    {
        x = Character_stack[top];
        top -= 1;
        return x;

    }
}

// Function for checking Balance Parantheses
int Check_Balance_Parenthesis(string expression)
{
    for(int i = 0; i < expression.length(); i++)
    {
        if(expression[i] == '(' || expression[i] == '{' || expression[i] == '[')
        {
            push(expression[i]);
        }
        else if(expression[i] == ')' || expression[i] == '}' || expression[i] == ']')
        {
            char top_value = Character_stack[top];
            if(isEmpty() || check_match(top_value, expression[i]) == 0)
            {
                return 0;
            }
            else
            {
                x = pop();
            }

        }
    }

    // Check whether stack is empty
    return(isEmpty());

}

// Main Function
int main()
{
    string input_expression;
    cout << "Enter the expression to be checked" << endl;
    cin >> input_expression;

    if(Check_Balance_Parenthesis(input_expression) == 1)
    {
        cout << "Brackets are Balanced!" << endl;
    }
    else if(Check_Balance_Parenthesis(input_expression) == 0)
    {
        
        cout << "Brackets are Not Balanced!" << endl;
    }
    return 0;
}
