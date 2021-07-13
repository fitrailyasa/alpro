//Fitra_Ilyasa_120140048
#include <iostream>
using namespace std;

	int main(){
		string pass;
		int i = 2;
		
		cout << "Masukkan Password : ";
		cin >> pass;
		
		while (pass != "ITERA"){
	
		cout << "Login Gagal" << endl;
		cout << "Kesempatan login " << i << " lagi" << endl << endl;
			
		cout << "Masukkan Password : ";
		cin >> pass;
		
		i--;
		if (pass == "ITERA"){
			cout << "Login Berhasil";
			break;
		}
		if (i<1){
			cout << "Akun Anda Terkunci";
			break;
			}
		}
		
		return 0;
	}
