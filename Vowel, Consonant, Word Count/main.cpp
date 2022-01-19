#include<iostream>
#include <string>
using namespace std;
int main()
{
    string w = "";
    char x[100];
    cout << "Enter sentence\n";
    gets(x);

    int i, vc = 0, cc = 0, wc = 1;
    for (i = 0;i <= x[i]; i++)
    {
        w += x[i];
    }
    int length = w.length();

    for (i = 0;i < length; i++)
    {
        if (w[i] == 'A' || w[i] == 'E' || w[i] == 'I' || w[i] == 'O' || w[i] == 'U' || w[i] == 'a' || w[i] == 'e' || w[i] == 'i' || w[i] == 'o' || w[i] == 'u')
        {
            vc++;
        }
        if (w[i] == ' ')
        {
            wc++;
        }
    }

    cc = length - vc - wc;
    cout << "\n" << "Number of Vowels = "<< vc << endl;
    cout << "\n" << "Number of Consonants = "<< cc + 1 << endl;
    cout << "\n" << "Number of Words = "<< wc << endl;
    return 0;
}
