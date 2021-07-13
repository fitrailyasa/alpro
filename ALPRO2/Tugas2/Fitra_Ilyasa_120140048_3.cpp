//Fitra Ilyasa_120140048
#include <iostream>
using namespace std;

	int main () {
		int bil[5];
		
		for ( int i = 0; i < 5; i++) {
			cin >> bil[i];
		}
		for ( int j = 0; j < 5; j++) {
			if (bil[j] % 2 == 0) {
				cout << "Bilangan "<< bil[j] <<" merupakan bilangan genap";
			} else {
				cout << "Bilangan "<< bil[j] <<" tidak termasuk bilangan genap";
				return 0;
			}
			cout << endl;
		}
		
		
	return 0;
	}

