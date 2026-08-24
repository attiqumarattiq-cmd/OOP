#include<iostream>
using namespace std;

int main()
{

    int x = 10;
    int *p = &x;
    *p = 20;
    *p = 50;
    cout << x << endl;
    cout << "============" << endl;

    int a = 5;
    int b = 10;
    int *q = &a;
    *q = b;
    cout << a << endl;
    cout << "============" << endl;
return 0;

}

