#include <iostream>
using namespace std;

struct student
{
    string name;
    int rollno;
    float cgpa;
    int age;
};

int main()
{
    student s1;
    s1.name = "Umar";
    s1.rollno = 25;
    s1.cgpa = 3.2;

    cout << s1.name << endl;
    cout << s1.rollno << endl;
    cout << s1.cgpa << endl;

    return 0;
}