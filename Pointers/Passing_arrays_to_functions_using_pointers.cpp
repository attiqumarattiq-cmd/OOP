#include <iostream>
using namespace std;

int sum(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + *(arr + i);
    }
    return sum;
}
int main()
{
    cout << "\nArray is: {2,5,3,5,2}" << endl;
    int array[5] = {2, 5, 3, 5, 2};

    cout << "Sum of array by using function is: " << sum(array, 5) << "\n"
         << endl;

    return 0;
}