#include <iostream>
#include <cmath>

int main () {
    system("chcp 65001");

    const double k = 7.2;
    double x = 5.0;
    double c = atan(x);
    double a = c + pow(k,2);
    double y = pow(sin(a),3) + pow(cos(2),2);

    std::cout << "c = " << c << "\na = " << a << "\ny = " << y;
}

