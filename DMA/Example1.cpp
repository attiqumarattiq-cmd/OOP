#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int;
    *ptr = 25;
    cout << *ptr << endl;
    delete ptr;
    ptr = NULL;

    return 0;
}