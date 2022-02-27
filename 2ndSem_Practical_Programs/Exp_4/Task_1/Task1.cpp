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
    last->next = head;
    head = last;
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

}

void Display()
{
    Node *current = head;
    if(current == NULL)
    {
        cout << "Linked List is Empty!" << endl;
    }
    else
    {
        cout << "Values of the Linked List are : " << endl;
        while(current->next != NULL)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }

}
void Delete(int index)
{

}
void Modify(int index)
{

}







int main()
{
    int ch;
    bool run = true;
    do
    {
        cout << "Menu \n 1. Insert Value at the Beginning \n 2. Insert Value at the End \n 3. Delete Node at a position \n 4. Modify value of Node at a position \n 5. Display Values \n 6. Exit \n" ;
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
            int value_push;
            cout << "Enter Value to be pushed into the Linked List : ";
            cin >> value_push;
            Insert_End(value_push);
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        if (ch == 3)
        {

        }

        if( ch == 4)
        {

        }
        if (ch == 5)
        {
            Display();
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
    } while(run == true);
    return 0;
}