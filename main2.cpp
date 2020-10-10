#include <iostream>
using namespace std;  

struct employee{
	int age;
	char favchar;
	float salary;
};
typedef struct inform{
	long number;
	float age;
}info;                       // we can use info as a short name

union money{
	double rupees;
	float dollar;
	float pound;
};

int sum(int a,int b){
	int c = a+b;
	return c;
};

inline int product(int x,int y){
	return x*y;
};

int sub(int x,int y){
	static int c = 0;     // Static funcation store previous value and execute only once
	c++;
	return x-y+c;
};


int main() {

////	Structure in c++--------------------------------------------------------->
////	It is use when we have to store details with different datatypes.
//	struct employee jayesh;
//	jayesh.age = 18;
//	jayesh.favchar = 'j';
//	jayesh.salary = 100000;
//	
//	cout<<jayesh.age<<endl;
//	cout<<jayesh.favchar<<endl;
//	cout<<jayesh.salary<<endl;

////             or
//	info aman;
//	aman.age = 22.5;
//	aman.number = 9829121225;
//	
//	cout<<aman.age<<endl;
//	cout<<aman.number<<endl;
	
// // Union in c++ ------------------------------------------------------------------------->
// 	// It is same as structure but the difference is it share memory with others
// 	union money m1;
// 	m1.rupees = 100000.0;
// 	cout<<m1.rupees<<endl;
// 	m1.dollar = 100;
// 	cout<<m1.dollar<<endl;
// 	m1.pound = 1000;
// 	cout<<m1.pound<<endl;

// // Enum in c++------------------------------------------------------------------------------->
// enum Meal{breakfast,lunch,dinner};
// cout<<breakfast<<endl;
// cout<<lunch<<endl;
// cout<<dinner<<endl;
// // We can use "Meal" as a datatype.
// Meal m1 = dinner;
// cout<<m1<<endl;
// cout<<(m1==2)<<endl;

// // Funcation --------------------------------------------------------------------------------------->
// // We can also set default arguments 
// 	int c = sum(5,5);
// 	cout <<c <<endl;

// // Inline funcations ------------------------------------------------------------------------------------->
// // It is only use for small funcation.
// int a,b;
// a = 5;
// b = 4;
// cout <<product(a,b)<<endl;

// // Use of static ---------------------------------------------------------------------------------------->
// int a,b;
// a = 5;
// b = 4;
// cout <<sub(a,b)<<endl;
// cout <<sub(a,b)<<endl;
// cout <<sub(a,b)<<endl;
// cout <<sub(a,b)<<endl;
// cout <<sub(a,b)<<endl;


	return 0;
}
