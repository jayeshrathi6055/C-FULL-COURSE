#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1() {}
    Base1(int a) : data1(a) { cout << "Base1 is called" << endl; }
    void print() { cout << "Data1 is " << data1 << endl; }
};
class Base2
{
    int data2;

public:
    Base2() {}
    Base2(int a) : data2(a) { cout << "Base2 is called" << endl; }
    void print2() { cout << "Data2 is " << data2 << endl; }
};
class Derived : public Base1, public Base2 //-----------------------------------> Responsible for this
{
    int data3;

public:
    Derived(int a, int b, int c) : Base1(a), Base2(b), data3(c) { cout << "Derived is called" << endl; }
    void print3() { cout << "Data3 is " << data3 << endl; }
};

int main()
{
    // Constructor list in Derived class(depends on derived class during inheritance and virtual get higher priority)
    Derived d(1, 2, 3);
    d.print();
    d.print2();
    d.print3();

    return 0;
}