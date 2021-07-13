#include <iostream>
using namespace std;

	struct mhs{
	   	int nim, sks;
	    string nama, matkul, hmutu;
	};
	
	int main() {
	    int n;
	    
	    cout << "MASUKAN JUMLAH MAHASISWA: ";
	    cin >> n ;
	    mhs a[n];
	
	    for (int x = 0; x < n; x++) {
	        cout << "Masukan NIM : ";
	        cin >> a[x].nim;
	        cout << "Masukan Nama : ";
	        getline (cin, a[x].nama);
	        getline (cin, a[x].nama);
	        cout << "Masukan Nama Mata Kuliah : ";
	        getline (cin, a[x].matkul);
	        cout << "Masukan Jumlah SKS : ";
	        cin >> a[x].sks;
	        cout << "Masukan Huruf Mutu : ";
	        cin >> a[x].hmutu;
	        
	        cout << endl;
	    }
	    
	
	    for (int x = 0; x < n; x++) {
	        cout << "NIM : " << a[x].nim << endl;
	        cout << "Nama : " << a[x].nama << endl;
	        cout << "Nama Mata Kuliah : " << a[x].matkul << endl;
	        cout << "Jumlah SKS : " << a[x].sks << endl;
	        cout << "Huruf Mutu : " << a[x].hmutu << endl;
	        cout << endl;
	    }
	return 0;
	}


