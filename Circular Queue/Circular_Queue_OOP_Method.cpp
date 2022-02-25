// Circular Queue STL program (done with Classes and Member Functions).
// Contains IsEmpty, Is Full, Enqueue, Dequeue, Peek, and Display Functions along with instance of class to access functions inside the class.
#include <iostream>
using namespace std;
#define MAX 100

class Queue
{
    public:
    int Circular_Queue[MAX], front = -1, rear = -1;

    int IsEmpty();
    int IsFull();

    void Enqueue(int);
    void Dequeue();
    void Peek();
    void Display();
};

// Function to check if Queue is Empty
int Queue::IsEmpty()
{
    if(front == -1)
    {        
        front = rear = 0;
        return 1;
    }
    return 0;
}

// Function to check if Queue is Full
int Queue::IsFull()
{
    if((rear + 1) % MAX == front)
    {
        return 1;
    }
    return 0;
}

void Queue::Enqueue(int value)
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

void Queue::Dequeue()
{
    if(front == -1)
    {
        cout << "Queue is Empty!" << endl;
    }
    else if(front == rear)
    {
        int x = Circular_Queue[front];
        cout << "Popped out Element is = " << x << endl;
        front = rear = -1;
    }
    else
    {
        int x = Circular_Queue[front];
        cout << "Popped out Element is = " << x << endl;
        front = (front + 1) % MAX;
    }
}

void Queue::Peek()
{
    if(front == -1)
    {
        cout << "Queue is Empty!" << endl;
    }
    else
    {
        cout << "Elements at the front of the Queue is : " << Circular_Queue[front] << endl;
    }
}

void Queue::Display()
{
    if(front == -1)
    {
        cout << "Queue is Empty!" << endl;
    }
    else
    {
        for(int i = front; i <= rear; i++)
        {
            cout << Circular_Queue[i] << endl;
        }
        
    }
}

int main()
{
    bool run = true;
    int ch;
    class Queue q;
    do
    {
        cout << "Menu \n1. Enqueue Value\n2. Dequeue Value\n3. Peek Value\n4. Display Values\n5. Exit\n";
        cout << "Enter your choice : " << endl;
        cin >> ch;

        if(ch == 1)
        {
            int value_push;
            cout << "Enter Element to be pushed into the Queue : ";
            cin >> value_push;
            q.Enqueue(value_push);
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        if(ch == 2)
        {
            q.Dequeue();
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        if(ch == 3)
        {
            q.Peek();
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        if(ch == 4)
        {
            q.Display();
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        if(ch == 5)
        {
            return 0;
        }


    } while (run == true);
    

    return 0;
}

