//Fitra_Ilyasa_120140048
#include <iostream>
using namespace std;

	int main(){
		int suhu, F, R, K;
		string konversi;
	
		cin >> suhu;
		cin >> konversi;
		
		F = ((9*suhu)/5) + 32;
		R = (4 * suhu)/5;
		K = suhu + 273;
		
		if (konversi == "F"){
			cout << F << endl;
		}
		else if (konversi == "R"){
			cout << R << endl;
		}
		else {
			cout << K << endl;
		}
		
		return 0;
	}
