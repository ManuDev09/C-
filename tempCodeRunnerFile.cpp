#include <iostream>
#include <cmath>
#include <cstdlib>   // For exit() function

class equ
ation {
    float a, b, c, x1, x2;
public:
    // Constructor with default values
    equation(float f, float s = 5, float t = 1) {
        std::cout << "Object is initialized and assigned the values" << std::endl;
        a = f;
        b = s;
        c = t;
    }

    void calculate() {
        float det = b * b - 4 * a * c;
        if (det < 0) {
            std::cout << "The roots are imaginary, no more execution now!" << std::endl;
            exit(1);
        } else {
            x1 = (-b + sqrt(det)) / (2 * a);
            x2 = (-b - sqrt(det)) / (2 * a);
        }
    }

    void display() {
        std::cout << "\nThe values of a, b, and c are: " << a << ", " << b << ", " << c << std::endl;
        std::cout << "Roots are: " << x1 << " and " << x2 << std::endl;
    }
};

int main() {
    float x, y, z;
    std::cout << "Enter the value of x: ";
    std::cin >> x;
    equation qd(x);
    qd.calculate();
    qd.display();

    std::cout << "Enter the values of x and y: ";
    std::cin >> x >> y;
    equation qdl(x, y);
    qdl.calculate();
    qdl.display();

    std::cout << "Enter the values of x, y, and z: ";
    std::cin >> x >> y >> z;
    equation qd2(x, y, z);
    qd2.calculate();
    qd2.display();

    return 0;
}