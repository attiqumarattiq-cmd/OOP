#include <iostream>
using namespace std;

int main()
{
    cout << "\n===========================================" << endl;
    cout << "   -------- Analyzing Marks ---------" << endl;
    cout << "===========================================\n"
         << endl;
    int arr1[5];
    int total = 0;
    cout << "Enter marks of 5 subjects in array \n"
         << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter value: ";
        cin >> arr1[i];
    }
    int *p1 = &arr1[0];
    for (int i = 0; i < 5; i++)
    {
        total = total + *(p1 + i);
    }
    cout << "-------------------------------------------" << endl;
    cout << "Total marks of 5 subjects are: " << total << endl;
    int highest = arr1[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr1[i] > highest)
        {
            highest = arr1[i];
        }
    }
    cout << "-------------------------------------------" << endl;
    cout << "Highest marks is: " << highest << endl;
    int lowest = arr1[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr1[i] < lowest)
        {
            lowest = arr1[i];
        }
    }
    cout << "-------------------------------------------" << endl;
    cout << "Lowest marks is: " << lowest << endl;
    int average = total / 5;
    cout << "-------------------------------------------" << endl;
    cout << "Average marks is: " << average << endl;
    cout << "-------------------------------------------\n"
         << endl;

    return 0;
}