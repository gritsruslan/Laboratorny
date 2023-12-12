#include <iostream>
using namespace std;

int main() {
    setlocale(0, "ukr");
    const int arrayLength = 4;
    int array[arrayLength] = { 1, 2, 3, 4 };
    int sum = 0;

    for (int i = 0; i < arrayLength; i++) {
        sum += array[i];
    }

    cout << sum;
    return 0;
}
