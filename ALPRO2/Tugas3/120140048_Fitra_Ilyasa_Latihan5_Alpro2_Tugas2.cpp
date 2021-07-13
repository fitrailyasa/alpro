//120140048_Fitra_Ilyasa
#include <iostream>
using namespace std; 

	int main(){
	    char nama[100][100];
	    float uts[100], uas[100];
	    float rata[1000];
	    float no;
	
	    cout << "Masukkan jumlah mahasiswa: ";
	    cin >> no;
	   
	    for (int x = 1; x <= no; x++){
	    	cout << "Masukkan nama mahasiswa: ";
	        cin >> nama[x];
	        cout << "Masukkan nilai UTS: ";
	        cin >> uts[x];
	        cout << "Masukkan nilai UAS: ";
	        cin >> uas[x];
	        rata[x] = (uas[x] + uts[x])/2;   
			cout << endl;  
	    }
	    
	    cout << endl;

	    cout << "Data Nilai Mahasiswa" << endl;
	    for (int y = 1; y <= no; y++){
	        cout << y << ". || Nama : " << nama[y] << " || Nilai : ";
	        	if ((rata[y] > 80) && (rata[y] <= 100)){
					cout << "A";
				}else if ((rata[y] > 70) && (rata[y] <= 80)){
					cout << "B";
				}else if ((rata[y] >= 60) && (rata[y] <= 70)){
					cout << "C" << endl;
				}else if ((rata[y] > 0) && (rata[y] < 60)){
					cout << "D";
				}else{
					cout << "0";
				}
			cout << endl;
	    }

	    return 0;
	}
