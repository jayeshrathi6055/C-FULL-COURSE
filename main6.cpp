# include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    // Constructor - It is a special member funcation which is invoked by class name. Due to this we can remove 
    // unwanted funcation.
    Complex(void);      // Constructor declaration

    void print(){
        cout <<a<<" + i"<<b<<endl;
    }
};
Complex::Complex(){     // This is a default constructor. It takes no parameter.
    a = 10;
    b = 20;
}  

/* Characterstics of constructor
1 . It should be declared in public class.
2 . They are automatically invoked whenever the object is created.
3 . They cannot have return values and do not have return types.
4 . We cannot refer to their addresses.
*/
int main(){

    Complex c;
    c.print();

    return 0;
}