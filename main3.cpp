#include <iostream>
using namespace std;

class Employee                            // class is declare
{
private:
    int a,b,c;
public:
    int d,e;
    void setdata(int a1,int b1,int c1);
    void getdata(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};

void Employee::setdata(int a1,int b1,int c1)
{
    a = a1;
    b = b1;
    c = c1;
};

class binary{
    string s;
    public:
        void read(){
            cout<<"Enter binary number - "<<endl;
            cin>>s;
        }
        void check(){
            for (int i = 0; i < s.length(); i++)
            {
                // cout<<s[i];
                if (s[i]=='0' || s[i]=='1'){
                    // cout<<"correct binary number";
                    continue;
                }
                else{
                    cout<<"Incorrect binary number";
                    break;
                }
            }
            
        }
};

int main() {
// class ------------------------------------------------------------------->

// Employee jay;
// jay.d = 20;
// jay.e = 30;
// jay.setdata(5,10,15);
// jay.getdata();

binary b;
b.read();
b.check();

return 0;
}