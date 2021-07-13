//Fitra Ilyasa_120140048
#include <iostream>
using namespace std;

	int main () {
		int bil[8];
		for ( int i = 0; i < 8; i++) {
			cin >> bil[i];
		}
		
		int jumlahGenap = 0;
		int jumlahGanjil = 0;
		int tmp;
		for (int j = 0; j < 8; j++) {
			tmp = bil[j] % 2;
			switch (tmp) {
				case 0 :
					jumlahGenap += 1;
					break;
				case 1 :
					jumlahGanjil += 1;
				default :
					break;
			}
		}
		
		cout << "Bilangan genap : " << jumlahGenap;
		cout << "\nBilangan ganjil : " << jumlahGanjil;
		
	return 0;
	}
  
