#include <iostream>
#include <string>
using namespace std;

struct rumah{
	string tipe_rumah,pemilik_rumah;

	int jumlah_kamar;

	float luas_rumah, tinggi_rumah;
};

int main() {
	rumah rumah1, rumah2;
	
	cout<<"Inputkan Tipe Rumah : ";
	cin>>rumah1.tipe_rumah;
	cout<<"Inputkan Jumlah Kamar : ";
	cin>>rumah1.jumlah_kamar;
	cout<<"Inputkan Luas rumah : ";
	cin>>rumah1.luas_rumah;
	cout<<"Inputkan Tinggi Rumah : ";
	cin>>rumah1.tinggi_rumah;
	cout<<"Inputkan Pemilik Rumah : ";
	cin>>rumah1.pemilik_rumah;
	cout<<"\n";
	
	cout<<"Inputkan Tipe Rumah : ";
	cin>>rumah2.tipe_rumah;
	cout<<"Inputkan Jumlah Kamar : ";
	cin>>rumah2.jumlah_kamar;
	cout<<"Inputkan Luas rumah : ";
	cin>>rumah2.luas_rumah;
	cout<<"Inputkan Tinggi Rumah : ";
	cin>>rumah2.tinggi_rumah;
	cout<<"Inputkan Pemilik Rumah : ";
	cin>>rumah2.pemilik_rumah;
	
	return 0;
}


/*
Inputkan Tipe Rumah : 46A
Inputkan Jumlah Kamar : 2
Inputkan Luas rumah : 40.7
Inputkan Tinggi Rumah : 13.5
Inputkan Pemilik Rumah : Rendi


Inputkan Tipe Rumah : 42A
Inputkan Jumlah Kamar : 5
Inputkan Luas rumah : 120.5
Inputkan Tinggi Rumah : 20.5
Inputkan Pemilik Rumah : Ahmad
*/
