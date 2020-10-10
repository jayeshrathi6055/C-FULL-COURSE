//Basic Structure of a program----------------------------------------------->
#include <iostream>
using namespace std;                    // It is used to reduce writing std again and again
int main() {
	std::cout << "Hello world!\n";
	cout << "Hello sir";               // Here std is not neccessary
	
////	Variables and datatypes----------------------------------------------->
//	int a = 5;
//	float b = 5.1;
//	char c = 'a';
//	long d = 1000;
//	double e = 5.12356789;
//	bool f = true;
//	short g = 120;
//	cout << "\nResult: "<<a+d+g;           // int+long+short
//	cout << "\n"<<b+e;                 // float+double
//	cout << "\n"<<c<<" is "<<f;        // char and bool             true means 1 and false means 0
	
////	Take I/O by user----------------------------------------------------------->
//
////	cout << ------> Insertion operator
////	cin >> -------> Extraction operator
//	int num1,num2;
//	cout << "\nEnter the value of num1 :\n";
//	cin >> num1;
//	cout << "Enter the value of num2 :"<<endl;         // endl is also use for new line
//	cin >>num2;
//	cout << "addition is : "<<num1+num2;
	
//	Operators------------------------------------------------------------------------>
//	+,-,*,/,%,++a,a++,--a,a--   ----> Arithmatic operator
//	=  ----> Assignment operator
//	==,>=,<=,>,<,!=  -------> Comparison operator
//	&&,||,!  ---------> Logical operator

////	Use of sizeof()-------------------------------------------------------------->
//	cout <<endl<< "Showing datatype of any variale in bytes of datatype like - "<<sizeof(34.4)<<endl;       // By default double
//	cout <<endl<< "Showing datatype of any variale in bytes of datatype like - "<<sizeof(34.4f)<<endl;      // float
//	cout << "Showing datatype of any variale in bytes of datatype like - "<<sizeof(344)<<endl;              // int

////	Reference variable------------------------------------------------------------>
//	int x = 20;
//	int & y = x;
//	cout<<endl<<x;
//	cout<<endl<<y;

////	Typecasting ------------------------------------------------------------------------>
//	float z = 12.25;
//	cout<<endl<<"convert float into int - "<<int(z);
	
////	Constants ------------------------------------------------------------------------------->
//	const int l = 123456;         // const indicate that you cannot change its value otherwise it will give an error
//	cout<<endl<<l;

	return 0;
}
