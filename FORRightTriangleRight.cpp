#include <iostream>
using namespace std;

int main()
{
    int height;

    cout << "Enter the height of the triangle: ";
    cin >> height;

    for (int row = 1; row <= height; row++)
    {
        for (int space = 1; space <= height - row; space++)
            cout << ' ';

        for (int asterisk = 1; asterisk <= row; asterisk++)
            cout << '*';

        cout << endl;
    }

    return 0;
}