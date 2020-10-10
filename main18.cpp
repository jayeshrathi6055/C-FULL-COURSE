#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void print() { cout << a << " + i" << b << endl; }
};
class A
{
    int a;

public:
    // void setdata(int a)
    A &setdata(int a)
    {
        this->a = a; // ----------------> "This" pointer is used
        return *this;
    }
    void getdata()
    {
        cout << a;
    }
};

class Base
{
public:
    int var_base;
    void display() { cout << "Base class var is " << var_base << endl; }
};

class Derived : public Base
{
public:
    int var_derived;
    void display()
    {
        cout << "Derived class var is " << var_derived << endl;
        cout << "Base class var is " << var_base << endl;
    }
};

class Base_Class
{
public:
    int var_base_class = 1;
    virtual void display() { cout << "Base class var is " << var_base_class << endl; }//----->Virtual function is used
};

class Derived_Class : public Base_Class
{
public:
    int var_derived_class = 2;
    void display()
    {
        cout << "Derived class var is " << var_derived_class << endl;
        cout << "Base class var is " << var_base_class << endl;
    }
};

int main()
{
    // delete keyword - It is used for memory clearance.

    // int *a = new int(5);
    // cout << *a << endl;
    // delete a;
    // cout << *a << endl;

    // Arrow Operator - It is using during pointer

    // Complex c;
    // Complex *p = &c;
    // (*p).set(4,5);
    // (*p).print();
    // or
    // Complex *p = new Complex;
    // p->set(4,5);
    // p->print();

    // Use of "This" - It is a pointer which point the object.

    // A b;
    // b.setdata(5).getdata();
    // b.getdata();

    // // Pointers to derived class----------------------------->
    // Base obj_base;
    // Base *obj_base_pointer;
    // Derived obj_derived;
    // Derived *obj_derived_pointer;

    // // Base class pointer can point derived class object
    // obj_base_pointer = &obj_derived;
    // obj_base_pointer->var_base = 20;
    // obj_base_pointer->display();

    // // Derived class pointer can point only derived class object
    // obj_derived_pointer = &obj_derived;
    // obj_derived_pointer->var_base = 60;
    // obj_derived_pointer->var_derived = 40;
    // obj_derived_pointer->display();

    // // Base class pointer can point base class object
    // obj_base_pointer = &obj_base;
    // obj_base_pointer->var_base = 80;
    // obj_base_pointer->display();


    // // Use of virtual function - It is used when a base pointer points derived class then virtual says execute derived class funcation.
    
    // Base_Class *base_class_pointer;
    // Derived_Class obj;
    // base_class_pointer = &obj;
    // base_class_pointer->display();

    return 0;
}