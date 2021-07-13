#include <iostream>
using namespace std; 

int main (){ 
	int n;
	float jari, luas;
    const float phi = 3.14;
    
    cout << "PROGRAM HITUNG LUAS LINGKARAN" << endl;
    cout << "Masukan jumlah lingkaran: ";
    cin >> n;
    for (int i = 0; i < n; i++){
	    cout << "Masukan jari-jari: ";
	    cin >> jari;
	    
	    luas = phi * jari * jari;
	    cout << "Jadi, Luasnya adalah " << luas << endl;
	    
	    cout << "Kategori: ";
	    if(luas > 5000){
	    	cout << "Besar";
		} else if (luas > 2000){
			cout << "Sedang";
		} else if (luas <= 2000){
			cout << "Kecil";
		}
		cout << endl;
	}
	return 0;
}

