/*	120140048
	1. 8
	2. Berubah menjadi 5
	3. Array data berjumlah 10 dan array dataku berjumlah 9, fungsi kokbisa bertujuan untuk 
	   mencari dan mengeluarkan nilai yang tidak ada pada array dataku. 
	   Oleh karena itu, pada awalnya array dataku tidak ada nilai 8, maka outputnya = 8, dan setelah
	   nilai 8 dimasukkan ke dalam array dataku (menggantikan nilai 5) maka nilai outputnya berubah menjadi 5,
	   karena nilai 5 jadi tidak ada dalam array dataku. */ 
#include <iostream>
using namespace std;

	int data[10] = {1,2,3,4,5,6,7,8,9,10};
	
	int kokbisa(int apaini, int apaitu) {
		apaini -= apaitu;
	  return apaini;
	}
	
	int main() {
		int apaini = 0;
		int dataku[9] = {2,3,8,6,1,4,9,10,7};
		for (int i = 0; i < 10; i++) {
			apaini += data[i];
		}
		for (int i = 0; i < 9; i++) {
			apaini = kokbisa(apaini, dataku[i]);
		}
		cout << apaini << endl;
	  return 0;
	}
