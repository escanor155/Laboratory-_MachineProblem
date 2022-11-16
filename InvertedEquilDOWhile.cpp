#include <iostream>
using namespace std;

int main() {
	int height;

	cout << "Enter the Height: ";
	cin >> height;

	int b, y; 
	int a = 0;

	do {
		b = height - a;
	    y = 0;
		if (a != 0) {
			do{
				cout << " ";
				++y;
			} while(y < a);
		}

		if (b != 0) {
			do {
				cout << "*" << " ";
				b--;
			}while(b > 0);
		}
		cout << endl;
		a++;
	}while(a < height);
}   

