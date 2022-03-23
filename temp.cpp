#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;


void Display()
{
    Node *current = head;
    while(current != NULL)
    {
        cout << current->data;
        current = current->next;
    }
}

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
        while(current != NULL)
        {
            current = current->next;
        }
        current->next = last;
    }
}
void Delete_Beg()
{
    if(head == NULL)
    {
        cout << "Linked List is Empty!" << endl;
    }
    else
    {
        Node *current;
        current = head;
        head = head->next;
        delete current;
    }
}
void Delete_End()
{
    Node *current = head;
    Node *temp;
    if(head == NULL)
    {
        cout << "Linked List is Empty!" << endl;
    }
    else
    {
        while(current != NULL)
        {
            temp = current;
            current = current->next;
        }
        temp->next = NULL;
        delete current;
    }
}

void Insert_Pos(int index, int value)
{
    Node *current = head;
    Node *temp = current;
    Node *mid = new Node();

    int counter = 1;
    for(int i = 0; i < index; i++)
    {
        temp = current;
        current = current->next;
        counter++;
    }
    mid->data = value;
    mid->next = current;
    temp->next = current;
}