#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


class LeggedMammal
{
    public:
        void LeggedMammal1(int numLegs, string tail, string fur)
        {
            string animal;

            cout << "what is the Name of this Mammal?   :";
            getline(cin, animal);
            cout << "How many legs does it have?        :";
            cin >> numLegs;
            cout << "Does it have a tail? (yes/no)      :";
            cin >> tail;
            cout << "What color is its fur?             :";
            cin.ignore();
            getline(cin, fur);
            cout << endl;
            cout <<"The " << animal << " has" << endl;
            cout << "Number of legs : " << numLegs << endl;
            cout << "Tail           : " << tail << endl;
            cout << "Fur            : " << fur << endl;
            cout << endl;
    }
};

class Dog : public LeggedMammal
{
    private:
        string breed;
        string size;
        string isRegistered;
    public:
        void setBreed(string breed)
        {
            this->breed = breed;
        }
        string getBreed()
        {
            return breed;
        }
        void setSize(string size)
        {
            this->size = size;
        }
        string getSize()
        {
            return size;
        }
        void setIsRegistered(string isRegistered)
        {
            this->isRegistered = isRegistered;
        }
        string getIsRegistered()
        {
            return isRegistered;
        }
       
};