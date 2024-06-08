#include <iostream>
#include <ctime>
using namespace std;

int main() {
	int* num1 = new int;
	cout << "Enter first number:" << endl;
	cin >> *num1;
	int* num2 = new int;
	cout << "Enter second number:" << endl;
	cin >> *num2;
	
	if (*num1 > *num2) {
		cout << "Number 1 is bigger" << endl;
	}
	else if(*num1 < *num2){
		cout << "Number 2 is bigger" << endl;
	} 
	else {
		cout << "Numbers are equal" << endl;
	}

	delete num1;
	delete num2;
	return 0;
}