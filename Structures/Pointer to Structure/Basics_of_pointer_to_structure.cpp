#include <iostream>
using namespace std;

struct Student
{
    int rollno;
    float marks;
};

int main()
{
    Student s1;
    Student *ptr = &s1;
    s1.rollno = 250012;

    cout << ptr->rollno << endl;

    (*ptr).rollno = 250013;

    cout << ptr->rollno << endl;

    ptr->rollno = 250014;

    cout << ptr->rollno << endl;
    return 0;
}