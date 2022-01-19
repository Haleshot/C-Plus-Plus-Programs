#include<iostream>
#include <string>
#include <string_view>
#include <algorithm>
using namespace std;
int main()
{

    string sentence, s, w, space = " ";
    char x[100];
    cout << "Enter sentence\n";
    gets(x);
    cout << "\nThe original string is: \n" << x << endl;
    int i = 0, wc = 1, c6 = 0, counter = i + 1;
    int length = sizeof(x);
    for (i = 0;i < length; i++)
    {
        if(x[i] != ' ')
        {
            s += x[i];
        }
    }
    s += " ";
    for (i = 0;i < length; i++)
    {
        if(x[i] == ' ')
        {
            sentence.append(s);
            s = "";
        }

    }



    cout << "\nThe String after trimming is: \n" << sentence << endl;
    return 0;

}
