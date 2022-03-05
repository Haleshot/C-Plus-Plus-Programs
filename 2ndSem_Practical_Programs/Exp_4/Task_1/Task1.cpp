#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void Insert_Beg(int value)
{
    Node *first;
    first = new Node();
    first->data = value;
    first->next = head;
    head = first;
}
void Insert_End(int value)
{
    Node *last;
    Node *current;
    last = new Node();
    last->data = value;
    last->next = NULL;
    if (head == NULL)
    {
        head = last;
    }
    else
    {
        current = head;
        while(current->next != NULL)
        {
            current = current->next;
        }
        current->next = last;
    }
}

void Insert_Pos(int index, int value)
{
    Node *temp = head;
    Node *anode = new Node();
    int counter = 0;

    if(index == 0)
    {
        anode->data = value;
        anode->next = temp->next;
        head = anode;
    }
    while(temp != NULL && counter < index - 1)
    {
        temp = temp->next;
        counter++;

    }
    if(temp != NULL)
    {
        anode->data = value;
        anode->next = temp->next;
        temp->next = anode;
    }
}


void Display()
{
    Node *current = head;
    if(head == NULL)
    {
        cout << "Linked List is Empty!" << endl;
    }
    else
    {
        cout << "Values of the Linked List are : " << endl;
        while(current != NULL)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }

}

void Modify(int index, int value)
{
    Node *current = head;
    int counter = 0;
    if(head == NULL)
    {
        cout << "Linked List is Empty!" << endl;
    }
    else
    {
        while(current != NULL && counter < index - 1)
        {
            current = current->next;
            counter++;
        }
        if(current != NULL)
        {
            current->data = value;
        }
    }
}

void Delete_Pos(int index)
{
    Node *temp = head;
    int counter = 0;

    if(index == 0)
    {
        head = temp->next;
    }
    while(temp != NULL && counter < index - 1)
    {
        temp = temp->next;
        counter++;
    }
    if(temp != NULL)
    {
        Node *a = temp->next;
        Node *b = a->next;
        temp->next = b;
        delete a;
    }
}







int main()
{
    int ch;
    bool run = true;
    do
    {
        cout << "Menu \n 1. Insert Value at the Beginning \n 2. Display Values \n 3. Insert Value at the End \n 4. Insert Value at a particular position \n 5. Modify value of Node at a position \n 6. Delete Value at a particular position \n 7. Exit \n" ;
        cout << "Enter Choice\n" ;
        cin >> ch;

        if (ch == 1)
        {
            int value_push;
            cout << "Enter Value to be pushed into the Linked List : ";
            cin >> value_push;
            Insert_Beg(value_push);
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        if (ch == 2)
        {

            Display();
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        if (ch == 3)
        {
            int value_push;
            cout << "Enter Value to be pushed into the Linked List : ";
            cin >> value_push;
            Insert_End(value_push);
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;

        }

        if( ch == 4)
        {
            int value_push, Index;
            cout << "Enter Value and Index to be pushed into the Linked List : ";
            cin >> value_push >> Index;
            Insert_Pos(Index, value_push);
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;

        }
        if (ch == 5)
        {
            int value_push, Index;
            cout << "Enter Value and Index to be modified in the Linked List : ";
            cin >> value_push >> Index;
            Modify(Index, value_push);
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        if( ch == 6)
        {
            int Index;
            cout << "Enter Index from which element must be deleted from the Linked List : ";
            cin >> Index;
            Delete_Pos(Index);
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        if( ch == 7)
        {
            return 0;
        }
    } while(run == true);
    return 0;
}