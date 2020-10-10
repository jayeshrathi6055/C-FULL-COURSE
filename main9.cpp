# include<iostream>
using namespace std;

int count = 0;

class Num{
    public:
        Num(void){
            count++;
            cout<< "Constructor works "<<count<<endl;
        }
        ~Num(){
            cout<<"Destructor works "<<count<<endl;
            count--;
        }
};
int main(){
    // DESTRUCTOR (~Class_name)
//    It is used to clean memory which is covered by constructor.
//    Destructor never takes an argument and does not return any value. 
    Num m;
    {
        cout<<"First print this"<<endl;
        Num n,o;
        cout<<"Last print this"<<endl;
    }

    return 0;
}