#include <iostream>
using namespace std;

int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;
    cout << *p << endl;
    p += 2;
    cout << *p << endl;
    p--;
    cout << *p << endl;

    cout << "============" << endl;

    int arr1[] = {100, 200, 300, 400};
    int* p1 = &arr1[0];
    int* p2 = &arr1[3];
    cout << p2 - p1 << endl;

    cout << "===========" << endl;

    int arr2[] = {2, 4, 6, 8, 10};
    int* p3 = arr2;
    cout << *(p3 + 3) << endl;

    cout << "============" << endl;

    int arr4[] = {10, 20, 30, 40};
    int* p5 = &arr4[3];
    cout << *p5 << endl;
    p5--;
    cout << *p5 << endl;

    cout << "============" << endl;

    return 0;
}