#include <iostream>
using namespace std;

struct Node
{
    int coeff;
    int power;
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


void Add_Expression(struct Node *p1, struct Node *p2, struct Node *result)
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
        if(p2->next)
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

void Print_Expression(struct Node *current)
{
    while(current->next != NULL)
    {
        cout << current->coeff << "x^" << current->power;
        current = current->next;
        if(current->next != NULL)
        {
            cout << " + ";
        }
    }
}

int main()
{
    bool run = true;
    do
    {
        struct Node *poly1 = NULL, *poly2 = NULL, *result = NULL;
        int n1, n2, x_, y_, a_, b_;

        cout << "Enter the Number of terms of the First Polynomial expression" << endl;
        cin >> n1;

        cout << "Enter the Coefficients and Powers of the Polynomial expression: " << endl;
        for(int i = 0; i < n1; i++)
        {
            cin >> x_ >> y_;
            Create_Node(x_, y_, &poly1);
        }

        cout << "Enter the Number of terms of the Second Polynomial expression" << endl;
        cin >> n2;

        cout << "Enter the Coefficients and Powers of the Polynomial expression: " << endl;
        for(int i = 0; i < n2; i++)
        {
            cin >> a_ >> b_;
            Create_Node(a_, b_, &poly2);
        }

        cout << "The First Polynomial Expression is" << endl;
        Print_Expression(poly1);
        cout << endl;

        cout << "The Second Polynomial Expression is" << endl;
        Print_Expression(poly2);
        cout << endl;

        result = (struct Node*)malloc(sizeof(struct Node));

        Add_Expression(poly1, poly2, result);

        
        cout << "The Sum of the Polynomial Expressions is:" << endl;
        Print_Expression(result);

        cout << endl;
        cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
        cin >> run;

    } while (run == true);
    

    return 0;
}