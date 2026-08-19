#include<iostream>
using namespace std;

int main()
{
    // Method 1
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;
    for(int i = 0; i < 4; i++)
    {
    cout << *ptr << endl;
    ptr++;
    }
    cout << "\n" << endl;

    // Method 2
    // for int
    int arr1[] = {10,20,30,40};
    int *pointer = arr1;
    cout << *pointer << endl;
    cout << *(pointer + 1) << endl;
    cout << *(pointer + 2) << endl;
    cout << *(pointer + 3) << endl;

    return 0;
}