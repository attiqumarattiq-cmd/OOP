#include <iostream>
using namespace std;

struct library
{
    char bookname[30];
    int copies;
    char authorname[30];
};

int main()
{
    library b1 = {"Stephen Qook", 23, "Jusifer Coloumbs"};
    library b2;
    b2 = b1;

    cout << b1.bookname << b1.copies << b1.authorname << endl;
    cout << b2.bookname << b2.copies << b2.authorname << endl;

    return 0;
}