#include <iostream>
using namespace std;

class Complex;

class Calculator
{
public:
    int sum(Complex, Complex);
};

class Complex
{
    int a, b;

public:
    void set(int m, int n)
    {
        a = m;
        b = n;
    }
    friend class Calculator; // friend classes
    // or
    // friend int Calculator::sum(Complex o1,Complex o2);

    void print()
    {
        cout << "Complex number is -> " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sum(Complex o1, Complex o2)
{
    return o1.a + o2.a;
};

int main()
{

    Complex o1, o2;
    o1.set(1, 2);
    o2.set(1, 2);
    Calculator cal;
    int val = cal.sum(o1, o2);
    cout << "Sum is " << val << endl;

    return 0;
}