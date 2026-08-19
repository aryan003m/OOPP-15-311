#include <bits/stdc++.h>
using namespace std;
class Complex{
    private:
    int real;
    int img;
    public:
    void input(){
        cout<<"enter inputs";
        cin>>real>>img;
    }
    void show(){
        cout<<real;
        if(img>=0){
            cout<<"+"<<img<<"i";
        }
        else{
            cout<<img<<"i";
        }
    }
    void add(int a, int b){
        real = real + a;
        img = img + b;
    }
    void add(Complex c){
        real = real + c.real;
        img = img + c.img;
    }
    void add(Complex p, Complex q){
        real = p.real + q.real;
        img = p.img + q.img; 
        
    }
};
int mainn(){
    Complex c1;
    c1.input();
    c1.show();
    return 0;

}