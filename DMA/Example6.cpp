#include <iostream>
using namespace std;

int main()
{
    char *ptr = new char[3];

    *ptr = 'X';

    *(ptr + 1) = 'Y';

    *(ptr + 2) = 'Z';

    cout << ptr[0] << endl;

    cout << ptr[1] << endl;

    cout << ptr[2] << endl;

    delete[] ptr;
    ptr = NULL;

    return 0;
}