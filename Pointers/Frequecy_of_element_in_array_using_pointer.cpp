#include <iostream>
using namespace std;

int main()
{
    char element;
    char sentence[50];
    int count = 0;
    cout << "\nEnter the sentence: ";
    cin.getline(sentence, 50);
    cout << "Enter the element u want to search: ";
    cin >> element;
    cout << "\n";

    char *ptr1 = sentence;

    for (int i = 0; *(ptr1 + i) != '\0'; i++)
    {
        if (*(ptr1 + i) == element)
        {
            count = count + 1;
        }
    }
    cout << "Total number of " << element << " is: " << count << endl;

    return 0;
}