#include <iostream>
#include <cmath>

// Завдання 5 № 11

int main () {
    system("chcp 65001");

    double y,n;
    std::cout << "Введіть перше число(y)" << std::endl;
    std::cin >> y;

    std::cout << "Введіть друге число(n)" << std::endl;
    std::cin >> n;

    if (y > 0 && n > 0) {
        const double answer = (y * y) + (0.5 * n + 4.8) / std::sin(y);
        std::cout << "Відповідь дорівнює " << answer << std::endl;
    }

    else {
        std::cout << "Параметри для цієї задачі не знаходяться у області визначення" << std::endl;
    }
}