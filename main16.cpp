#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set(int a)
    {
        roll_no = a;
    }
    void print_roll_no()
    {
        cout << "Your roll number is " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float a, float b)
    {
        maths = a;
        physics = b;
    }
    void print_marks()
    {
        cout << "Your marks in maths and physics are " << maths << "," << physics << " respectively" << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float sport;

public:
    void set_sport(float a)
    {
        sport = a;
    }
    void print_sport()
    {
        cout << "Your sport marks is " << sport << endl;
    }
};

class Result : virtual public Sports, virtual public Test
{
protected:
    float result;

public:
    void display()
    {
        result = maths + physics + sport;
        print_roll_no();
        print_marks();
        print_sport();
        cout << "Overall result is " << result << " out of 300" << endl;
    }
};

int main()
{
    // Use of Virtual - It removes unwanted copy of same function.
    Result r;
    r.set(24);
    r.set_marks(90, 95);
    r.set_sport(90);
    r.display();

    return 0;
}