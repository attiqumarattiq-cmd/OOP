#include <iostream>
using namespace std;

struct Student
{
    int rollno;
    float marks;
};

int main()
{
    Student students[3];
    cout << "==============================" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter roll no: ";
        cin >> students[i].rollno;
        cout << "Enter the marks: ";
        cin >> students[i].marks;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Roll no: " << students[i].rollno << endl;
        cout << "Marks: " << students[i].marks << endl;
    }

    cout << "==============================" << endl;
    // INITIALIZING
    Student student[4] = {{101, 89}, {102, 88}, {103, 90}, {104, 94}};

    for (int i = 0; i < 4; i++)
    {
        cout << "Roll no: " << student[i].rollno << endl;

        cout << "Marks: " << student[i].marks << endl;
    }
    cout << "==============================" << endl;
    return 0;
}