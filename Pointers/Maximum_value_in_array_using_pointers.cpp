#include <iostream>
using namespace std;

int main()
{
    int arr1[5] = {12, 45, 78, 23, 56};
    int *ptr1 = arr1;
    int maximum = 0;
    for (int i = 0; i < 5; i++)
    {
        if (*(ptr1 + i) > maximum)
        {
            maximum = *(ptr1 + i);
        }
    }
    cout << "Array is: {12,45,78,23,56}" << endl;
    cout << " Maximum in array using pointers is: " << maximum << endl;

    return 0;
}