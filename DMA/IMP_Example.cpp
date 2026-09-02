#include <iostream>
using namespace std;

int main()
{
    int size = 0;
    cout << "Enter size: ";
    cin >> size;

    int *ptr = new int[size];

    for (int i = 0; i <= size; i++)
    {
        cout << "Enter number: ";
        cin >> *(ptr + i);
    }
    for (int i = 0; i <= size; i++)
    {
        cout << ptr[i] << endl;
    }

    delete ptr;
    ptr = NULL;

    return 0;
}