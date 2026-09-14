#include <iostream>
using namespace std;

int main()
{
    int branches;
    int products = 4;
    int sum_row = 0;
    int sum_column = 0;
    int highest = 0;
    cout << "================================================" << endl;
    cout << "   RECORD OF RETAIL COMPANY OF DAILY SALES" << endl;
    cout << "================================================" << endl;
    cout << "Enter number of branches: ";
    cin >> branches;
    cout << "Number of product is fixed which is 4." << endl;
    cout << "================================================" << endl;

    int (*sales)[4] = new int[branches][4];

    cout << "Enter sales figure for every branch: " << endl;
    for (int i = 0; i < branches; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Branch no: " << i + 1 << ", Product no: " << j + 1 << " = ";
            cin >> *(*(sales + i) + j);
        }
    }
    cout << "================================================" << endl;
    cout << "The full matrix is: " << endl;
    for (int i = 0; i < branches; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << *(*(sales + i) + j);
            cout << " ";
        }
        cout << "\n";
    }
    cout << "================================================" << endl;
    cout << "TOTAL SALES PER BRANCH: " << endl;
    for (int i = 0; i < branches; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum_row = sum_row + *(*(sales + i) + j);
        }
        cout << "Sum of Branch: " << i + 1 << " = " << sum_row << endl;
        sum_row = 0;
    }
    cout << "================================================" << endl;
    cout << "TOTAL SALES PER Category: " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < branches; j++)
        {
            sum_column = sum_column + *(*(sales + j) + i);
        }
        cout << "Sum of Sales Category: " << i + 1 << " = " << sum_column << endl;
        sum_column = 0;
    }
    cout << "================================================" << endl;
    for (int i = 0; i < branches; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum_row = sum_row + *(*(sales + i) + j);
        }
        if (sum_row > highest)
        {
            highest = sum_row;
        }
        sum_row = 0;
    }
    cout << "Highest Branch sales is: " << highest << endl;
    cout << "================================================" << endl;

    delete[] sales;
    sales = nullptr;

    return 0;
}