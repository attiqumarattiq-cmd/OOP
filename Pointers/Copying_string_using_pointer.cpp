#include <iostream>
using namespace std;

int main()
{
    char str1[35] = "Dear u, how is your life going?";
    char *ptr1 = str1;
    char str2[35];
    char *ptr2 = str2;

    cout << "\n\nFirst string: Dear u, how is your life going?" << endl;
    for (int i = 0; i < 35; i++)
    {
        *(ptr2 + i) = *(ptr1 + i);
    }
    cout << "After copying from string 1 to string 2, the string 2 is: " << endl;
    for (int j = 0; j < 35; j++)
    {
        cout << *(ptr2 + j);
    }
    cout << "\n\n";

    return 0;
}