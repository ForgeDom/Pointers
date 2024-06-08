#include <iostream>
#include <ctime>
using namespace std;


int* createArray(int* size) {
    int* arr = new int[*size];
    for (int i = 0; i < *size; i++) {
        arr[i] = rand() % 255;
    }
    return arr;
}


void printArray(int* arr, int* size) {
    for (int i = 0; i < *size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int* sumArr(int* arr ,int* size) {
    int* sum = new int{ 0 };
    for (int i = 0; i < *size; ++i) {
        *sum += arr[i];
    }
    return sum;
}

int main() {
    srand(time(0));

    int* size = new int{ 5 };
    int* arr = createArray(size);
    printArray(arr, size);
    int* result = sumArr(arr, size);
    cout << *result << endl;

    delete[] arr;
    delete size;
    delete result;
    return 0;
}


