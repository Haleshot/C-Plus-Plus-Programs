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

    for(int i = 0; i<  T; i++)
    {
        int temp = counter[i];
        int temp_list[temp];

        for(int j = 0; j < temp; j++)
        {
            temp_list[j] = list[j];
        }
        int max = 0;

        for(int k = 0; k < temp; k++)
        {
            if(max < temp_list[k])
            {
                max = temp_list[k];
            }
        }

        int c = 0;
        for(int k = 0; k < temp; k++)
        {
            if(max == temp_list[k])
            {
                c++;
            }
        }

        if(c > 1)
        {
            cout << "peace:)" << endl;
        }
        else
        {
            cout << "fight:(" << endl;
        }
    }

    return 0;
}