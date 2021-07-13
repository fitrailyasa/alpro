#include <iostream>
using namespace std;

void fungsi(int a, int b){
	int hasil;
	hasil = a + b;
	cout << hasil;
}

int main(){
	int a, b;
	
	cout << "===============================" << endl;
	cout << "|| PROGRAM JUMLAH 2 BILANGAN ||" << endl;
	cout << "===============================" << endl;
	
	cout << "Masukkan bilangan ke-1: ";
	cin >> a;
	cout << "Masukkan bilangan ke-2: ";
	cin >> b;
	cout << "Hasilnya adalah: ";
	fungsi(a,b);
	
	cout << endl;
	system("pause");
	return 0;
}

