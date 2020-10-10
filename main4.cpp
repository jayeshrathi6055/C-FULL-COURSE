#include <iostream>
using namespace std;

class Complex{
    int a,b;
    public:
        void set(int m,int n){
            a = m;
            b = n;
        }
        friend Complex sum(Complex o1,Complex o2);            //  friend -  give permission to access a class but it is not a part of class.
        
        void print(){
            cout<<"Complex number is -> "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex sum(Complex o1,Complex o2){
    Complex o3;
    o3.set((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main(){

    Complex num,num2,add;
    num.set(1,2);
    num.print();

    num2.set(4,5);
    num2.print();

    add = sum(num , num2);
    add.print();

    return 0;
}