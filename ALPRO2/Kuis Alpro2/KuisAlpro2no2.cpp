#include <iostream>
using namespace std;

	struct mhs{
	    int nim, angkatan;
	    string nama, matkul;
	    float ipk;
	};
	
	int main() {
	    int n, x, cekjum;
	    
	    cout << "MASUKAN JUMLAH MAHASISWA: ";
	    cin >> n ;
	    mhs a[n];
	
	    for (x = 0; x < n; x++) {
	        cout << "Masukan NIM : ";
	        cin >> a[x].nim;
	        cout << "Masukan Nama : ";
	        getline (cin, a[x].nama);
	        getline (cin, a[x].nama);
	        cout << "Tahun Angkatan : ";
	        cin >> a[x].angkatan;
	        cout << "IPK : ";
	        cin >> a[x].ipk;
	        
	        cout << endl;
	    }
	    
	
	    for (x = 0; x < n; x++) {
	        cout << "NIM : " << a[x].nim << endl;
	        cout << "Nama : " << a[x].nama << endl;
	        cout << "Tahun Angkatan : " << a[x].angkatan << endl;
	        cout << "IPK : " << a[x].ipk << endl;
			}
			
		for (x = 0; x < n; x++){
		if (a[x].angkatan == 2017 && a[x].ipk < 2){
			cekjum = cekjum + 1;
		}
		} 
			cout << "Jumlah mahasiswa angkatan 2017 dengan IPK dibawah 2.0 adalah " << cekjum << " mahasiswa.";
	return 0;
}


