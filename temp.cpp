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
    return 0;
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
        cout << "Overflow!" << endl;
        return;
    }
    else
    {
        rear = (rear + 1) % MAX;
        Circular_Queue[rear] = value;
    }
}


void Dequeue()
{
    if(IsEmpty())
    {
        cout << "Underflow!" << endl;
        return;
    }
    else if(front == rear)
    {
        int x;
        x = Circular_Queue[rear];
        cout << "Popped out Element is = " << x << endl;
        front = rear = -1;
    }
    else
    {
        int x;
        x = Circular_Queue[rear];
        cout << "Popped out Element is = " << x << endl;
        front = (front + 1) % MAX;
    }

}

void Display()
{
    if(front == -1)
    {
        cout << "Queue is Empty!" << endl;
    }
    else
    {
        cout <<"Queue Elements are :" << endl;
        for(int i = front; i <= rear; i++)
        {
            cout << Circular_Queue[i] << endl;
        }
    }
}

void Peek()
{
    if(front == -1)
    {
        cout << "Queue is Empty!" << endl;
    }
    else
    {
        cout << "Element present at Queue's rear is = " << Circular_Queue[rear] << endl;
    }
}

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
            cout << "Enter Phone Number to be pushed into the Queue : ";
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
