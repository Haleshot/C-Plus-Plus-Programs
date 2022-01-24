// Program that checks for Number of words greater than 6 characters.
#include<iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    char x[100];
    float percentage;
    cout << "Enter sentence\n";
    gets(x);

    int i, wc = 1, c6 = 0;
    int length = sizeof(x);

    for (i = 0;i < length; i++)
    {
        if (x[i] == ' ')
        {
            wc++;
        }
    }

    for (i = 0;i < length + 1 ; i++)
    {
        if (x[i] != ' ')
        {
            s += x[i];
        }
        if (x[i] == ' ')
        {
            cout << s << endl;
            if (s.length() > 6)
            {
                c6++;
                s = "";
            }
        }

    }

    percentage = (c6 * 100)/wc;
    cout << "\n" << " Total Number of Words = "<< wc << endl;
    cout << "\n" << " Number of Words with more than 6 characters = "<< c6 << endl;
    cout << "\n" << " Percentage = "<< percentage << endl;

    return 0;
}
