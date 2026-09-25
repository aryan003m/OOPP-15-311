#include <iostream>
using namespace std;

class Numbers {
private:
    int a, b;

public:
    void input();
    void show();
};

void Numbers::input() {
    cout << "Enter value of a (enter 0 if no value): ";
    cin >> a;

    cout << "Enter value of b (enter 0 if no value): ";
    cin >> b;
}

void Numbers::show() {
    cout << "Value of a = " << a << endl;
    cout << "Value of b = " << b << endl;
}

int main() {
    Numbers obj;

    obj.input();
    obj.show();

    return 0;
}