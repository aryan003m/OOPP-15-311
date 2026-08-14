// #include <bits/stdc++.h>
// using namespace std;
// void swapByValue(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
   
// }
// void swapByRefrence(int &a, int &b){
//      int temp = a;
//     a = b;
//     b = temp;
//      cout<<"Swap by ref:"<<"a:"<<a<<"b:"<<b<<endl;
    
// }
// void swapByAddress(int*a, int*b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//      cout<<"Swap by address:"<<"a:"<<a<<"b:"<<b<<endl;

// }
// int main(){
//     int a,b;
//     cout<<"enter numbers:";
//     cin>>a>>b;
//     cout<<"before swaping:"<<"a:"<<a<<"b:"<<b<<endl;
//     cout<<"after swaping:"<<swapByValue(a,b)<<endl;

//     cout<<"before swaping:"<<"a:"<<a<<"b:"<<b<<endl;
//     cout<<"after swaping"<<swapByRefrence(a,b)<<endl;

//     cout<<"before swaping:"<<"a:"<<a<<"b:"<<b<<endl;
//     cout<<"after swaping"<<swapByAddress(&a,&b)<<endl;

//     return 0;

// }

// #include <bits/stdc++.h>
// using namespace std;
// class Complex{
//     private:
//     int real;
//     int img;
//     public:
//     void input(){
//         cout<<"enter inputs";
//         cin>>real>>img;
//     }
//     void show(){
//         cout<<real;
//         if(img>=0){
//             cout<<"+"<<img<<"i";
//         }
//         else{
//             cout<<img<<"i";
//         }
//     }
//     void add(int a, int b){
//         real = real + a;
//         img = img + b;
//     }
//     void add(Complex c){
//         real = real + c.real;
//         img = img + c.img;
//     }
//     void add(Complex p, Complex q){
//         real = p.real + q.real;
//         img = p.img + q.img; 
        
//     }
// };
// int mainn(){
//     Complex c1;
//     c1.input();
//     c1.show();
//     return 0;

// }


// #include <bits/stdc++.h>
// using namespace std;
// class Point{
//     private:
//     int x;
//     int y;
//     public:
//     Point(int a, int b){
//         x = a;
//         y = b;
//     }
//     void show(){
//         cout<<x<<","<<y;
//     }
// };
// int main(){
//     int a,b;
//     cout<<"enter elements";
//     cin>>a>>b;
//     Point p(a,b);
//     p.show();
//     return 0;
// }

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