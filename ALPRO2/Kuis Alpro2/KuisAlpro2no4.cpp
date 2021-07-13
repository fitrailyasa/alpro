#include <iostream>
using namespace std;

//Data yang diproses dalam algoritma
int data_angka[7] = {8, 10, 9, 2, 7, 15, 5};

//Subprogram untuk proses pengurutan
int proses(){
	int temp, jum = 0;
	
	for (int i=0; i<6; i++){
		for (int j=0; j<6; j++){
			//Pengecekan apakah urutan data harus di ubah
			if(data_angka[j] > data_angka[j+1]){
				temp = data_angka[j];
				data_angka[j] = data_angka[j+1];
				data_angka[j+1] = temp;
				
				//Banyaknya proses penukaran
				jum++;
			}
		}
	}
	return jum;;
}

int main(){
	int hasil;
	
	//Pemanggilan subprogram yang akan memproses pengurutan data
	hasil = proses();
	
	//Menampilkan data hasil dari proses pengurutan ke layar
	for (int i=0; i<6; i++){
		cout << data_angka[i] << "  ";
	}
	cout << endl;
	
	return 0;
}
