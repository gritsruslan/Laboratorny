#include <iostream>
#include <cstdio>

int main() {
    setlocale(0, "ukr");

    int a, b, c;
    scanf_s("%d %d %d", &a, &b, &c);

    double min = a;

    if (min > b) {
        min = b;
    }
    if (min > c) {
        min = c;
    }

    std::cout << min;

    return 0;
}

