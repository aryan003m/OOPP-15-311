//----------------- Calculator using function overloading -------------------------//


#include <iostream>
using namespace std;

class Calculator {
public:

    // Function overloading - addition of two integers
    int calculate(int a, int b) {
        return a + b;
    }

    // Function overloading - multiplication of two doubles
    double calculate(double a, double b) {
        return a * b;
    }

    // Function overloading - addition of three integers
    int calculate(int a, int b, int c) {
        return a + b + c;
    }

    // Function overloading - division
    double calculate(double a, double b, bool division) {
        if (division == true && b != 0) {
            return a / b;
        }

        return 0;
    }

    // Inline function
    inline int square(int n) {
        return n * n;
    }

    // Default argument
    int power(int base, int exponent = 2) {
        int result = 1;

        for (int i = 1; i <= exponent; i++) {
            result = result * base;
        }

        return result;
    }
};

int main() {

    Calculator obj;

    cout << "Addition of 10 and 20: "
         << obj.calculate(10, 20) << endl;

    cout << "Multiplication of 2.5 and 4.0: "
         << obj.calculate(2.5, 4.0) << endl;

    cout << "Addition of 10, 20 and 30: "
         << obj.calculate(10, 20, 30) << endl;

    cout << "Division of 20 and 5: "
         << obj.calculate(20.0, 5.0, true) << endl;

    cout << "Square of 6: "
         << obj.square(6) << endl;

    cout << "5 raised to power 3: "
         << obj.power(5, 3) << endl;

    cout << "4 raised to default power: "
         << obj.power(4) << endl;

    return 0;
}