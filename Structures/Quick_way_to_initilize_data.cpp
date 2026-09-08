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
    student s1 = {"Umar", 23, 3.5, 23};
    student s2 = {"Akbar", 25, 3.7, 21};
    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s2.name << endl;
    cout << s2.age << endl;

        return 0;
}