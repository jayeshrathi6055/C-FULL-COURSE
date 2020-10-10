# include<iostream>
# include<fstream>    //--------------->It is a class of file
using namespace std;


int main(){
    // Method 1 - Using the constructor---------------------------------------------------------------------->

    // // Writing in a file---------------------------------------->
    // ofstream out("sample1.txt");
    // out<<"Are you writing in file"; //---->It will erase previous material and write new material
    // out.close()

    // // Read a file----------------------------------------------->
    // string s;
    // ifstream in("sample1.txt");
    // // Want only 1 word
    // in>>s;
    // cout<<s;
    // // Want only 1 line
    // getline(in,s);   //----->For more line write it again and again
    // cout<<s;
    // in.close()

    // Method 2- Using a function----------------------------------------------------------------------------->

    // // Writing in a file--------------------->
    // ofstream out;
    // out.open("sample2.txt");
    // out<<"My name is Jayesh Rathi\n";
    // out<<"What is your name?";

    // // Read a file--------------------------->
    // ifstream in;
    // in.open("sample2.txt");
    // string st;
    // // Want only 1 word
    // in>>st;
    // cout<<st<<endl;

    // // Want only 1 sentence
    // getline(in,st);
    // cout<<st<<endl;
    // getline(in,st);
    // cout<<st<<endl;

    // // Read whole file----------------------->
    // while(in.eof()==0){
    //     getline(in,st);
    //     cout<<st<<endl;
    // }
    // in.close();

    return 0;
}