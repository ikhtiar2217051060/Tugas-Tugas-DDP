#include<iostream>
using namespace std;

int main(){
	string p, q, r, s;
	cout<<"Ketik Nama Anda \t: ";
	getline(cin, p);
	cout<<"Ketik NPM Anda \t\t: ";
	getline(cin, q);
	cout<<"Kelas \t\t\t: ";
	getline(cin, r);
	cout<<"Jurusan \t\t: ";
	getline(cin, s);
	cout<<"=======================================================";
	cout<<"\nNama \t\t\t: "<<p;
	cout<<"\nNPM \t\t\t: "<<q;
	cout<<"\nKelas \t\t\t: "<<r;
	cout<<"\nJurusan \t\t: "<<s<<endl;

	return 0;
}
