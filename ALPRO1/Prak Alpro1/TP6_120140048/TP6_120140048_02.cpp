//Nama : Fitra Ilyasa
//NIM : 120140048
#include <iostream>
using namespace std;

float avg(float jum, int n){
	
	return jum / (n*n);
}
int main(){
	
	int n, x, y;
	float jumlah = 0, rata2;
	
	cin >> n;
	
	float talent[n][n];	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> talent[i][j];
			jumlah += talent[i][j];
		}
	}
	cin >> x >> y;
	
	rata2 = avg(jumlah, n);
	
	cout << endl;
	cout << "Talent : " << endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << talent[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << endl;
	cout << "Rata-Rata : " << rata2 << endl;
	
	if(talent[x][y] > rata2){
		cout << "Hasil : Lolos";
	} else {
		cout << "Hasil : Tidak Lolos";
	}
	
    return 0;
}
