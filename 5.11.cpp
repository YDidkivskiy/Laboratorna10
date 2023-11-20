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

    const double answer = (y * y) + (0.5 * n + 4.8) / std::sin(y);
    if (answer > 0) {
        std::cout << "Відповідь дорівнює " << answer << std::endl;
    }
    else {
        std::cout << "Відповідь виразу не знаходиться в області визначення" << std::endl;
    }
}