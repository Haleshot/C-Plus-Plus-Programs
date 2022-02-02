// Program that records Library Book details and searches for Book Numbers using structure method.
#include <iostream>
#include <cstring>
using namespace std;

struct Library
{
    char Name[50];
    float Book_id;
    float price ;
    int nc;
}lib[5];


int main()
{
    int c1 = 0, c2 = 0;
    float Bookid;
    char Bookname[50];
    cout << "Enter Name of Book, Book ID, price and Number of Copies respectively:\n";
    for(int i = 0; i < 5; i++)
    {
        cin >> lib[i].Name;
        cin >> lib[i].Book_id >> lib[i].price >> lib[i].nc;
    }
    for(int i = 0; i < 5; i++)
    {
        cout << "Book Name : " << lib[i].Name << endl;
        cout << "Book ID : " << lib[i].Book_id << endl;
        cout << "Book price : " << lib[i].price << endl;
        cout << "Number of Book Copies : " << lib[i].nc << endl;
    }
    cout << "Enter Book ID : " << endl;
    cin >> Bookid;
    for(int i = 0; i < 5; i++)
    {
        if (Bookid == lib[i].Book_id)
        {
            c1++;
            cout << "Book Exists!\n";
            cout << "Number of Copies of Book are : " << lib[i].nc << endl;
            break;
        }
    }
    if (c1 == 0)
    {
        cout << "Book does not Exist!\n";
    }

    cout << "Enter Book Name : " << endl;
    cin >> Bookname;
    for(int i = 0; i < 5; i++)
    {
        if (strcmp(Bookname, lib[i].Name) == 0)
        {
            c2++;
            cout << "Book Exists!\n";
            cout << "Book Name : " << lib[i].Name;
        }
    }
    if (c2 == 0)
    {
        cout << "Book does not Exist!\n";

    }
    return 0;
}
