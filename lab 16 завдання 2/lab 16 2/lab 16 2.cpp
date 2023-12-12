#include <time.h>
#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    int matrix[5][5];

    //Наповнюємо наш масив рандомними числами від 1 до 100
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matrix[i][j] = rand() % 100 + 1;
        }
    }
    // Виводимо цей масив
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }

    // Виводимо максимальні значення у рядках масиву
    for (int i = 0; i < 5; ++i) {
        int max = matrix[i][0];
        for (int j = 1; j < 5; ++j) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
        cout << "MAX " << i << ": " << max << " ";
    }
    return 0;
}

