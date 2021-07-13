#include <iostream>
using namespace std;

int main(){
	int x;
	
	for(x = 1; x <= 5; x++){
		cin >> x;
	}
	
	for(x = 1; x <= 5; x++){
		switch (x){
			case 1:
			cout << x << " Merupakan Bilangan Ganjil" << endl;
			break;	
			case 2:
			cout << x << " Merupakan Bilangan Genap" << endl;
			break;
			case 3:
			cout << x << " Merupakan Bilangan Ganjil" << endl;
			break;
			case 4:
			cout << x << " Merupakan Bilangan Genap" << endl;
			break;
			case 5:
			cout << x << " Merupakan Bilangan Ganjil" << endl;
			break;
		}
	}
	return 0;			
}

