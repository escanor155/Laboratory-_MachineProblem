#include <iostream>
using namespace std;

int Fibunacci(int number)
{
    if (number == 0)
        return 0;
    else if (number == 1)
        return 1;
    else
        return Fibunacci(number - 1) + Fibunacci(number - 2);
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "The " << number << "Fibunacci number is " << Fibunacci(number) << endl;

    system("pause");
    return 0;
}

