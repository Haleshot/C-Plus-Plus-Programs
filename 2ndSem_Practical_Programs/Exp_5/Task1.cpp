// Program evaluating two polynomial expressions using Linked List.
#include <iostream>
using namespace std;

struct Node
{
    int coeff;
    int power;
    struct Node *next;
};

void Create_node(int x, int y, struct Node **current)
{
    struct Node *a, *b;
    b = *current;
    if (b == NULL)
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
void Add_node(struct Node *p1, struct Node *p2, struct Node *result)
{
    while(p1 != NULL && p2 != NULL)
    {
        if(p1->power > p2->power)
        {
            result->coeff = p1->coeff;
            result->power = p1->power;
            p1 = p1->next;
        }
        if(p1->power < p2->power )
        {
            result->coeff = p2->coeff;
            result->power = p2->power;
            p2 = p2->next;
        }
        if(p1->power == p2->power)
        {
            result->power = p1->power;
            result->coeff = p1->coeff + p2->coeff;
            p1 = p1->next;
            p2 = p2->next;
        }
        result->next = (struct Node*)malloc(sizeof(struct Node));
        result = result->next;
        result->next = NULL;
    }
    while(p1 != NULL || p2 != NULL)
    {
        if(p1 != NULL)
        {
            result->coeff = p1->coeff;
            result->power = p1->power;
            p1 = p1->next;
        }
        if(p2 != NULL)
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

void print_node(struct Node *current)
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
    struct Node *node_1 = NULL, *node_2 = NULL, *result_ = NULL;
    do
    {
        int ch, n1, n2, x_, y_, a_, b_;
        cout << "Enter the total number of terms for the First Polynomial expression"  << endl;
        cin >> n1;

        for(int i = 0; i < n1 ; i++)
        {
            cout << "Enter the values of the Coefficient and Degree for the First Polynomial expression" << endl;
            cin >> x_ >> y_;
            Create_node(x_, y_, &node_1);
        }

        cout << "Enter the total number of terms for the Second Polynomial expression" << endl;
        cin >> n2;

        for(int i = 0; i < n2 ; i++)
        {
            cout << "Enter the values of the Coefficient and Degree for the Second Polynomial expression" << endl;
            cin >> a_ >> b_;
            Create_node(a_, b_, &node_2);
        }

        cout << "Polynomial expression 1 - " << endl;
        print_node(node_1);
        cout << endl;
        
        cout << "Polynomial expression 2 - " << endl;
        print_node(node_2);
        cout << endl;

        result_ = (struct Node *)malloc(sizeof(struct Node));
        Add_node(node_1, node_2, result_);

        cout << endl;
        cout << "Polynomial expression after adding the two equations - " << endl;
        print_node(result_);

        cout << endl;
        cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
        cin >> run;


    } while (run == true);

    return 0;
}