# include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    Complex(int , int);      // Constructor declaration

    void print(){
        cout <<a<<" + i"<<b<<endl;
    }
};
Complex::Complex(int x,int y){     // This is a parameterized constructor. It takes parameter.
    a = x;
    b = y;
}

int main(){
    // Implict call
    Complex c(5,7);
    c.print();
    // Explicit call
    Complex d = Complex(8,9);
    d.print();

    return 0;
}
