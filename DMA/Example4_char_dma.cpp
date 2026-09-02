#include <iostream>
using namespace std;

int main()git 
{
    int size;
    cout << "Enter size of array of characters which were used Dynamically: ";
    cin >> size;
    cout << "\n";

    char *char_ptr = new char[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter character: ";
        cin >> char_ptr[i]; // OR *(char_ptr + i)
    }
    for (int i = 0; i < size; i++)
    {
        cout << *(char_ptr + i) << endl;
    }

    return 0;
}