#include <iostream>
#include <string>
using namespace std;

struct student
{
    string name;
    int rollno;
    double cgpa;
};

student createstudent()
{
    student s1;

    s1.name = "Umar";
    s1.rollno = 23;
    s1.cgpa = 3.8;

    cout << s1.name << " " << s1.rollno << " " << s1.cgpa << endl;
    return s1;
}

int main()
{
    student s1 = createstudent();

    return 0;
}