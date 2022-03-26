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


void Delete_Beg()
{
    if(head == NULL)
    {
        cout << "The Linked List is Empty!" << endl;
    }
    else
    {
        Node *current = head;
        head = head->next;
        delete current;
    }
}


void Insert_End(int value)
{
    Node *last;
    Node *current;
    last = new Node();
    last->data = value;
    last->next = head;

    if(head == NULL)
    {
        head = last;
    }
    else
    {
        current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = last;
        
    }


}


void Delete_End()
{
    Node *temp;
    Node *current = head;

    if(head == NULL)
    {
        cout << "The Linked List is Empty!" << endl;
    }
    else
    {
        while (current != NULL)
        {  
            temp = current;
            current = current->next;
        }
        temp->next= NULL;
        delete current;
        
    }
}

void Insert_Pos(int value, int index)
{
    Node *mid;
    Node *current = head;
    Node *temp = current;
    int counter = 1;

    for(int i = 0; i < counter; i++)
    {
        temp = current;
        current = current->next;
        counter++;
    }
    mid->data = value;
    mid->next = current;
    temp->next = mid;
}

void Delete_Pos(int index)
{
    Node *temp;
    int counter = 1;

    if(index == 0)
    {
        head = temp->next;
    }
    while(temp != NULL && counter < index -1 )
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


void Modify(int index, int value)
{
    Node *current = head;
    int counter = 0;
    if(head == NULL)
    {
        cout << "The Linked List is Empty!" << endl;
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

