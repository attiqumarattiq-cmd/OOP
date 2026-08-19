#include<iostream>
using namespace std;

int main()
{
    int x = 10;
    int *ptr = &x;

    cout << &x << endl;                 // prints address of a
    cout << ptr << endl;                // prints the address of x stored in it
    cout << *ptr << endl;               // Prints value of x
    cout << &*ptr << endl;              
    cout << &ptr << endl;


    return 0;
}