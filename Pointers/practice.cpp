#include<iostream>
using namespace std;

int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;
    cout << *p << endl;
    p += 2;
    cout << *p << endl;
    p--;
    cout << *p << endl;

    cout <<"============" << endl;
    

    return 0;
}