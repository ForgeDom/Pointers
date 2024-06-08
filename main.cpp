#include <iostream>
#include <ctime>
using namespace std;

int main() {
	int* num = new int;
	cout << "Enter number:" << endl;
	cin >> *num;

	if (*num > 0) {
		cout << "Number has positive sign" << endl;
	}
	else if (*num < 0) {
		cout << "Number has negative sign" << endl;
	}
	else {
		cout << "Number equals zero" << endl;
	}
	
	delete num;
	return 0;
}