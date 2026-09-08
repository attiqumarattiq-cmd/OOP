#include <iostream>
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

    cout << "==================================" << endl;
    library s3;
    cout << "Enter ISBN No: ";
    cin >> s3.isbn;
    cout << "Enter Copies of book: ";
    cin >> s3.copies;
    cout << "Enter Publish Year: ";
    cin >> s3.pubyear;
    cin.ignore();
    cout << "Enter Book Name: ";
    cin.getline(s3.book_name, 30);
    cout << "Enter Author Name:";
    cin.getline(s3.author_name, 30);
    cout << "Enter Publisher name: ";
    cin.getline(s3.publisher_name, 30);
    cout << "==================================" << endl;
    cout << "Data of Library s1: " << endl;
    cout << "ISBN: " << s1.isbn << endl;
    cout << "Copies: " << s1.copies << endl;
    cout << "Publisher Year: " << s1.pubyear << endl;
    cout << "Book Name: " << s1.book_name << endl;
    cout << "Author Name: " << s1.author_name << endl;
    cout << "Publisher Name: " << s1.publisher_name << endl;
    cout << "==================================" << endl;
    cout << "Data of Library s2: " << endl;
    cout << "ISBN: " << s2.isbn << endl;
    cout << "Copies: " << s2.copies << endl;
    cout << "Publisher Year: " << s2.pubyear << endl;
    cout << "Book Name: " << s2.book_name << endl;
    cout << "Author Name: " << s2.author_name << endl;
    cout << "Publisher Name: " << s2.publisher_name << endl;
    cout << "==================================" << endl;
    cout << "Data of Library s3: " << endl;
    cout << "ISBN: " << s3.isbn << endl;
    cout << "Copies: " << s3.copies << endl;
    cout << "Publisher Year: " << s3.pubyear << endl;
    cout << "Book Name: " << s3.book_name << endl;
    cout << "Author Name: " << s3.author_name << endl;
    cout << "Publisher Name: " << s3.publisher_name << endl;
    cout << "==================================" << endl;

    return 0;
}