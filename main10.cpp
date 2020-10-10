#include <iostream>
using namespace std;

class Employee
{
    int salary;

public:
    int id;
    Employee(int ide)
    {
        id = ide;
        cout << "Your id is " << id << " and salary is 100000" << endl;
    }
    Employee() {}
    void name(string s)
    {
        string s1 = s;
        cout << s1;
    }
};

class Programmer : public Employee
{   // Syntax of inheritance and we can also write private in a place of public.
    // By default it is a private.
    int language;

public:
    Programmer(int l, int f)
    {
        language = l;
        id = f;
        cout << "You know " << language << " languages." << endl;
    }
    void get()
    {
        cout << id << endl;
    }
};

int main()
{
    // Linking both classes
    Employee m(5);
    Programmer n(3, 4);
    // We can access employee's function through programmer class
    n.name("jay");

    return 0;
}