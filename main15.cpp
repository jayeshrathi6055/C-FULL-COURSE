# include<iostream>
# include<cmath>
using namespace std;

class SimpleCalculator{
    public:
    void add(float a,float b){
        cout<<a+b<<endl;
    }
    void subtract(float a,float b){
        cout<<a-b<<endl;
    }
    void multiply(float a,float b){
        cout<<a*b<<endl;
    }
    void divide(float a,float b){
        cout<<a/b<<endl;
    }
    void showall(float a,float b){
        cout<<"Addition is "<<a+b<<endl;
        cout<<"Subtraction is "<<a-b<<endl;
        cout<<"Multiplication is "<<a*b<<endl;
        cout<<"Division is "<<a/b<<endl;
    }
};

class ScientificCalculator{
    public:
    void square_root(float a){
        cout<<sqrt(a)<<endl;
    }
    void exponential(float a){
        cout<<exp(a)<<endl;
    }
    void logarithm(float a){
        cout<<log10(a)<<endl;
    }
    void power(float a,float b){
        cout<<pow(a,b)<<endl;
    }

};

class HybridCalculator:public SimpleCalculator,public ScientificCalculator{

};

int main(){
    HybridCalculator y;
    y.showall(40,20);
    y.exponential(10);
    y.square_root(64);
    y.logarithm(100);

    return 0;
}