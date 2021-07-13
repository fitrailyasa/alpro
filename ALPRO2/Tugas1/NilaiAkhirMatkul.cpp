//Fitra Ilyasa_120140048
#include <iostream>
using namespace std;

	int main(){
	    float nilaiTugas, nilaiUts, nilaiUas, nilaiAkhir;
	    cout << "Nilai Tugas = "; cin >> nilaiTugas;
	    cout << "Nilai UTS   = "; cin >> nilaiUts;
	    cout << "Nilai UAS   = "; cin >> nilaiUas;
	    nilaiTugas = nilaiTugas * 0.3;
	    nilaiUts = nilaiUts * 0.35;
	    nilaiUas = nilaiUas * 0.25;
	    nilaiAkhir = nilaiTugas + nilaiUts + nilaiUas;
	 
	    cout << endl;
	    cout << "\nNilai akhir  = " << nilaiAkhir << endl;
	
	return 0;  
	}
