#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int array [5][7] = {{1, 2, 3, 4, 5, 6, 7},
                        {8, 9, 10, 11, 12, 13, 14},
                        {15, 16, 17, 18, 19, 20, 21},
                        {22, 23, 24, 25, 26, 27, 28},
                        {29, 30, 31, 32, 33, 34, 35} };
    int row, column;
    int seat;
    cout << "Select a seat number to reserve    : ";
    cin >> seat;

    while (seat != 0)
    {
        if (seat >=1 && seat <= 35)
        {
            if (array[(seat - 1) / 7][(seat - 1) % 7] == 0)
            {
                cout << "Seat is taken" << endl;
            }
            else
            {
                cout << "Seat successfully reserved" << endl;
                array[(seat - 1) / 7][(seat - 1) % 7] = 0;
            }
        for (row = 0; row < 5; row++)
            {
                for (column = 0; column < 7; column++)
                {
                    cout << setw(3) << array[row][column] << " ";
                }
                cout << endl;
            }
        }
        else
        {
            cout << "          ERROR WARNIG!!!!         " << endl;
            cout << "Seat is not valid, please select a valid number" << endl;
        }
        cout << "Select a seat number to reserve   : ";
        cin >> seat;
    }
        return 0;
} //cant use the mic, got cough >.<
//thank you...