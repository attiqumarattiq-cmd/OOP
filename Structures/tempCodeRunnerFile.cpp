#include<iostream>
using namespace std;

struct Room
{
    int roomnumber;
    char occupant_name[30];
    int capacity;
    int occupied;
};


int main()
{
    Room arr1[5];
    for(int i = 0; i < 2; i++)
    {
        cout << "------------------------------" << endl;
        cout << "Enter room number: ";
        cin >> arr1[i].roomnumber;
        cin.ignore();
        cout << "Enter occupant name: ";
        cin.getline(arr1[i].occupant_name, 30);
        cout << "Enter capacity of room: ";
        cin >> arr1[i].capacity;
        cout << "Enter occupied capacity: ";
        cin >> arr1[i].occupied;
    }
    cout << "------------------------------" << endl;
    Room *ptr1 = &arr1[0];
    for(int i = 0; i < 2; i++)
    {
        cout << "------------------------------" << endl;
        cout << "Room number: " << (ptr1 + i)->roomnumber << endl;
        cout << "Occupant Nmae: " << (ptr1 + i)->occupant_name << endl;
        cout << "Capcity of room: " << (ptr1 + i)->capacity << endl;
        cout << "Occupied place: " << (ptr1 + i)->occupied << endl;
    }
    cout << "------------------------------" << endl;
    int lowest = ptr1->occupied;
    int room = ptr1->roomnumber;
    for(int i = 0; i < 2; i++)
    {
        if((ptr1+i)->occupied > lowest)
        {
            lowest = (ptr1+i)->occupied;
            room = (ptr1+i)->roomnumber;
        }
    }
    cout << lowest << room << endl;



    return 0;
}