# include<iostream>
using namespace std;

class Number{
    int a,b,c;
    public:
        Number(int x){
            a = x;
            cout<<"Your number is "<<a<<endl;
        }
        Number(int x,int y){
            a = x;
            b = y;
            cout<<"Your number is "<<a<<" and "<<b<<endl;
        }
        Number(int x,int y,int z){
            a = x;
            b = y;
            c = z;
            cout<<"Your number is "<<a<<","<<b<<" and "<<c<<endl;
        }
};
int main(){
    // Constructor Overloading
    Number q(5),w(4,6),r(1,8,9);

    return 0;
}