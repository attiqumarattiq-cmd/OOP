#include <iostream>
#include <cstring>
using namespace std;
struct Tehsil
{
    char tehsi[30];
    char union_c[30];
};

struct Address
{
    char city[30];
    int house_no;
    Tehsil tehsil;
};

struct student
{
    char name[30];
    char rollno[30];
    Address address;
};

int main()
{
    cout << "=================================" << endl;
    student s1;
    strcpy(s1.name, "Raghav sahil");
    strcpy(s1.rollno, "25P0012");
    strcpy(s1.address.city, "Peshawar");
    s1.address.house_no = 23;
    strcpy(s1.address.tehsil.tehsi, "Chota Sahiwal");
    strcpy(s1.address.tehsil.union_c, "Main Union Council");

    cout << s1.name << endl;
    cout << s1.rollno << endl;
    cout << s1.address.city << endl;
    cout << s1.address.house_no << endl;
    cout << s1.address.tehsil.tehsi << endl;
    cout << s1.address.tehsil.union_c << endl;
    cout << "=================================" << endl;

    return 0;
}