#include <iostream>
using namespace std;

class Calculator {
public:

    inline int square(int x) {
        return x * x;
    }

    int add(int a, int b = 0) {
        return a + b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    double subtract(double a, double b) {
        return a - b;
    }
};

int main() {
    Calculator calc;

    cout << "Square of 5: "
         << calc.square(5) << endl;

    cout << "Addition of 10 and 20: "
         << calc.add(10, 20) << endl;

    cout << "Addition using default argument: "
         << calc.add(10) << endl;

    cout << "Multiplication of integers: "
         << calc.multiply(5, 4) << endl;

    cout << "Multiplication of doubles: "
         << calc.multiply(2.5, 4.0) << endl;

    cout << "Subtraction of integers: "
         << calc.subtract(20, 5) << endl;

    cout << "Subtraction of doubles: "
         << calc.subtract(10.5, 2.5) << endl;

    return 0;
}