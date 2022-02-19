// Queue STL program (done with functions)
// Contains Dequeue, Enqueue, Peek, and Display Functions
#include <iostream>
using namespace std;
#define MAX 100
int Circular_Queue[MAX], front = -1, rear = -1;

// To Check if Function is Empty
int IsEmpty()
{
    if(front == -1)
    {
        return 1;
    }
    return 0;
    
}
// To Check if Function is Full
int IsFull()
{
    if((rear + 1) % MAX == front)
    {
        return 1;
    }
    return 0;
}

// Function for pushing value into the stack.
void Enqueue(int value)
{
    if(IsEmpty())
    {
        front = rear = 0;
    }
    if(IsFull())
    {
        cout << "Queue is Full!" << endl;
    }
    else
    {
        rear = (rear +1 ) % MAX;
        Circular_Queue[rear] = value;
    }
}

// Function for removing and element from the stack.
void Dequeue()
{
    if(IsEmpty())
    {
        cout << "Queue is Empty!" << endl;
    }
    if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
        cout << "Element popped from the queue is " << Circular_Queue[front] <<  endl;
        front += 1;
    }
}
// Function for displaying the elements of the stack.
void Display()
{
    if (front == -1)
    {
        cout << "Queue is Empty!" << endl;
    }
    else
    {
        if (front <= rear)
        {
            cout << "Queue Elements are :" << endl;
            for(int i = front; i <= rear; i++)
            {
                cout << Circular_Queue[i] << endl;
            }
        }
        else
        {
            cout << "Queue Elements are :" << endl;
            for(int i = front; i < MAX; i++)
            {
                cout << Circular_Queue[i] << endl;
            }
        }

    }
}
// Function for peeking the top element of the stack.
void Peek()
{
    if (front == -1)
    {
        cout << "Queue is Empty!" << endl;
    }
    else
    {
        cout << "Element at Queue's Top is : " << Circular_Queue[front] << endl;
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