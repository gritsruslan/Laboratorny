#include <iostream>
using namespace std;

int main() {
    setlocale(0, "ukr");
    const int arrayLength = 4;
    int array[arrayLength] = { 1, 2, 3, 4 };
    int min = array[0];
    int max = array[0];

    for (int i = 1; i < arrayLength; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }

    cout << "min:" << min << ", max:" << max;

    return 0;
}
