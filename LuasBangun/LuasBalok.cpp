#include <iostream>
using namespace std; 

	int main (){ 
	  float p, l, t, v;
     
      cout << "MENGHITUNG LUAS BALOK" << endl;
      cout << "Masukan panjang balok: ";
	  cin >> p;
      cout << "Masukan lebar balok: ";
	  cin >> l;
      cout << "Masukan tinggi balok: ";
	  cin >> t;
	  
	  v = p*l*t;
	  
      cout << "Jadi Luas balok adalah: " << v;
      return 0;
	}


