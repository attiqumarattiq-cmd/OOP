#include <iostream>
using namespace std;

struct student
{
    string first_name;
    int rollno;
    float cgpa;
};
void display1(student s1, student s2, student s3)
{
    cout << "============================" << endl;
    cout << "For 1st Student" << endl;
    cout << "First Name: ";
    cin >> s1.first_name;
    cout << "Roll No: ";
    cin >> s1.rollno;
    cout << "CGPA: ";
    cin >> s1.cgpa;
    cout << "=============================" << endl;
    cout << "For 2nd Student" << endl;
    cout << "First Name: ";
    cin >> s2.first_name;
    cout << "Roll No: ";
    cin >> s2.rollno;
    cout << "CGPA: ";
    cin >> s2.cgpa;
    cout << "=============================" << endl;
    cout << "For 3rd Student" << endl;
    cout << "First Name: ";
    cin >> s3.first_name;
    cout << "Roll No: ";
    cin >> s3.rollno;
    cout << "CGPA: ";
    cin >> s3.cgpa;
}

int main()
{
    student s1;
    student s2;
    student s3;

    display1(s1, s2, s3);

    return 0;
}