#include<iostream>
using namespace std;

int main()
{
    int value;
    cout << "================================================== \n" << endl;
    cout<<"===================="<<endl;
    cout<<"Enter the value: ";
    cin >> value;
    cout<<"===================="<<endl;

    int *pointer = &value;

    cout << "\n";
    cout << "The value of variable is: " << value << endl;  
    cout << "The memory address of variable is: " << pointer <<endl;
    cout << "The value stored at address using deferencing is: " << *pointer << endl;
    cout << "\n==================================================" << endl;


    return 0;
}