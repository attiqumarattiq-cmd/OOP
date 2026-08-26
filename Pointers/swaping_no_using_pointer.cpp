#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 9;
    int *ptr1 = &a;
    int *ptr2 = &b;
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    cout << a << endl;
    cout << b << endl;

    return 0;
}