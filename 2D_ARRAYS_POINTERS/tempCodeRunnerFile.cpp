#include <iostream>
using namespace std;

int main()
{
    cout << "\n==================================" << endl;
    int matrix[3][3];
    int (*ptr1)[3] = matrix;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter " << " Value: ";
            cin >> *(*(ptr1 + i) + j);
        }
    }
    cout << "\n==================================" << endl;
    cout << "The entered matrix is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << *(*(ptr1 + i) + j) << ", ";
        }
        cout << "\n";