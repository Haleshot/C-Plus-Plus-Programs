#include <iostream>
using namespace std;
#define MAX 100
int Circular_Queue[MAX], front = -1, rear = -1;

int IsEmpty()
{
    if(front == -1)
    {
        front = rear = 0;
        return 1;
    }
}

int IsFull()
{
    if((rear + 1) % MAX == front)
    {
        return 1;
    }
    return 0;
}

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

int Dequeue()
{
    if(IsEmpty())
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

void Peek()
{
    if(front < 0)
    {
        cout << "Queue is Empty!" << endl;
    }
    else
    {
        cout << "Element present at Queue's front is = " << Circular_Queue[front] << endl;
    }
}


void Display()
{
    if(front < 0)
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
    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    Enqueue(40);
    Enqueue(50);
    Enqueue(60);
    Display();
    Peek();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    Display();
}