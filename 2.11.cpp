#include <iostream>
#include <cmath>

// Завдання 2 №11

int main (){
    system("chcp 65001");

    int Ax, Ay, Bx, By, Cx, Cy;
    double h, AB1,AC1,l;
    const int i = 11;

    Ay = 0;
    Ax = 0;
    Bx = i;
    By = i - 1;
    Cx = -i;
    Cy = i + 1;

    h = std::fabs(Ax * (By - Cy) + Bx * (Cy - Ay) + Cx * (Ay - By)) / std::pow((Bx - Cx), 2) + std::pow((By - Cy), 2);
    std::cout << "Висота (h) = " << h << std::endl;

    AB1 = std::sqrt(i * i + std::pow((i-1),2));
    AC1 = std::sqrt((-i * -i) + std::pow((i + 1),2));

   l = std::sqrt((AB1 * AC1) / (AB1 + AC1));

    std::cout << "Бісектриса (l) = " << l << std::endl;

    return 0;

}

