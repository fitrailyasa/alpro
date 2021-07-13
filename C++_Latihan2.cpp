#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "==========================" << endl;
	cout << "|| PROGRAM GANJIL GENAP ||" << endl;
	cout << "==========================" << endl;
	cout << "Masukan angka: ";
	cin >> n;
	if(n%2==1){
		if(0>n){
			cout << n << " adalah bilangan ganjil negatif";
		} else{
			cout << n << " adalah bilangan ganjil positif";
		}
	} else{
		if(n>0){
			cout << n << " adalah bilangan genap positif atau nol";
		}else{
			cout << n << " adalah bilangan genap negatif";
		}
	}
	cout << endl;
	system("pause");
	return 0;
}
