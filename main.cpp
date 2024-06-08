#include <iostream>
#include <ctime>
using namespace std;


int sum(int* a, int* b) {
    return *a + *b;
}

int subtract(int* a, int* b) {
    return *a - *b;
}

int multiply(int* a, int* b) {
    return *a * *b;
}

double divide(int* a, int* b) {
    return static_cast<double>(*a) / *b;
}

int main() {
    int* a = new int;
    int* b = new int;
    int* choice = new int;

    while (true) {
        cout << "Enter first value:" << endl;
        cin >> *a;
        cout << "Enter second value:" << endl;
        cin >> *b;

        cout << "Choose operation:" << endl;
        cout << "1 - (+)\n2 - (-)\n3 - (*)\n4 - (/)\n5 - Exit" << endl;
        cin >> *choice;



        switch (*choice) {
            case 1:
                cout << sum(a, b) << endl;
                break;
            case 2:
                cout << subtract(a, b) << endl;
                break;
            case 3:
                cout << multiply(a, b) << endl;
                break;
            case 4:
                (divide != nullptr) ? cout<< *divide << endl : cout << "The value is null!" << endl;
                break;
            case 5:
                return 0;
        }
    }

    delete a;
    delete b;
    delete choice;

    return 0;
}


