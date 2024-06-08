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

	cout << *num1 << " - " << *num2 << endl;

	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;

	cout << *num1 << " - " << *num2 << endl;

	delete num1;
	delete num2;
	return 0;
}