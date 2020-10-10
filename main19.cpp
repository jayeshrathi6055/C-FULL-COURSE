#include <iostream>
using namespace std;

class Base
{
protected:
    int a = 1;
    int b = 2;

public:
    virtual void display() = 0; // ---------> do-nothing function / pure virtual function
};

class Derived : public Base
{
public:
    void display()
    {
        cout << "Value of a and b is " << a << " and " << b;
    }
};

int main()
{
    // // Pure virtual function - It says that pure virtual function must be overwrite in derived class.

    // Derived d;
    // d.display();

    return 0;
}