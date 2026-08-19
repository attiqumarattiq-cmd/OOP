#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *ptr = &x;

    cout << "Integer type" << endl;
    cout << &x << endl;   // prints address of a
    cout << ptr << endl;  // prints the address of x stored in it
    cout << *ptr << endl; // Prints value of x
    cout << &*ptr << endl;
    cout << &ptr << "\n" << endl;
    

    cout << "Character type" << endl;
    char a = 'A';
    char *pointer = &a;

    cout << a << endl;
    cout << pointer << endl;
    cout << *pointer << "\n" << endl;


    cout << "Boolean type" << endl;
    bool e = true;
    bool *point = &e;

    cout << point << endl;

   


    return 0;
}