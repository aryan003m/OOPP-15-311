#include <bits/stdc++.h>
using namespace std;
class Point{
    private:
    int x;
    int y;
    public:
    // Point(): x{0}, y{0} {
    //     cout<<"default"<<endl;
    // }
    // Point(int a, int b): x{a}, y{b} {
    //     cout<<"Parametrized"<<endl;
    // }
//----------------------- Two IN One--------------------------------
    Point(int p = 0, int q = 0): x{p}, y{q} {}

    // Point add(Point p){
    //     Point r;
    //     r.x = x + p.x;
    //     r.y = y + p.y;
    //     return r;       
    // }
    //sorter version
    
    // Point add(Point q){
    //     return Point(x+q.x,y+q.y);
    // }
    // For two object arguments
    Point add(Point p, Point q){
        return Point( p.x + q.x, p.y + q.y);
    }
      
    void show(){
        cout<<x<<","<<y;
    }
};
int main(){
    
    Point p(5,10),q(20,50);
    p.show();
   cout<<endl;
    q.show();
    cout<<endl;
    // Point r = p.add(q);
    Point r = r.add(p,q);

    r.show();
    return 0;
}