#include <iostream>
using namespace std;

int main() {
    int a[3][4] = { {2, 4, 5, 1}, {3, 6, 7, 2}, {1, 1, 9, 0} };
    int b[4][3] = { {4, 4, 1}, {2, 5, 1}, {7, 7, 3}, {5, 9, 1} };
    int transposed_b[3][4];
    int result[3][4];

    //Транспонуємо матрицю b
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            transposed_b[i][j] = b[j][i];
        }
    }

    // Додаємо матрицю a до транспонової матриці b
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            result[i][j] = a[i][j] + transposed_b[i][j];
        }
    }

    // Виводим результат
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}


