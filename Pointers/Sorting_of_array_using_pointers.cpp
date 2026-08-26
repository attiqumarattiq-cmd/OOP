#include <iostream>
using namespace std;

int main()
{
    int arr1[5] = {12, 56, 34, 89, 5};
    int *ptr = arr1;
    int temp;

    cout << "\n\nArray is: {12,56,34,89,5} " << endl;
    cout << "Sorting of array: " << endl;
    cout << "-- Ascending Order --" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (*(ptr + i) < *(ptr + j))
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " ";
    }
    cout << "\n";
    cout << "-- Descending Order --" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (*(ptr + i) > *(ptr + j))
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " ";
    }
    cout << "\n\n";

    return 0;
}