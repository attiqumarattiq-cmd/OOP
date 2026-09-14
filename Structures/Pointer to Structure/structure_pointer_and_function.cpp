#include <iostream>
using namespace std;

struct Student
{
    int rollno;
    float marks;
};

void display(Student *ptr1)
{
    ptr1->rollno = 22012;
    ptr1->marks = 89.9;
    cout << ptr1->rollno << endl;
    cout << ptr1->marks << endl;
}

int main()
{
    Student s1;
    display(&s1);

    return 0;
}