#include <iostream>
using namespace std;

	struct ISBN {
		string judul, pengarang, penerbit;
		int hal;
	};

	int main() {
		
		cout << "PROGRAM ISBN BUKU" << endl;

		item_buku a[5];
		for (int x = 0; x < 5; x++){
			cout << "Masukan judul buku : ";
			cin >> a[x].judul;
			cout << "Masukan jumlah halaman buku : ";
			cin >> a[x].hal;
			cout << "Masukan pengarang buku : ";
			cin >> a[x].pengarang;
			cout << "Masukan penerbit buku : ";
			cin >> a[x].penerbit;
		}
			for (int x = 0; x < 5; x++){
			cout << "Judul buku	: " << a[x].judul << endl;
			cout << "Jumlah halaman buku : "<< a[x].hal << endl;
			cout << "Pengarang buku : "<< a[x].pengarang << endl;
			cout << "Penerbit buku : "<< a[x].penerbit << endl;
		}
	return 0;
	}

