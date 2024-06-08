#include <iostream>
#include <ctime>
using namespace std;

int* createArr(int* arr1, int* size) {
    for (int i = 0; i < *size; ++i) {
        arr1[i] = rand() % 100;
    }
    return arr1;
}

void printArr(int* arr1, int* size) {
    for(int i = 0; i < *size; i++) {
        cout << *(arr1+i) << " ";
    }
    cout << endl;
}

int* exchangeArrs(int* arr1, int* arr2, int* size) {
    for (int i = 0; i < *size; i++) {
        *(arr2 + i) = *(arr1 + i);
    }
    return arr2;
}

int main() {
    srand(time(0));
    int* size = new int{ 5 };

    int* arr1 = new int[*size]; 
    createArr(arr1, size);
    printArr(arr1, size);

    int* arr2 = new int[*size];
    createArr(arr2, size);
    printArr(arr2, size);

    exchangeArrs(arr1, arr2, size);

    cout << "Array 1 after exchange: ";
    printArr(arr1, size);
    cout << "Array 2 after exchange: ";
    printArr(arr2, size);

    delete[] arr1;
    delete[] arr2;
    delete size;
    return 0;
}


