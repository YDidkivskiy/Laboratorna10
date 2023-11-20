#include <iostream>


// ЗАВДАННЯ 1. №11.1

int main () {
    system("chcp 65001"); // через setlocale не працює

    double p1,p2,p3;
    double t;
    double answer;

    std::cout << "Введіть продуктивності труб(літрів/хв): p1, p2, p3 " << std::endl;
    std::cin >> p1 >> p2 >> p3;

    std::cout << "Введіть час роботи труб(хв): t" << std::endl;
    std::cin >> t;

    answer = (p1 + p2 + p3) * t;
    std::cout << "Кількість набранної води в басейн(літрів):" << answer << std::endl;
    return 0;
}
