#include <iostream>
using namespace std;

void string_concatenate(char *str1, char *str2)
{
    cout << "========================================\n";
    cout << "After merging two strings, the string become as: " << endl;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        cout << str1[i];
    }
    cout << " ";
    for (int j = 0; str2[j] != '\0'; j++)
    {
        cout << str2[j];
    }
    cout << "\n========================================\n";
}

void compress_string(char *ptr1)
{
    int k = 0;
    for (int i = 0; ptr1[i] != '\0'; i++)
    {
        for (int j = 0; ptr1[j] != '\0'; j++)
        {
            if (ptr1[i] = ptr1[j])
            {
                char target = ptr1[j];
                ptr1[k] = ptr1[i];
                k++;
            }
        }
    }
    ptr1[k] = '\0'
}
}

int main()
{
    cout << "\n======== TEXT PROCESSING ENGINE =======" << endl;
    cout << "1. MERGE TWO STRINGS." << endl;
    cout << "2. COMPRESS A STRING." << endl;
    cout << "3. REVERSE A STRING." << endl;
    cout << "4. CONVERT SIGULAR WORDS TO PLURALS" << endl;
    cout << "5. Exist." << endl;
    cout << "========================================\n"
         << endl;

    int choice;
    cout << "Enter Choice(1-5): ";
    cin >> choice;
    cout << "\n";
    if (choice == 1)
    {
        cin.ignore();
        char str1[100];
        char str2[100];
        cout << "Enter first string: ";
        cin.getline(str1, 100);
        cout << "\n";
        cout << "Enter second string: ";
        cin.getline(str2, 100);
        cout << "\n";
        string_concatenate(str1, str2);
    }
    else if (choice == 2)
    {
        cin.ignore();
        char str3[100];
        cout << "Enter  String: ";
        cin.getline(str3, 100);
        cout << "\n";
        compress_string(str3);
    }

    return 0;
}
