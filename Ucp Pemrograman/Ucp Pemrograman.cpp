// Nama: Faradila Fasya
// NIM : 20230140151

// 1. - int penjumlahan
//    - float pembagian
//    - string nim 
//
// 
// 2. void inputdata() {
// cout << "Masukkan Nilai sisi :";
// cin >> sisi;
//	}
//
//	int hitungluas() {
//	return sisi * sisi;
//	}

//	void display() {
//	cout << "Luas Persegi :" << hitungluas() << endl;
//	}
// 
// 
// 
// 3.   int main()
//		{
//	    int x;
//	      srand(time(0));
//
//	      x = rand() % 10;
//
//	    cout << "Nilai X awal ; " << x << endl;
//
//	    while (x > 4) {
//	       cout << "Perulangan While" << endl;
//		   x = rand() % 10;
//
//		   cout << "Nilai X : " << x << endl;
//	       }
//      }
// 
// 
// 
// 4.   if (nBilanganA == nBilanganB) {
//		status = "Sama Besar";
//  	}
//		
//		else if (nBilanganA > nBilanganB) {
//		status = "Bilangan A lebih besar dari Bilangan B";
//  	}
//
//		else {
//		status = "Bilangan A lebih kecil dari Bilangan B";
//  	}
// 
// 
//
// 5. struct Mahasiswa {
//		string nim;
//		string nama;
//		string alamat;
//		int umur;
//	};

//	int main() {
//	Mahasiswa mhs;
//	cout << "Nomor Mahasiswa :";
//	cin >> mhs.nim;
//	cout << "Nama Mahasiswa :";
//	cin >> mhs.nama;
//	cout << "Alamat Mahasiswa :";
//	cin >> mhs.alamat;
//	cout << "Umur Mahasiswa :";
//	cin >> mhs.umur;
//
//	cout << endl;
//	cout << "\n NIM :" << mhs.nim;
//	cout << "\n Nama :" << mhs.nama;
//	cout << "\n Alamat :" << mhs.alamat;
//	cout << "\n Umur :" << mhs.umur;
//  }


#include <iostream>
using namespace std;

struct Kondisi {
	string Alamat;
	string IndeksUdara;
	string Sensor;
};

int main() {
	Kondisi kota;
	for (int i = 0; i < 2; i++) {
		cout << "Kota ke-" << (i + 1) << ":" << endl;
		cout << "Nama Kota : ";
		cin >> kota.Alamat;
		cout << "Maukkan Nilai Indeks Udara :";
		cin >> kota.IndeksUdara;
		cout << "Masukkan Nilai  Sensor :";
		cin >> kota.Sensor;
	}

	int nilaiIndeksUdara, nilaiSensor, nRerata;
	string status;

	nRerata = (nilaiIndeksUdara + nilaiSensor) / 2;

	if (nilaiIndeksUdara > 75) {

		status = "Sehat";
	}
	else if (nilaiSensor > 45) {
		status = "Sehat";
	}

	else {
		status = "Tidak Sehat";
	}
	
	cout << "Nilai Indeks : " << nilaiIndeksUdara << endl;
	cout << "Nilai Sensor : " << nilaiSensor << endl;
	cout << "Statusnya Adalah :" << status << endl;


	return 0;

}