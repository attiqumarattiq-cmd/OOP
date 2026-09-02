#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int[3];

    *(ptr + 0) = 10;
    *(ptr + 1) = 10;
    *(ptr + 2) = 10;

    cout << *(ptr + 0) << endl;
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 2) << endl;

    delete[] ptr;
    ptr = NULL;

    return 0;
}