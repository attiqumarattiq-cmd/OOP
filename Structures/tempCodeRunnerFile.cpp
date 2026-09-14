#include <iostream>
using namespace std;

struct Student
{
    string name;
    int rollNo;
    float cgpa;
};

void display(Student s)
{
    cout << "Name: " << s.name << endl;
    cout << "Roll No: " << s.rollNo << endl;
    cout << "CGPA: " << s.cgpa << endl;
}

int main()
{
    Student s1 = {"Umar", 25, 3.5};

    display(s1);

    return 0;
}
