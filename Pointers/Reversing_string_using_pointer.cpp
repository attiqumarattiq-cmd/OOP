#include <iostream>
using namespace std;

int main()
{
    char name[14] = "Quaid e Azam";
    char *ptr = name;

    for (int i = 14; i >= 0; i--)
    {
        cout << *(ptr + i);
    }

    return 0;
}