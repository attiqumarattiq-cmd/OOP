#include <iostream>
using namespace std;

union dataunion
{
    int rollno;
    int age;
};

int main()
{
    dataunion s1;

    s1.rollno = 250312;
    cout << s1.rollno << endl;
    s1.age = 10;
    cout << s1.age << endl;

    cout << s1.rollno << endl;

    return 0;
}