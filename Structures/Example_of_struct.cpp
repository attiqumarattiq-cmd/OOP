#include <iostream>
using namespace std;

struct time
{
    int hours;
    int minutes;
    int seconds;
};

int main()
{
    time now;
    now.hours = 8;
    now.minutes = 9;
    now.seconds = 40;

    cout << now.hours << " " << now.minutes << " " << now.seconds << endl;

    return 0;
}