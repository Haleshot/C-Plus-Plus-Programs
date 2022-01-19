#include <iostream>
using namespace std;

class Student
{
    char Name[50];
    float Percentage;
    int Merit_No;
public:
    void Readdata()
    {
        cout << "Enter Name: ";
        cin >> Name;
        cout << "Percentage: ";
        cin >> Percentage;
        cout << "Merit Number: ";
        cin >> Merit_No;
        cout << endl;
    }
    void CalculateData(Student s[], int limit)
    {
        int i, j;
        for(i = 0; i < limit; i++)
        {
            for(j = i + 1; j < limit; j++)
            {
                if(s[i].Merit_No > s[j].Merit_No)
                {
                    Student temp;
                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }

    }
    void DisplayData(Student s[], int limit)
    {
        int i;
        for(i = 0; i < limit; i++)
        {
            cout << "Name = " << s[i].Name << "\n" << "Percentage = " << s[i].Percentage << "\n" << "Merit Number = " << s[i].Merit_No << endl;
        }
    }

};

int main()
{
    int limit;
    cout << "Enter Limit\n";
    cin >> limit;
    Student student[limit];
    for(int i = 0; i < limit; i++)
    {
        student[i].Readdata();
    }
    student[0].CalculateData(student, limit);
    student[0].DisplayData(student, limit);

    return 0;
}
