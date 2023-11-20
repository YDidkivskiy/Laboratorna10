#include <iostream>
#include <cmath>

// ЗАВДАННЯ 1. №11.2

int main() {
    system("chcp 65001"); // через setlocale не працює

    double S,a,P;

    std::cout << "Введіть площу круга (S): ";
    std::cin >> S;

    a = std::sqrt(4 * S);


    std::cout << "Довжина сторони квадрата: " << a << std::endl;

    P = 4 * a;
    std::cout << "Периметр квадрата: " << P << std::endl;

    return 0;
}
