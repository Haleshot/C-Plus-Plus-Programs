// Queue STL program (done with functions)
// Contains Dequeue, Enqueue, Peek, and Display Functions
#include <iostream>
using namespace std;
#define MAX 100
int Queue[MAX], front = -1, rear = -1;

// To Check if Function is Empty
int IsEmpty()
{
    if(front == -1)
    {
        front = rear = 0;
        return 1;
    }
    return 0;
    
}
// To Check if Function is Full
int IsFull()
{
    if(rear == MAX - 1)
    {
        return 1;
    }
    return 0;
}

// Function for pushing value into the stack.
void Enqueue(int value)
{
    if(IsFull())
    {
        cout << "Queue is Full!" << endl;
    }
    else
    {
        front = 0;
        rear += 1;
        Queue[rear] = value;
    }
}

// Function for removing and element from the stack.
void Dequeue()
{
    if(IsEmpty())
    {
        cout << "Queue is Empty!" << endl;
    }
    else
    {
        cout << "Element popped from the queue is " << Queue[front] <<  endl;
        front += 1;
    }
}
// Function for displaying the elements of the stack.
void Display()
{
    if (IsEmpty())
    {
        cout << "Queue is Empty!" << endl;
    }
    else
    {
        cout << "Queue Elements are :" << endl;
        for(int i = front; i <= rear; i++)
        {
            cout << Queue[i] << endl;
        }
    }
}
// Function for peeking the top element of the stack.
void Peek()
{
    if (IsEmpty())
    {
        cout << "Queue is Empty!" << endl;
    }
    else
    {
        cout << "Element at Queue's Top is : " << Queue[front] << endl;
    }
}



int main()
{
    int ch;
    bool run = true;
    do
    {
        cout << "Menu\n 1.Enqueue Value \n 2.Dequeue Value \n 3.Peek Value \n 4.Display Stack \n 5. Exit \n" ;
        cout << "Enter Choice\n" ;
        cin >> ch;

        if (ch == 1)
        {
            int value_push;
            cout << "Enter Value to be pushed into the Queue \n";
            cin >> value_push;
            Enqueue(value_push);
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }

        if (ch == 2)
        {
            Dequeue();
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }

        if (ch == 3)
        {
            Peek();
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }

        if (ch == 4)
        {
            Display();
            cout << "\nWant to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }

        if (ch == 5)
        {
            return 0;
        }
        
    } while (run == true);
    

    return 0;
}