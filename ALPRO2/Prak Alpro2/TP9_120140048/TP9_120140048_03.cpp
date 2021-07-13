//120140048
#include <iostream>
using namespace std;

	struct mhs{
		string nama;
	    int nim, nilai;
	    
	};
	
	int main() {
	    int n;
	    int urut;
	    int target;
	    int indeks;
	    
	    cin >> n ;
	    mhs a[n];
	
	    for (int i = 0; i < n; i++) {
	        cin >> a[i].nama;
	        cin >> a[i].nim;
	        cin >> a[i].nilai;
	    }
	    
	for(int i = 0; i < n; i++){
	    for(int j = i; j <= n; j++){
	        if(a[i].nilai > a[j].nilai){
	            urut = a[j].nilai;
	            a[j].nilai = a[i].nilai;
	            a[i].nilai = urut;
	            
			    if ( a[i].nim == target ) {
			   	indeks = i;
			   	cout << a[indeks].nama << endl;
			   	cout << a[indeks].nilai << endl;
			   }
	        }
	    }
	}
	    
	   
	    
	return 0;
	}
