#include <iostream>
using namespace std;

int main() {
    setlocale(0, "ukr");
    const int arrayLength = 7;
    int array[arrayLength] = { 1, 2, 3, 4, 5, 6, 7 };

    for (int i = arrayLength - 1; i >= 0; i--) {
        cout << array[i] << " ";
    }

    return 0;
}

