#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int[4];

    ptr[0] = 10;

    ptr[1] = 20;

    ptr[2] = 30;

    ptr[3] = 40;

    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        sum = sum + ptr[i];
    }
    cout << "Sum = " << sum << endl;

    delete[] ptr;
    ptr = NULL;

    return 0;
}