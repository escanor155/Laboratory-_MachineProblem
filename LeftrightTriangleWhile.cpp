#include <iostream>
using namespace std;

int main()
{
    int height;
    int row;
    int column;

    cout << "Enter the height of the triangle: ";
    cin >> height;

    row = 1;
    while (row <= height)
    {
        column = 1;
        while (column <= row)
        {
            cout << "*";
            column++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
