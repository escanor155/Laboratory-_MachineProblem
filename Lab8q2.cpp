#include <iostream>
using namespace std;

int main()
{
    short number;
    short first, second;
    
    cout << "Enter a numberber between 10 and 99: ";
    cin >> number;
    
    first = number / 10;
    second = number % 10;
    
    cout << first << " " << second << endl;
    
    system("pause");
    return 0;
}
