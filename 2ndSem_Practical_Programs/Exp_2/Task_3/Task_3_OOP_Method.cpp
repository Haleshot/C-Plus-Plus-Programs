#include <iostream>
using namespace std;
#define MAX 100

class Balance_Parantheses
{
    public:
    char Character_stack[MAX], top = -1;
    char x;
    
    int isEmpty();
    int push(char value);
    int pop();
    int match(char x_, char y_);
    int Check_Balance_Parantheses(string sentence);

};

int Balance_Parantheses::isEmpty()
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
int Balance_Parantheses::push(char value)
{
    if(top == MAX - 1)
    {
        cout << "Overflow!" << endl;
    }
    else
    {
        top += 1;
        Character_stack[top] = value;
    }
}

int Balance_Parantheses::pop()
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

// Function to check for matching parantheses
int Balance_Parantheses::match(char x_, char y_)
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

int Balance_Parantheses::Check_Balance_Parantheses(string sentence)
{
    for(int i = 0; i < sentence.length(); i++)
    {
        if(sentence[i] == '(' || sentence[i] == '{' || sentence[i] == '[')
        {
            push(sentence[i]);
        }
        else if(sentence[i] == ')' || sentence[i] == '}' || sentence[i] == ']')
        {
            char top_value = Character_stack[top];
            if(isEmpty() || match(top_value, sentence[i]) == 0)
            {
                return 0;
            }
            else
            {
                x = pop();
            }
        }
    }
    return(isEmpty());
}


int main()
{
    string expression;
    class Balance_Parantheses bp;
    cout << "Enter the expression to be checked" << endl;
    cin >> expression;

    if(bp.Check_Balance_Parantheses(expression) == 1)
    {
        cout << "Brackets are Balanced!" << endl;
    }
    else if(bp.Check_Balance_Parantheses(expression) == 0)
    {
        
        cout << "Brackets are Not Balanced!" << endl;
    }

    return 0;
}