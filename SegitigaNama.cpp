#include <iostream>
using namespace std;
 
int main(){
	int tinggiSegitiga, i, j, k;
	string nama;
	cout << "=========================" << endl;
	cout << "|| CETAK SEGITIGA NAMA ||" << endl;
	cout << "=========================" << endl;
	cout << endl;
	cout << "Input nama: ";
	getline(cin, nama);
	cout << "Input tinggi segitiga: ";
	cin >> tinggiSegitiga;
	cout << endl;
	for(i = 1; i <= tinggiSegitiga; i++) {
	    for(j = 1; j <= tinggiSegitiga-i; j++) {
	      cout << " ";
	    }
	    for(k = 1; k <= i; k++) {
	      cout << " " << nama;
	    }
    cout << endl;
	}
	cout << endl;
	system("Pause");
	return 0;
}
