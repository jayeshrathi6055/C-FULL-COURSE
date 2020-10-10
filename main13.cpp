#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;

public:
    void set(int a)
    {
        roll = a;
    }
    void get()
    {
        cout << "Your roll no. is " << roll << endl;
    }
};

class Marks : public Student
{
protected:
    float maths, physics;

public:
    void setMarks(float a, float b)
    {
        maths = a;
        physics = b;
    }
    void getmarks()
    {
        cout << "Your marks in maths and physics are " << maths << " and " << physics << " respectively." << endl;
    }
};

class Result : public Marks
{
    float percentage;

public:
    void display()
    {
        percentage = (maths + physics) / 2;
        get();
        getmarks();
        cout << "Your percentage is " << percentage << "%" << endl;
    }
};

int main()
{
    // Multilevel inheritance example
    Result jay;
    jay.set(24);
    jay.setMarks(90, 95);
    jay.display();

    return 0;
}