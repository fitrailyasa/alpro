//120140048_Fitra_Ilyasa
#include <iostream>
using namespace std;

	int main() {
	    int jum, elemen, ada=0;
	    
	    cout << "Masukkan jumlah Mahasiswa: ";
	    cin >> jum;
	    
	    cout << "Masukkan nilai Mahasiswa: " << endl;
	    
		int arr[jum];
	    
		for(int x = 0; x < jum; x++)
	        cin >> arr[x];
	        
	    cout << "Pilih nilai yang akan dihapus: " << endl;
	    cin >> elemen;
	    
		for(int x = 0; x < jum; x++)
	    {
	        if(arr[x] == elemen)
	        {
	            for(int y = x; y < (jum - 1); y++)
	                arr[y] = arr[y + 1];
	            ada++;
	            x--;
	            jum--;
	        }
	    }
	    
		if(ada == 0){
			cout << "Nilai tidak ada dalam Array!" << endl;
	    }else {
	    	cout << "Nilai " << elemen << " telah berhasil dihapus!" << endl;
		}
		cout << endl;
	        	
        cout << "Nilai Mahasiswa yang sekarang adalah:" << endl;
		for(int x = 0; x < jum; x++){
			cout << arr[x] << endl;
		}
			
	return 0;		
	}

