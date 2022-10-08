#include<iostream>
using namespace std;
/*saya introvert dan pemalu, sulit bagi saya untuk mendapat nilai plus. 
sehingga saya harus berusaha keras untuk mendapatkan nilai yang cukup melalui tugas, UTS, dan UAS.
*/
int main (){
	//input
	float x1, x2, x3, y1, y2;
	cout<<"Jumlah Emas dibeli \t : ";
	cin>>x1;
	cout<<"Harga saat pembelian \t : Rp.";
	cin>>x2;
	cout<<"Harga saat ini \t\t : Rp.";
	cin>>x3;
	//output
	cout<<"=====================================";
	y1 = ((x3 - x2) / x2 ) * 100;
	y2 = (x3 - x2) / 14500;
	cout<<"\nKenaikan/Penurunan \t : "<<y1<<" %";
	cout<<"\nKeuntungan/Kerugian \t : $"<<y2<<endl;

	//Ikhtiar Adli Wicaksono
	return 0;
}
