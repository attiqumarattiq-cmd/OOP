#include <iostream>
using namespace std;

int main()
{

    int arr[] = {10, 20, 30, 40, 50};

    int *ptr = arr;

    cout << *ptr << endl; // 10

    ptr++;
    cout << *ptr << endl; // 20

    ptr++;
    cout << *ptr << endl; // 30

    cout << *(ptr + 1) << endl; // 40

    return 0;
}
