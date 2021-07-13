#include<iostream>
using namespace std;
	
	struct ISBN {
	    string judul, pengarang, penerbit;
	    int hal;
	};
	
	
	int main(){
	    ISBN a;
	
	    cout << "PROGRAM ISBN BUKU" << endl;
	    
	    cout << "Masukan Judul Buku : ";
		cin >> a.judul;
	    cout << "Masukan Pengarang Buku : ";
		cin >> a.pengarang;
	    cout << "Masukan Jumlah Halaman Buku : ";
		cin >> a.hal;
	    cout << "Masukan Penerbit Buku : ";
		cin >> a.penerbit;
	    cout << endl;
	
		cout << "Judul buku : " << a.judul << endl;
		cout << "Jumlah halaman buku : "<< a.hal << endl;
		cout << "Pengarang buku : "<< a.pengarang << endl;
		cout << "Penerbit buku : "<< a.penerbit << endl;
		
		return 0;
	}

