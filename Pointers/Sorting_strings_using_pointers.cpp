#include <iostream>
using namespace std;

int main()
{
    cout << "String is: {'b','a', 'c', 'd'}" << endl;
    char string[5] = {'b', 'a', 'c', 'e', 'd'};
    cout << static_cast<int>('A') << std::endl;

    char *ptr1 = string;
    char fight = string[0];
    char temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (static_cast<int>(*(ptr1 + i)) > static_cast<int>(*(ptr1 + j)))
            {
                temp = *(ptr1 + i);
                *(ptr1 + i) = *(ptr1 + j);
                *(ptr1 + j) = temp;
            }
        }
    }

    cout << "After rearranging array in order(from the logic of ASCII value): ";
    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr1 + i) << " ";
    }

    return 0;
}