#include <iostream>
#include <cmath>

//ЗАВДАННЯ 3. №11

int main () {
    system("chcp 65001");

    double z1, z2, a;

    std::cout << "Введіть значення a в градусах: ";
    std::cin >> a;
    if (a == 0) {
        std::cout << "Неправильне число";
    }

    else {
        a = a * M_PI / 180;

        z1 = (1 - 2 * pow(sin(a), 2)) / (1 + sin(2 * a));
        z2 = (1 - tan(a)) / (1 + tan(a));

        std::cout << "z1 = " << z1 << "\nz2 = " << z2 << std::endl;
    }
    return 0;

}