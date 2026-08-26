#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {12, 23, 34, 45, 56};
    int *ptr1 = arr;

    cout << "The array is: " << endl;
    cout << "arr[5] = {12,23,34,45,56};" << endl;
    cout << "After reversing array: ";
    for (int i = 4; i >= 0; i--)
    {
        cout << *(ptr1 + i);
        cout << " ";
    }

    return 0;
}