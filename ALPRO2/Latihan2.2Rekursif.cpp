#include <iostream>
using namespace std;

int ngapaya(int n){
	cout << n << endl;
	if (n == 0 || n ==1){
    	return n;
	}
	else {
    	return (ngapaya(n-1) + ngapaya(n-2));
	}
}

int main(){
	int n, i, j = 0;
	cout << "Masukkan bilangan bulat positif: ";
	cin >> n;
	cout << "Hasil akhirnya adalah = ";
	j = ngapaya(n);
	return 0;
}
