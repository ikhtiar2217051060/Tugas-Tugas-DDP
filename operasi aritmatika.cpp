#include<iostream>
using namespace std;

int main (){
	//pembagian
	float x1, x2, y;
	cout<<"input nilai x1 \t\t = ";
	cin>>x1;
	cout<<"input nilai x2 \t\t = ";
	cin>>x2;
	y = x1 / x2;
	cout<<"pembagian x1 dengan x2 \t = "<<y<<endl;
	cout<<"==================================\n";
	
	//bikondisional
	int a, b;
	cout<<"masukan sebuah bilangan bulat = ";
	cin>>a;
	
	b = a % 2;
	
	string c = b == 1 ? "ganjil" : "genap";
	cout<<a<<" adalah bilangan "<<c;
	//
	return 0;

}
