#include <iostream>
#include <vector>

using namespace std;

int main() {
    int height, width;

    cout << "Enter the height of the array: ";
    cin >> height;
    cout << "Enter the length of the array: ";
    cin >> width;

    vector<vector<int>> arr(height, vector<int>(width));

    int k = 0;
    // Наповнюємо вектор змійкою
    for (int i = 0; i < height; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < width; j++) {
                k++;
                arr[i][j] = k;
            }
        }
        else {
            for (int j = width - 1; j >= 0; j--) {
                k++;
                arr[i][j] = k;
            }
        }
    }
    // Виводимо вектор
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
