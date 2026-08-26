#include <iostream>
using namespace std;

int main()
{
    char sentence[20] = "My name is Omar";
    char *p1 = sentence;
    int count = 0;

    for (int i = 0; i < 20; i++)
    {
        if (*(p1 + i) == 'a' || *(p1 + i) == 'e' || *(p1 + i) == 'i' || *(p1 + i) == 'o' || *(p1 + i) == 'u')
        {
            count = count + 1;
        }
        else if (*(p1 + i) == 'A' || *(p1 + i) == 'E' || *(p1 + i) == 'I' || *(p1 + i) == 'O' || *(p1 + i) == 'U')
        {
            count = count + 1;
        }
    }

    cout << count << endl;

    return 0;
}