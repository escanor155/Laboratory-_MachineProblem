#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main ()
{
    string studentName;
    int course, yearLevel, units;
    float RateperUnit, downPayment, balance, tuitionFee;

    cout << "Enter Your Name: ";
    getline (cin, studentName);

    cout << "Enter you Course" << endl;
    cout << "1. Bachelor of Science in Information Technology" << endl;
    cout << "2. Bachelor of Science in Computer Science" << endl;
    cout << "3. Bachelor of Science in Computer Engineering" << endl;
    cin >> course;

    cout << "Enter Your Year Level: " <<endl;
    cout << "1. Freshman" << endl;
    cout << "2. Sophomore" << endl;
    cout << "3. Junior" << endl;
    cout << "4. Senior" << endl;
    cin >> yearLevel;

    cout << "Enter the Number of Units: ";
    cin >> units;

    //for rate
    if (yearLevel == 1)
        RateperUnit = 1500;
    else if (yearLevel == 2)
        RateperUnit = 1800;
    else if (yearLevel == 3)
        RateperUnit = 2000;
    else if (yearLevel == 4 || yearLevel == 5)
        RateperUnit = 2300;

    tuitionFee = units * RateperUnit;
    downPayment = tuitionFee * 0.3;
    balance = tuitionFee - downPayment;

    cout << "           ENROLLMENT SLIP         " << endl;
    cout << "Student Name   : " << studentName << endl;

    cout << "Program/Course : ";
    if (course == 1)
        cout << "Bachelor of Science in Information Technology" << endl;
    else if (course == 2)
        cout << "Bachelor of Science in Computer Science" << endl;
    else if (course == 3)
        cout << "Bachelor of Science in Computer Engineering" << endl;

    cout << "Year Name      : ";
    if (yearLevel == 1)
        cout << "Freshman" << endl;
    else if (yearLevel == 2)
        cout << "Sophomore" << endl;
    else if (yearLevel == 3)
        cout << "Junior" << endl;
    else if (yearLevel == 4)
        cout << "Senior" << endl;
    else if (yearLevel == 5)
        cout << "Senior" << endl;

    
    // output
    
    cout << "No. of Units   : " << units << endl;
    cout << "Tuition Fee    : " << tuitionFee << endl;
    cout << "Down Payment   : " << downPayment << endl;
    cout << "Balance        : " << balance << endl;

    return 0;

}