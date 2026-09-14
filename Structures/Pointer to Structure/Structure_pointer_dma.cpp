#include <iostream>
using namespace std;

struct Student
{
    int rollno;
    float marks;
};

int main()
{
    Student *ptr1 = new Student;

    ptr1->rollno = 250015;
    ptr1->marks = 89.8;

    cout << ptr1->rollno << endl;
    cout << ptr1->marks << endl;

    delete[] ptr1;
    ptr1 = nullptr;

    return 0;
}