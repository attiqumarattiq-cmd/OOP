#include <iostream>
using namespace std;

int main()
{
    // Referencing = Referencing means getting the address of a variable.
    int x = 10;
    cout << &x;

    // Dereferencing = Dereferencing means using the address to access the value.
    cout << *ptr;

    // Operation	      Code	     What you're asking
    // Referencing	   &x	     "What is x's address?"
    // Dereferencing	  *ptr	 "What value is at this address?"

    return 0;
}