#include <iostream>
using namespace std;

template <class T> //------------->Take only 1 data type
// template <class T1,class T2> //------------->Multiple parameters is used
// template <class T1 = int,class T2 = float>  //-------->Default parameter
class Multiply
{
public:
    T a;
    T b;
    T c;
    void multiply()
    {
        c = a * b;
        // cout<<c<<endl;
    }
    void display();
};

template <class T>
void Multiply <T> :: display(){
    cout<< c <<endl;
}

int main()
{

    // Template = It defines all data types.It also work on function.----------------------------------->

    // Multiply <float> num;
    // num.a = 20.20;
    // num.b = 40.40;
    // num.multiply();

    Multiply<int> num;
    num.a = 10;
    num.b = 40;
    num.multiply();
    num.display();

    return 0;
}