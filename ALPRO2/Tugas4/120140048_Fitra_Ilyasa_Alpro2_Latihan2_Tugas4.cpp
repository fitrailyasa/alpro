//120140048
#include <iostream>
using namespace std;

	float phi = 3.147;

	int kelLingkaran (float r, float keling){
	    keling = 2*phi*r;
	    cout << keling;
	    return keling;
	}
	
	int luasLingkaran (float r, float luling){
	    luling = phi*r*r;
	    cout << luling;
	    return luling;
	}
	
	int main (){
	    int r;
	    float kel, luas;

	    cout << "Masukan jari-jari = ";
	    cin >> r;
	    cout << "Keliling Lingkarang = ";
	    kelLingkaran (r,kel);
	    cout << endl;
	    cout << "luas Lingkarang = ";
	    luasLingkaran (r,luas);
	    cout << endl;
	    return 0;
	}
	

