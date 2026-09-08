#include <iostream>
#include <cstring>
using namespace std;

struct library
{
    int isbn;
    int copies;
    int pubyear;
    char book_name[30];
    char author_name[30];
    char publisher_name[30];
};

int main()
{
    library s1 = {1, 3, 2022, "Guider of Forest", "Stephen Howard", "Tiolik Ewsdfr"};
    library s2 = {2, 5, 2001, "You have to", "Qwerty Golf", "Aphen Tolphy"};

    library s3;
    s3.isbn = 3;
    s3.copies = 4;
    s3.pubyear = 2009;
    strcpy(s3.book_name, "Sockward Flies");
    strcpy(s3.author_name, "Asphard French");

    cout << "==================================" << endl;
    cout << "Data of Library s3: " << endl;
    cout << "ISBN: " << s3.isbn << endl;
    cout << "Copies: " << s3.copies << endl;
    cout << "Publisher Year: " << s3.pubyear << endl;
    cout << "Book Name: " << s3.book_name << endl;
    cout << "Author Name: " << s3.author_name << endl;
    cout << "==================================" << endl;

    return 0;
}