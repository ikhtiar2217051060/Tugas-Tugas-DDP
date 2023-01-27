#include <iostream>
#include <iomanip>
using namespace std;
//I.A. WIcaksono (Ph.D)
int main() {
	int fis[10], kim[10], mat[10], bio[10];
	float jumlah[10], rata_siswa[10], fisika=0, kimia=0, matematika=0, biologi=0;
	char nama[10][10];
	int jml_data;	
	cout<<"Masukan Banyaknya data: ";
	cin>>jml_data;	
	for (int x=0; x<jml_data; x++){
		cout<<"--------------------------\n";
		cout<<"Data ke-"<<x+1<<endl;
		cout<<"--------------------------\n";
		cout<<"Nama Panggilan\t : "; cin>>nama[x];
		cout<<"Nilai Fisika\t : "; cin>>fis[x];
		cout<<"Nilai Matematika : "; cin>>mat[x];
		cout<<"Nilai Kimia\t : "; cin>>kim[x];
		cout<<"Nilai Biologi\t : "; cin>>bio[x];
		
		jumlah[x]=fis[x]+mat[x]+kim[x]+bio[x];
		rata_siswa[x]=jumlah[x]/4;
//biar setiap nilai yang diinput langsung auto SUM
		fisika+=fis[x]; 
		matematika+=mat[x];
		kimia+=kim[x];
		biologi+=bio[x];
	}
	cout<<"---------------------------------------------------------------\n";
	cout<<setw(4)<<"No"<<setw(15)<<"Nama"
		<<setw(15)<<"Fisika"<<setw(20)<<"Matematika"
		<<setw(15)<<"Kimia"<<setw(15)<<"Biologi"<<endl;
	cout<<"----------------------------------------------------------------\n";
	for (int x=0; x<jml_data; x++){
		cout<<setw(4)<<x+1<<setw(15)<<nama[x]
			<<setw(13)<<fis[x]<<setw(18)<<mat[x]
			<<setw(18)<<kim[x]<<setw(14)<<bio[x]<<endl;
	}
	cout<<"\nRata-Rata Tiap Mahasiswa: "<<endl;
	for (int x=0; x<jml_data; x++){
		cout<<nama[x]<<"\t: "<<rata_siswa[x]<<endl;
	}
	cout<<"\nRata-Rata Tiap Mata Kuliah: ";
	cout<<"\nFisika\t\t: "<<fisika/jml_data;
	cout<<"\nMatematika\t: "<<matematika/jml_data;
	cout<<"\nKimia\t\t: "<<kimia/jml_data;
	cout<<"\nBiologi\t\t: "<<biologi/jml_data;
	return 0;
}
