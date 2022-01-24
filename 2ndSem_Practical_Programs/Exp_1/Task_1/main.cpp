#include <iostream>
using namespace std;
int counter = 0;
void Reset_Counter()
{
    counter = 0;
}
void Increment_Counter()
{
    counter = counter + 1;
}
void Display_Counter()
{
    cout << "Counter is = " << counter << endl;
}
int main()
{
    int ch;
    bool run = true;
    do while (run == true)
    {
        cout << "Menu\n 1.Increment counter \n 2.Reset Counter \n 3.Display Counter \n 4.Exit \n" ;
        cout << "Enter Choice\n" ;
        cin >> ch;
        if (ch == 1)
        {
            Increment_Counter();
            Display_Counter();
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        if (ch == 2)
        {
            Reset_Counter();
            Display_Counter();
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        if(ch == 3)
        {
            Display_Counter();
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
    }while (run == true);
    return 0;
}