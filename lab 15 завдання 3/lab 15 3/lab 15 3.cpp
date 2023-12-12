#include <iostream>
using namespace std;

int main() {
    setlocale(0, "ukr");
    const int arrayLength = 6;
    int array[arrayLength] = { 1, 2, 3, 4, 5, 6 };

    for (int i = 1; i < arrayLength; i += 2) {
        array[i] = 0;
    }

    for (int i = 0; i < arrayLength; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
