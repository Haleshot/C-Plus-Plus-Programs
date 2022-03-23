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

void Insert_Beg()
{
    Node *first = head;
    

}
void Insert_End();
void Delete_Beg();
void Delete_End();