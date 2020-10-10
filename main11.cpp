#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void set()
    {
        data1 = 10;
        data2 = 20;
    }
    int get1()
    {
        return data1;
    }
    int get2()
    {
        return data2;
    }
};

// // If we set visibility mode as a public
// class Derived : public Base
// {
//     int data3;

// public:
//     void process()
//     {
//         data3 = data2 * get1();
//     }
//     void display()
//     {
//         cout << "Value of data1 is " << get1() << endl;
//         cout << "Value of data2 is " << data2 << endl;
//         cout << "Value of data3 is " << data3 << endl;
//     }
// };

// // If we set visibility mode as a private
class Derived : private Base
{
    int data3;

public:
    void process()
    {
        set();
        data3 = data2 * get1();
    }
    void display()
    {
        cout << "Value of data1 is " << get1() << endl;
        cout << "Value of data2 is " << data2 << endl;
        cout << "Value of data3 is " << data3 << endl;
    }
};
int main()
{
    // Single inheritance
    Derived a;
    // a.set();
    a.process();
    a.display();

    return 0;
}