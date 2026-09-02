#include <iostream>
using namespace std;

int main()
{
    int size = 3;

    int *marks = new int[size];

    marks[0] = 75;

    marks[1] = 82;

    marks[2] = 91;

    for (int i = 0; i < size; i++)
    {
        cout << "Student " << i + 1 << ": " << marks[i] << endl;
    }

    delete[] marks;
    marks = NULL;

    return 0;
}