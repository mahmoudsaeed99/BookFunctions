#include <iostream>
#include "book.h"
#include <vector>
using namespace std;

int main()
{
    book b1;
    b1.addbook();
    b1.addbook();
    //b1.addbook();
    //b1.s_name("mahmoud");
    //b1.s_author("saeed");
    //b1.update_version("mohamed",12);
    //b1.find_book();
    //b1.find_book();
    b1.l_book();
    b1.printall();
    return 0;
}
