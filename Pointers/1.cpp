#include<iostream>
#include<string>
using namespace std;

class Teacher{
    // properties

    string name;
    string debt;
    string subject;
    double salary;

    //Methods / member functions
    void changedept(string newdebt) 
    {
        debt = newdebt;
    }

};

int main()
{
    Teacher t1;
    t1.name = "Umar";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    t1.salary = 25000;

    
    cout << t1.name << endl;
    return 0;
}