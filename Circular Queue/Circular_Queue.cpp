// Circular Queue STL program (done with functions)
// Contains IsEmpty, Is Full, Enqueue, Dequeue, Peek, and Display Functions
#include <iostream>
using namespace std;
#define MAX 100
int Circular_Queue[MAX], front = -1, rear = -1;

// Function to check if Queue is Empty
int IsEmpty()
{
    if(front == -1)
    {        
        front = rear = 0;
        return 1;
    }
    return 0;
}

// Function to check if Queue is Full
int IsFull()
{
    if((rear + 1) % MAX == front)
    {
        return 1;
    }
    return 0;
}

// Function to Push Values into the Queue
void Enqueue(int value)
{
    if(IsEmpty())
    {
        Circular_Queue[rear] = value;
    }
    else if(IsFull())
    {
        cout << "Queue is Full!" << endl;
    }
    else
    {
        rear = (rear + 1) % MAX;
        Circular_Queue[rear] = value;
    }
}

// Function to Pop Values into the Queue
void Dequeue()
{
    if(front == -1)
    {
        cout << "Queue is Empty!" << endl;
    }
    else if(front == rear)
    {
        int x;
        x = Circular_Queue[front];
        cout << "Popped out Element fron Queue is = " << x << endl;
        front = rear = -1;
    }
    else
    {
        int x;
        x = Circular_Queue[front];
        cout << "Popped out Element fron Queue is = " << x << endl;
        front = (front + 1) % MAX;
    }
}

// Function to Peek the Front Element of the Queue
void Peek()
{
    if(front == -1)
    {
        cout << "Queue is Empty!" << endl;
    }
    else
    {
        cout << "The Element at the Queue's Front is : " << Circular_Queue[front] << endl;
    }
}

// Function to Display the values of the Queue
void Display()
{
    if(front == -1)
    {
        cout << "Queue is Empty!" << endl;
    }
    else
    {
        cout << "Elements of the Queue are : " << endl;
        for(int i = front;i <= rear; i++)
        {
            cout << Circular_Queue[i] << endl;
        }
    }

}

// Main Function
int main()
{
    bool run = true;
    int ch;

    do
    {
        cout << "Menu \n1. Enqueue Value\n2. Dequeue Value\n3. Peek Value\n4. Display Values\n5. Exit\n";
        cout << "Enter your choice : " << endl;
        cin >> ch;

        if (ch == 1)
        {
            int value_push;
            cout << "Enter Element to be pushed into the Queue : ";
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
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }

        if (ch == 5)
        {
            return 0;
        }
        
    } while (run == true);
    
    return 0;
}
