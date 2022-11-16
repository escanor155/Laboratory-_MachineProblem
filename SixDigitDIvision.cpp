#include <iostream>
using namespace std;


//function for division
int divide(int num1, int num2)
{
    int result;
    result = num1 / num2;
    return result;
}

//main function
int main()
{
//declare variables
    int num1, num2, num3, num4, num5, num6;
    int result1, result2, result3;
// input    
    cout << "Enter 6 non zero integers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6;
    
    result1 = divide(num1, num2);
    result2 = divide(num3, num4);
    result3 = divide(num5, num6);
//output    
    cout << "The result of the division is  :" <<endl;
    cout << result1 << endl;
    cout << result2 << endl;
    cout << result3 << endl;
    
   system ("pause");
    return 0;
}
