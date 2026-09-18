// write a program to create a class for Point having x and y, create two method as input and show. Input method should take value of x x and y from keyboard and show will print the value of x and y. create any two objects in main and call input and show

// respectively.

#include <bits/stdc++.h>
using namespace std;

class Point {
    int x,y;
public:
    void input() {
        cout<<"Enter x and y: ";
        cin>>x>>y;
    }
    void show() {
        cout<< "x = "<<x<< ", y = "<< y<<endl;
    }
};
int main() {
    Point p1, p2;
    cout<<"Point 1: "<<endl;
    p1.input();
    p1.show();
    cout<<"Point 2: "<<endl;
    p2.input();
    p2.show();
    return 0;
}