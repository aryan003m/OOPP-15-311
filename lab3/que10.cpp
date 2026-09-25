#include <iostream>
using namespace std;

class Numbers {
private:
    int a, b;

public:
    void input();
    void show();
};

inline void Numbers::input() {
    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;
}

inline void Numbers::show() {
    cout << "Value of a = " << a << endl;
    cout << "Value of b = " << b << endl;
}

int main() {
    Numbers obj;

    obj.input();
    obj.show();

    return 0;
}