#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student
{
public:
    int age, rollno;
    string name;

    Student(int age, string name, int rollno)
    {
        this->age = age;
        this->name = name;
        this->rollno = rollno;
    }
    Student()
    {

    }
};

int main()
{
    Student s;
    ifstream file("students.bin");

    file.read((char *) &s, sizeof(s));
    file.close();

    cout << s.name << "\n" << s.age << "\n" << s.rollno;

    return 0;
}
