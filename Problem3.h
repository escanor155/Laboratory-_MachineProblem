#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Polygon
{
    public:
        void Polygon1(string pName, int pSides, string pColor)
        {
            cout << "What is the name of the Polygon?   :";
            getline(cin, pName);
            cout << "How many sides does it have?       :";
            cin >> pSides;
            cout << "What color is it?                  :";
            cin.ignore();
            getline(cin, pColor);
            cout << endl;
            cout << "The " << pName << " has..." << endl;
            cout <<"[" << pSides<< "]" << " number of sides" << endl;
            cout << "[" << pColor << "]" << " in Color" << endl;
            cout << endl;
        }
};