#include <iostream>
using namespace std;

int main()
{
    cout << "\n==================================================" << endl;
    cout << "     -------- Pointer Reassignment ---------" << endl;
    cout << "==================================================" << endl;

    int a, b;
    cout << "Enter first value: ";
    cin >> a;
    cout << "Enter second value: ";
    cin >> b;
    cout << "\n"
         << endl;
    int *p1 = &a;
    int *p2 = &b;
    cout << "Value of a is: " << *p1 << endl;
    cout << "Value of b is: " << *p2 << "\n"
         << endl;
    *p1 = 50;
    *p2 = 100;
    cout << "After modification, value of a is: " << a << endl;
    cout << "After modification, the value of b is: " << b << endl;

    cout << "==================================================\n"
         << endl;

    return 0;
}