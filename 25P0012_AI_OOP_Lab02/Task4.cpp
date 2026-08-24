#include <iostream>
using namespace std;

int main()
{
    cout << "\n===========================================" << endl;
    cout << "   -------- POINTER ARITHMETIC ---------" << endl;
    cout << "===========================================\n"
         << endl;
    int arr1[5];

    cout << "Enter 5 elements in array \n"
         << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter value: ";
        cin >> arr1[i];
    }

    int *p1 = &arr1[0];
    int sum = 0;
    int average;
    cout << "---------------------------------------------" << endl;

    cout << "All elements of array are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << ", ";
    }
    cout << "\n---------------------------------------------" << endl;
    cout << "\n";
    cout << "Memory address of elements are: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Memory address of " << arr1[i] << " is: " << p1 + i << endl;
    }
    cout << "\n---------------------------------------------" << endl;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + *(p1 + i);
    }
    cout << "Sum of array elements are: " << sum << endl;
    cout << "---------------------------------------------" << endl;
    average = sum / 5;
    cout << "Average of array elements are: " << average << endl;
    cout << "---------------------------------------------\n"
         << endl;

    return 0;
}