#include <iostream>
using namespace std;

int addition(int *ptr1, int *ptr2)
{
    int sum = *ptr1 + *ptr2;
    return sum;
}

int main()
{
    int a = 55;
    int b = 45;
    int *p1 = &a;
    int *p2 = &b;

    int add = addition(p1, p2);
    cout << "a = 55, b = 45" << endl;
    cout << "Addition of numbers using function pointer is: " << add << endl;

    return 0;
}