#include <iostream>
using namespace std;

int main()
{

    cout << "\n===================================================" << endl;
    cout << "     ----- UPDATING A EMPLOYEE'S SALARY-------" << endl;
    cout << "===================================================" << endl;

    int salary;
    int increment_amount;
    cout << "Enter the salary of the Employee: ";
    cin >> salary;
    cout << "\n";
    cout << "Enter the increment amount: ";
    cin >> increment_amount;
    cout << "\n";
    int *p = &salary;
    *p = *p + increment_amount;
    cout << "Your Updated salary is:" << *p << endl;

    cout << "=====================================================\n"
         << endl;

    return 0;
}
