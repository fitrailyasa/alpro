#include <iostream>

using namespace std;

int main(){
		int jarak;
	float hasil;
	
	cin >> jarak;
	
	hasil = jarak;
	for (int i = 0; i <= 10; i++) {
		hasil /= 2;
	}
	
	cout << "gagal finish sisa " << hasil;


return 0;
}
