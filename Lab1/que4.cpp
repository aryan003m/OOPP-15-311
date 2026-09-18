// write a program to create a class for Time having hh,mm and ss. Create input method that takes value as parameter and set the value to corresponding variable. Create another method called show that will print the value of hh:mm:ss. Create any two objects in main and call input and show method respectively

#include <iostream>
using namespace std;

class Time {
    int hh, mm, ss;

public:
    void input(int h, int m, int s) {
  
    }

    void show() {
        cout << hh << ":" << mm << ":" << ss << endl;
    }
};

int main() {
    Time t1, t2;
    int h, m, s;

    cout << "Enter time 1 (hh mm ss): ";
    cin >> h >> m >> s;
    t1.input(h, m, s);

    cout << "Time 1: ";
    t1.show();

    cout << "\nEnter time 2 (hh mm ss): ";
    cin >> h >> m >> s;
    t2.input(h, m, s);

    cout << "Time 2: ";
    t2.show();

    return 0;
}