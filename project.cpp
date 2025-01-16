#include <iostream>
#include <cmath>
#include <cstdlib>   // For exit() function
#include <complex>   // For complex numbers

class equation {
    float a, b, c;
    float x1, x2; 
    std::complex<float> cx1, cx2; // To store complex roots if discriminant is negative
public:
    // Constructor with default values
    equation(float f, float s = 5, float t = 1) {
        std::cout << "Object is initialized and assigned the values" << std::endl;
        a = f;
        b = s;
        c = t;
    }

    void calculate() {
        if (a == 0) {
            std::cout << "Coefficient 'a' cannot be 0 in a quadratic equation!" << std::endl;
            exit(1);  // Exit program if a is 0
        }

        float det = b * b - 4 * a * c;
        
        if (det >= 0) {
            // Real roots
            x1 = (-b +
