#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1;

public:
    void set1(int a)
    {
        base1 = a;
    }
};
class Base2
{
protected:
    int base2;

public:
    void set2(int a)
    {
        base2 = a;
    }
};
class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of base1 is " << base1 << endl;
        cout << "The value of base2 is " << base2 << endl;
        cout << "Sum is " << base1 + base2 << endl;
    }
};
int main()
{
    // Example of multiple inheritance
    Derived d;
    d.set1(5);
    d.set2(6);
    d.show();

    return 0;
}