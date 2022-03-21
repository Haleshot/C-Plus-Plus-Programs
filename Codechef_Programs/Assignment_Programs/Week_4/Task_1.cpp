#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    cout << "Enter the Number of Test Cases" << endl;
    cin >> T;
    int list[10], counter[10];


    for(int i = 0; i < T; i++)
    {
        int n;
        cout << "Enter the Number of Students" << endl;
        cin >> n;
        counter[i] = n;
        char exp[n];
        cin >> exp;
        list[n];
        

        for(int j = 0; j < n; j++)
        {
            if(isdigit(exp[j]))
            {
                list[j] = int(exp[j]);
            }
        }
    }

    return 0;
}