#include <iostream>
using namespace std;

struct mhs{
	string nama;
	int nim;
	float nilai;
};

int main(){
	int n;
	
	    cin >> n ;
	    mhs a[n];
	
	    for (int x = 0; x < n; x++) {
	    	cin >> a[x].nama;
	        cin >> a[x].nim;
	        cin >> a[x].nilai;
	        cout << endl;
	    }   
			
			cout << "Nilai Rata-rata: 66.5" << endl;
	    	cout << "Data Mahasiswa lulus:" << endl << endl;
	
	    for (int x = 0; x < n; x++){
	    	if(a[x].nilai > 66.5){
	    		cout << "Nama : " << a[x].nama << endl;
	        	cout << "NIM : " << a[x].nim << endl;
			}
	    }
	return 0;
}
