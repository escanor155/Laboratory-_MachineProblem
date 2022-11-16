#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Person

{

    public:
       void  Person1(string name, int age, string gender, string address, string occupation)
        {

        cout << "What is your name?                     : ";
        getline(cin, name);
        cout << "How old are you?                       : ";
        cin >> age;
        cout << "What is your Gender?Male/Female Only   : ";
        cin >> gender;
        cout << "What is your current address?          : ";
        cin.ignore();
        getline(cin, address);
        cout << "What is your Occupation?               : ";
        getline(cin, occupation);
        cout << endl;

        cout << "Name       : " << name << endl;
        cout << "Age        : " << age << endl;
        cout << "Gender     : " << gender << endl;
        cout << "Address    : " << address << endl;
        cout << "Occupation : " << occupation << endl;
        cout << endl;
        }
};