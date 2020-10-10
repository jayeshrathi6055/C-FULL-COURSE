#include <iostream>
using namespace std;

class Base
{
protected: // protected is a medium part of private and public. It can inherited as well as protected.
    int a;

private:
    int b;
};

class Derived : protected Base
{
public:
    Derived()
    {
        a = 7;
    }
    void get()
    {
        a = a * 4;
        cout << a;
    }
};

int main()
{

    Derived c;
    c.get();
    return 0;
}