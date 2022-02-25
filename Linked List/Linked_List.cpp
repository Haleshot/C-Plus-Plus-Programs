// Implementation of Linked List (done with functions).
// Contains Insert_Beginning, Delete_Beginning, Insert_End, and Delete_End and Display Functions.

#include <iostream>
using namespace std;

 struct Node
 {
     int data;
     Node *next;
 };

Node *Head = NULL;

// Function to Insert value at the Beginning of the Linked List
void Insert_Beg(int value)
{
        
    Node *first;
    first = new Node();
    first->data = value;
    first->next = Head;
    Head = first;

}

// Function to Insert value at the End of the Linked List
void Insert_End(int value)
{
    Node *last;
    Node *current;
    
        last = new Node();
        last->data = value;
        last->next = NULL;
        if(Head == NULL)
        {
            Head  = last;
        }
        else
        {
            current = Head;
            while (current->next != NULL)
            {
                current = current->next;
            }
            current->next = last;
        
        }

}
// Function to Delete value at the Beginning of the Linked List
void Delete_Beg()
{
    if(Head == NULL)
    {
        cout << "Linked List is Empty!" << endl;
    }
    else
    {
        Node *current;
        current = Head;
        Head = Head->next;
        delete current;
    }
}

// Function to Delete value at the End of the Linked List
void Delete_End()
{
    Node *current = Head;
    Node *temp;
    if(Head == NULL)
    {
        cout << "Linked List is Empty!" << endl;
    }
    else
    {
        while(current->next != NULL)
        {
            temp = current;
            current = current->next;
        }
        temp->next = NULL;
        delete current;
    }
}

// Function to Display the values of the Linked List
void Display()
{
    Node *current = Head;
    if (Head == NULL)
    {
        cout << "Linked List is Empty!" << endl;
    }
    else
    {
        cout << "Values of the Linked List are : " << endl;
        while (current->next != NULL)
        {
            cout << current->data << endl;
            current = current->next;
        }
        
    }
}


// Main Function containing Function Call statements.
int main()
{
    int ch;
    bool run = true;
    do
    {
        cout << "Menu \n 1. Insert Value at the Beginning \n 2. Insert Value at the End \n 3. Delete Value at the Beginning \n 4. Delete Value at the End \n 5. Display Values \n 6. Exit \n" ;
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
            Delete_Beg();
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        
        if (ch == 4)
        {
            Delete_End();
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        
        if (ch == 5)
        {
            Display();
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        
        if (ch == 6)
        {
            return 0;
        }
        
        
    } while(run == true);


    return 0;
}