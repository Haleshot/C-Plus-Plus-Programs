#ifndef BOOKS_H
#define BOOKS_H
#include <iostream>
#include <string>
using namespace std;

class Books
{
    public:
        Books();
        int bookID;
        void SetBookID (int bookID_);
        int GetBookID ();

};

#endif // BOOKS_H
