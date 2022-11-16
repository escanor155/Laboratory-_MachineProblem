#include "Problem1.2.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    Dog dog;
    string breed;
    string size;
    string isRegistered;

    cout << "What is the breed of the dog?      :";
    getline(cin, breed);
    cout << "What is the size of the dog?       :";
    getline(cin, size);
    cout << "Is the dog registered? (yes/no)    :";
    getline(cin, isRegistered);
    cout << endl;

    dog.setBreed(breed);
    dog.setSize(size);
    dog.setIsRegistered(isRegistered);

    cout << "The breed of the dog is " << "[ " << dog.getBreed() << " ]"<< endl;
    cout << endl;
    cout << "The size of the dog is " << "[ " << dog.getSize() <<" ]" << endl;
    cout << endl;

    if (dog.getIsRegistered() == "yes")
    {
        cout << "The dog is registered" << endl;
    }
    else
    {
        cout << "The dog is not registered" << endl;
    }
    cout << endl;

    system("pause");

    return 0;
}