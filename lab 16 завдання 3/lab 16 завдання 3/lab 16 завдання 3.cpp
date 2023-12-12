#include <time.h>
#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    int s[4][5];
    int ArraySum[4];

    // Наповнюємо наш масив рандомними числами від 1 до 100 включно
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            s[i][j] = rand() % 100 + 1;
        }
    }
    // Виводимо цей двумірний масив
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << s[i][j] << ' ';
        }
        cout << '\n';
    }
    // Вираховуємо суми рядків та додаємо їх до вектору
    for (int i = 0; i < 4; ++i) {
        int sum = 0;
        for (int j = 0; j < 5; ++j) {
            if (s[i][j] > 0) {
                sum += s[i][j];
            }
        }
        ArraySum[i] = sum;
    }
    //Виводимо вектор з сумами рядків
    for (int i = 0; i < 4; ++i) {
        cout << "sum " << i << ": " << ArraySum[i] << " ";
    }
}

