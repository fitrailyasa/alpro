#include <iostream>
using namespace std;

	int main(){
		float saldo, bunga, bulan;
		cout << "ALAT MENGHITUNG BUNGA BANK" << endl ;
		cout << "Masukkan jumlah tabungan Anda dalam Rupiah : ";
		cin >> saldo;
		cout << "Berapa lama tabungan Anda ? (bulan) ";
		cin >> bulan;
		
		if (saldo < 1000000){
		cout << "Bunga Anda sebesar Rp. " << (saldo/10000*bulan)<<endl;
		}else if (1000000 < saldo < 10000000){
		cout << "Bunga Anda sebesar Rp. " << (saldo/1000*bulan)<<endl;
		}else if (10000000 < saldo < 50000000){
		cout << "Bunga Anda sebesar Rp. " << (saldo/1000*5*bulan)<<endl;
		}else if (saldo > 50000000){
		cout << "Bunga Anda sebesar Rp. " << (saldo/100*bulan)<<endl;
		}else
		cout << "Silahkan menghubungi customer service" << endl;
		
	cout << endl;
	system("pause");
	return 0;
	}
