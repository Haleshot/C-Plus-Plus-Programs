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

// Modify the value at a position of the Linked List
void Modify(int index, int value)
{
    Node *current = Head;
    int counter = 0;
    if(Head == NULL)
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

// Function to Insert the value at a position of the Linked List
void Insert_Pos(int index, int value)
{
    Node *temp = Head;
    Node *anode = new Node();
    int counter = 0;

    if(index == 0)
    {
        anode->data = value;
        anode->next = temp->next;
        Head = anode;
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


/*
// Another way to insert value at a position of the Linked List
// Function to Insert the value at a position of the Linked List
void Insert_Pos_2(int index, int value)
{
    Node *current = Head;
    Node *temp = current;
    Node *mid = new Node();
    int counter = 1;
    for(int i = 0; i < index; i++)
    {
        temp = current;
        current = current->next;
        counter ++;
    }
    mid->data = value;
    mid->next = current;
    temp->next = mid;
}
*/

// Function to Delete the value at a position of the Linked List
void Delete_Pos(int index)
{
    Node *temp = Head;
    int counter = 1;

    if(index == 0)
    {
        Head = temp->next;
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

/*
// Another way to Delete value at a position of the Linked List 
// Function to Delete the value at a position of the Linked List
void Insert_Pos_2(int index, int value)
{
    
}
*/

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
        while (current != NULL)
        {
            cout << current->data << endl;
            current = current->next;
        }
        
    }
}

void Length()
{
    Node *current = Head;
    int counter = 0;
    if(Head == NULL)
    {
        cout << "Length of Linked List is = 0 " << endl;
    }
    else
    {
        while(current != NULL)
        {
            current = current->next;
            counter++;
        }
        cout << "The Length of the Linked List is : " << counter << "\n";
    }
}


// Main Function containing Function Call statements.
int main()
{
    int ch;
    bool run = true;
    do
    {
        cout << "Menu \n 1. Insert Value at the Beginning \n 2. Display Values \n 3. Insert Value at the End \n 4. Insert Value at a particular position \n 5. Modify value of Node at a position \n 6. Delete Value at a particular position \n 7. Delete Value at Beginning \n 8. Delete Value at the End \n 9. Display length of Linked List \n 10. Exit \n" ;
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
            Delete_Beg();
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        if( ch == 8)
        {
            Delete_End();
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        if( ch == 9)
        {
            Delete_End();
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        if ( ch == 10)
        {
            return 0;
        }
        
        
    } while(run == true);


    return 0;
}