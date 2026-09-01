#include <iostream>
using namespace std;

int main()
{
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int (*ptr1)[3] = matrix;

    cout << *(*(ptr1 + 0) + 0) << endl;
    cout << *(*(ptr1 + 0) + 1) << endl;
    cout << *(*(ptr1 + 0) + 2) << endl;
    cout << *(*(ptr1 + 1) + 0) << endl;
    cout << *(*(ptr1 + 1) + 1) << endl;
    cout << *(*(ptr1 + 1) + 2) << endl;

    return 0;
}