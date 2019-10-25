#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <vector>
#include <set>
using namespace std;
class book
{
    public:
        book();
        virtual ~book();
        void addbook();
        void s_name(string n);
        void s_author(string a);
        void l_book();
        void update_version(string n,int num);
        void printall();
        void find_book();

    protected:
        string name;
        string author;
        string year;
        string n_versions;
        vector<book>m_book;
        vector<book>c_book;


    private:
};

#endif // BOOK_H
