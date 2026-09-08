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
    student s2;

    cout << "=====================================" << endl;
    cout << "Enter name of 1st Student: ";
    cin >> s1.name;
    cout << "Enter roll no of 1st student: ";
    cin >> s1.rollno;
    cout << "Enter CGPA of 1st student: ";
    cin >> s1.cgpa;
    cout << "Enter age of 1st student: ";
    cin >> s1.age;
    cout << "=====================================" << endl;
    cout << "Enter name of 2nd Student: ";
    cin >> s2.name;
    cout << "Enter roll no of 2nd student: ";
    cin >> s2.rollno;
    cout << "Enter CGPA of 2nd student: ";
    cin >> s2.cgpa;
    cout << "Enter age of 2nd student: ";
    cin >> s2.age;

    cout << "=====================================" << endl;
    cout << s1.name << endl;
    cout << s1.rollno << endl;
    cout << s1.cgpa << endl;
    cout << s1.age << endl;
    cout << "=====================================" << endl;
    cout << s2.name << endl;
    cout << s2.rollno << endl;
    cout << s2.cgpa << endl;
    cout << s2.age << endl;
    cout << "=====================================" << endl;



    return 0;
}