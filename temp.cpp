#include <iostream>
using namespace std;
int counter = 0;

void Increment_Counter()
{
    counter += 1;
}

void Reset_Counter()
{
    counter = 0;
}

void Display_Counter()
{
    cout << counter << endl;
}

int main()
{
    Increment_Counter();
    Display_Counter();
    Reset_Counter();
    Display_Counter();
    return 0;
}