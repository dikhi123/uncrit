#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	char nama_1 [15], nama_2[15], nama_3[15];
	int jumlah_1, harga_1, jumlah_2, harga_2, jumlah_3, harga_3, total;
	
	cout<< "tugas #2 Algoritma dan Pemograman No.2" <<endl;
	cout<< "NIM : 124200051" << endl;
	cout<< "Nama : Dikhi Dewantoro" << endl;
	cout<< "-------------------------------------------------" <<endl;
	cout<< "|                INPUT PEMBELIAN                |" <<endl;
	cout<< "-------------------------------------------------" <<endl;
	
	cout << " Nama Barang 1 : "; 
	cin.getline (nama_1, sizeof(nama_1));
	cout << " Jumlah Barang 1 : ";
	cin >> jumlah_1;
	cout << " Harga  Barang 1 : Rp. ";
	cin >> harga_1 ;
	cout << "" << endl;
	
	cout << " Nama Barang 2 : "; cin.ignore ();
	cin.getline (nama_2, sizeof(nama_2));
	cout << " Jumlah Barang 2 : ";
	cin >> jumlah_2;
	cout << " Harga Barang : Rp. ";
	cin >> harga_2;
	cout << "" << endl;
	
	cout << " Nama Barang 3 : "; cin.ignore ();
	cin.getline (nama_3, sizeof(nama_3));
	cout << " Jumlah Barang 3 : ";
	cin >> jumlah_3;
	cout << " Harga Barang : Rp. ";
	cin >> harga_3;
	cout << "" << endl;
	
	cout << "PEMBAYARAN :" << endl;
	cout << "------------------------------------------------" <<endl;
	cout << "|No              Nama Barang     Jumlah Barang |" <<endl;
	cout << "------------------------------------------------" <<endl; 
	cout << "1";
	cout << setw (22) << nama_1;
	cout << setw (17) << jumlah_1 << endl;
	cout << "2";
	cout << setw (22) << nama_2;
	cout << setw (17) << jumlah_2 << endl;
	cout << "3";
	cout << setw (22) << nama_3;
	cout << setw (17) << jumlah_3 << endl;
	cout << "------------------------------------------------" << endl;
	total = (jumlah_1*harga_1)+ (jumlah_2*harga_2)+(jumlah_3*harga_3);
	cout << " Total Harga = Rp. " << total <<endl;
	                 
	
	
	
}
