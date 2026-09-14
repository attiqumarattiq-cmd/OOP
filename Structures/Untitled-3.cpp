#include <iostream>
using namespace std;

struct Student
{
    string name;
    int rollNo;
    float cgpa;
};

Student getStudent()
{
    Student s;

    s.name = "Umar";
    s.rollNo = 25;
    s.cgpa = 3.5;

    return s;
}

int main()
{
    Student s1;

    s1 = getStudent();

    cout << "Name: " << s1.name << endl;
    cout << "Roll No: " << s1.rollNo << endl;
    cout << "CGPA: " << s1.cgpa << endl;

    return 0;
}