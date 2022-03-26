#include <iostream>
using namespace std;

struct Node
{
    int power;
    int coeff;
    Node *next;
};

void Create_Node(int x, int y, struct Node **current)
{
    struct Node *a, *b;
    b = *current;

    if(b == NULL)
    {
        a = (struct Node*)malloc(sizeof(struct Node));
        a->coeff = x;
        a->power = y;
        *current = a;
        a->next = (struct Node*)malloc(sizeof(struct Node));
        a = a->next;
        a->next = NULL;
    }
    else
    {
        a->coeff = x;
        a->power = y;
        a->next = (struct Node*)malloc(sizeof(struct Node));
        a = a->next;
        a->next = NULL;
    }
}


void Add_Expressions(struct Node *p1, struct Node *p2, struct Node *result)
{
    while(p1->next && p2->next)
    {
        if(p1->power > p2->power)
        {
            result->coeff = p1->coeff;
            result->power = p1->power;
            p1 = p1->next;
        }
        else if(p1->power < p2->power)
        {
            result->coeff = p2->coeff;
            result->power = p2->power;
            p2 = p2->next;
        }
        else
        {
            result->coeff = p1->coeff + p2->coeff;
            result->power = p1->power;
            p1 = p1->next;
            p2 = p2->next;
        }
        result->next = (struct Node*)malloc(sizeof(struct Node));
        result = result->next;
        result->next = NULL;

    }
    while(p1->next || p2->next)
    {
        if(p1->next)
        {
            result->coeff = p1->coeff;
            result->power = p1->power;
            p1 = p1->next;
        }
        else if(p1->power < p2->power)
        {
            result->coeff = p2->coeff;
            result->power = p2->power;
            p2 = p2->next;
        }
        result->next = (struct Node*)malloc(sizeof(struct Node));
        result = result->next;
        result->next = NULL;

    }
}
void Display_Expression(struct Node *current)
{
    while(current->next != NULL)
    {
        cout << current->coeff << "x^" << current->power;
        current = current->next;
        while(current->next != NULL)
        {
            cout << " + ";
        }
    }
}

int main()
{
    struct Node *poly1 = NULL, *poly2 = NULL, *result_expression = NULL;
    int n1, n2, x_, y_, a_, b_;
    cout << "Enter the limits of the first poly expression: " << endl;
    cin >> n1;

    cout << "Enther the Coefficients and Powers of the First poly exprresion";
    for(int i = 0; i < n1; i++)
    {
        cin >> x_ >> y_;
        Create_Node(x_, y_, &poly1);
    }
    cout << "Enter the limits of the second poly expression: " << endl;
    cin >> n2;

    cout << "Enther the Coefficients and Powers of the Second poly exprresion";
    for(int i = 0; i < n2; i++)
    {
        cin >> a_ >> b_;
        Create_Node(a_, b_, &poly2);
    }

    result_expression = (struct Node*)malloc(sizeof(struct Node));
    Add_Expressions(poly1, poly2, result_expression);

    cout << result_expression;


    return 0;
}

